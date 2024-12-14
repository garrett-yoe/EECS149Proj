import numpy as np
import cv2 as cv

#robot1 storage area


#robot2 pickup area
#robot1 pickup area
#robot2 storge area




cap = cv.VideoCapture(1)
robot_positions = [[0,0], [0, 0]]
robot_directions = [0, 0]
if not cap.isOpened():
    print("Cannot open camera")
    exit()
while True:
    # Capture frame-by-frame
    ret, frame = cap.read()
    frame = cv.rotate(frame, cv.ROTATE_180)

    # if frame is read correctly ret is True
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    blur_frame = cv.blur(frame, (9, 9))
    # Our operations on the frame come here
    hsv = cv.cvtColor(blur_frame, cv.COLOR_BGR2HSV)
    lower_blue = np.array([100, 25, 25])
    upper_blue = np.array([130, 255, 255])
    blue_mask = cv.inRange(hsv, lower_blue, upper_blue)

    lower_orange = np.array([5, 50, 50])
    upper_orange = np.array([30, 255, 255])
    orange_mask = cv.inRange(hsv, lower_orange, upper_orange)

    masks = [blue_mask, orange_mask]
    names = ["blue", "orange"]
    #identify robots
    #print(f"wtf {len(masks)}")
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
            robot_positions[i]  = [cx, cy]
            cv.drawContours(frame, [c], -1, (0, 255, 0), 2)
            cv.circle(frame, (cx, cy), 7, (0, 0, 255), -1)
            #cv.putText(frame, name, (cx - 20, cy - 20),
            #           cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

        convexHull = cv.convexHull(c)
        cv.drawContours(frame, [convexHull], -1, (255, 0, 0), 2)

        distances = np.zeros((len(convexHull), len(convexHull)))
        for j in range(len(convexHull)):
            for k in range(len(convexHull)):
                distances[j, k] = np.linalg.norm(convexHull[j] - convexHull[k])

        # Find the indices of the farthest points
        max_distance = np.max(distances)
        indices = np.where(distances == max_distance)
        farthest_points = [convexHull[indices[0][0]], convexHull[indices[1][0]]]
        #print(farthest_points)
        endpoint1 = farthest_points[0][0]
        endpoint2 = farthest_points[1][0]
        cv.line(frame, (endpoint1), (endpoint2), (0, 255, 0), thickness=3, lineType=8)

        (x_axis, y_axis), radius = cv.minEnclosingCircle(c)

        center = (int(x_axis), int(y_axis))
        #radius = int(radius)



        direction = 180/np.pi*np.arctan2(endpoint1[1]-endpoint2[1], endpoint1[0]-endpoint2[0])
        direction_centers = 180/np.pi*np.arctan2(cy-center[1], cx-center[0])

        if (abs(direction-direction_centers) < 20):
            real_end = endpoint2
            direction+=180
            if (direction > 180):
                direction -= 360
        else:
            real_end = endpoint1

        direction *= -1
        #print(i)
        robot_directions[i] = direction

        cv.circle(frame, center, 7, (0, 0, 255), -1)
        cv.circle(frame, real_end, 7, (255, 255, 255), -1)

        cv.putText(frame, f"{direction:.2f}", (cx - 20, cy - 20),
                   cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
        #print(direction)
        cv.drawContours(frame, c, -1, (0, 255, 0), 3)



        #detrmine if the two robots are too close together
    # min_distance = 300
    # distance_between = np.sqrt((robot_positions[0][0]-robot_positions[1][0])**2+(robot_positions[0][1]-robot_positions[1][1])**2)
    # if (distance_between < min_distance):
    #     print("robots touching")


    #identify if cargo is ready to be picked up:
    lower_pink = np.array([140, 50, 50])
    upper_pink = np.array([160, 255, 255])
    pink_mask = cv.inRange(hsv, lower_pink, upper_pink)

    res = cv.bitwise_and(frame, frame, mask=pink_mask)
    contours, hierarchy = cv.findContours(pink_mask, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)
    min_cargo_area = 50
    filtered_contours = [contour for contour in contours if cv.contourArea(contour) > min_cargo_area]

    height, width = frame.shape[:2]
    size = 100
    offset = 20

    for cnt in filtered_contours:
        M = cv.moments(cnt)
        if M['m00'] != 0:
            cx = int(M['m10'] / M['m00'])
            cy = int(M['m01'] / M['m00'])
            cv.drawContours(frame, [cnt], -1, (0, 255, 0), 2)
            cv.circle(frame, (cx, cy), 7, (0, 0, 255), -1)
            cv.putText(frame, "cargo", (cx - 20, cy - 20),
                       cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

            # if (offset < cx < offset+size and offset < cy < offset+size):
            #     storage1_cargo = True
            # else:
            #     storage1_cargo = False
            # if (offset < cx < offset + size and height - size - offset < cy < offset + height - offset):
            #     storage2_cargo = True
            # else:
            #     storage2_cargo = False
            # if (width-offset-size < cx < width - offset and offset < cy < offset+size):
            #     pickup2_cargo = True
            # else:
            #     pickup2_cargo = False
            # if (width - offset - size < cx < width - offset and height - offset - size < cy < height - offset):
            #     pickup1_cargo = True
            # else:
            #     pickup1_cargo = False


    #storage robot 1
    # cv.rectangle(frame, (offset, offset), (offset+size, offset+size), (0, 255, 0), 3)
    # #storage robot 2
    # cv.rectangle(frame, (offset, height-size-offset), (offset+size, height-offset), (0, 255, 0), 3)
    # #pickup robot 2
    # cv.rectangle(frame, (width-offset-size, offset), (width - offset, offset + size), (0, 255, 0), 3)
    # #pickup robot 1
    # cv.rectangle(frame, (width - offset - size, height - offset - size), (width - offset,  height - offset), (0, 255, 0), 3)
    #

    #cargo pickup area
    cv.putText(frame, "cargo pickup", (520, 360),
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, (520, 360), (620,  460), (0, 255, 0), 3)

    if 520 < robot_positions[1][0] < 620 and 360 < robot_positions[1][1] < 460:
        print("Pckup")

    cv.rectangle(frame, (190, 360), (290,  460), (0, 255, 0), 3)
    cv.putText(frame, "right int", (190, 360),
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

    if 190 < robot_positions[1][0] < 290 and 290 < robot_positions[1][1] < 460:
        print("Right Intersection")

    cv.rectangle(frame, (90, 360), (190, 460), (0, 255, 0), 3)
    cv.putText(frame, "left int", (90, 360),
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

    if 90 < robot_positions[1][0] < 190 and 360 < robot_positions[1][1] < 460:
        print("Left Intersection")

    cv.rectangle(frame, (0, 150), (120, 250), (0, 255, 0), 3)
    cv.putText(frame, "dropoff", (0, 120),
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

    if 0 < robot_positions[1][0] < 120 and 150 < robot_positions[1][1] < 250:
        print("Dropoff")



    #write logic for sending commands to robots here:
    # if (pickup1_cargo):
    #     pass#point north



    # Display the resulting frame
    cv.imshow('frame', frame)
    #cv.imshow('mask', blue_mask)
    #cv.imshow('res', res)
    if cv.waitKey(1) == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv.destroyAllWindows()