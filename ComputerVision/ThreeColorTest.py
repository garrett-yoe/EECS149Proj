import numpy as np
import cv2 as cv

cap = cv.VideoCapture(0)
if not cap.isOpened():
    print("Cannot open camera")
    exit()
while True:
    # Capture frame-by-frame
    ret, frame = cap.read()

    # if frame is read correctly ret is True
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    blur_frame = cv.blur(frame, (9, 9))
    # Our operations on the frame come here
    hsv = cv.cvtColor(blur_frame, cv.COLOR_BGR2HSV)
    lower_blue = np.array([100, 50, 50])
    upper_blue = np.array([130, 255, 255])
    blue_mask = cv.inRange(hsv, lower_blue, upper_blue)

    lower_orange = np.array([5, 50, 50])
    upper_orange = np.array([30, 255, 255])
    orange_mask = cv.inRange(hsv, lower_orange, upper_orange)

    masks = [blue_mask, orange_mask]
    names = ["blue", "ornge"]
    for i in range(0, len(masks)):
        mask = masks[i]
        name = names[i]
        res = cv.bitwise_and(frame, frame, mask=mask)
        contours, hierarchy = cv.findContours(mask, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)
        try:
            c = max(contours, key=cv.contourArea)
        except:
            continue
        M = cv.moments(c)
        if M['m00'] != 0:
            cx = int(M['m10'] / M['m00'])
            cy = int(M['m01'] / M['m00'])
            cv.drawContours(frame, [c], -1, (0, 255, 0), 2)
            cv.circle(frame, (cx, cy), 7, (0, 0, 255), -1)
            cv.putText(frame, name, (cx - 20, cy - 20),
                       cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
        cv.drawContours(frame, c, -1, (0, 255, 0), 3)

    # Display the resulting frame
    cv.imshow('frame', frame)
    #cv.imshow('mask', blue_mask)
    #cv.imshow('res', res)
    if cv.waitKey(1) == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv.destroyAllWindows()