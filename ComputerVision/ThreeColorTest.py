import numpy as np
import cv2 as cv
import random
import time
last_time = time.time()
a = 0
#robot1 storage area


#robot2 pickup area
#robot1 pickup area
#robot2 storge area


WIDTH = 10000
HEIGHT = 10000

cap = cv.VideoCapture(1, cv.CAP_DSHOW)
cap.set(cv.CAP_PROP_FRAME_WIDTH, WIDTH)
cap.set(cv.CAP_PROP_FRAME_HEIGHT, HEIGHT)

robot_positions = [[0,0], [0, 0]]
robot_directions = [0, 0]
if not cap.isOpened():
    print("Cannot open camera")
    exit()
while True:
    commands = ["for", "for"]

    info = []
    # Capture frame-by-frame
    ret, frame = cap.read()
    frame = cv.rotate(frame, cv.ROTATE_180)

    # Define the region of interest (ROI) coordinates
    x1, y1 = 100, 0  # Top-left corner
    x2, y2 = 1820, 1080  # Bottom-right corner

    # Crop the image
    frame = frame[y1:y2, x1:x2]

    # if frame is read correctly ret is True
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    blur_frame = cv.blur(frame, (9, 9))
    # Our operations on the frame come here
    hsv = cv.cvtColor(blur_frame, cv.COLOR_BGR2HSV)
    lower_blue = np.array([150, 20, 20])
    upper_blue = np.array([190, 255, 255])
    blue_mask = cv.inRange(hsv, lower_blue, upper_blue)

    lower_orange = np.array([5, 50, 50])
    upper_orange = np.array([30, 255, 255])
    orange_mask = cv.inRange(hsv, lower_orange, upper_orange)

    masks = [blue_mask, orange_mask]
    names = ["pink", "orange"]
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
            # cv.putText(frame, name, (cx - 20, cy - 20),
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

        if (abs(direction-direction_centers) < 50):
            real_end = endpoint2
            direction+=180
            if (direction > 180):
                direction -= 360
        else:
            real_end = endpoint1

        direction *= -1
        #print(i)
        robot_directions[i] = direction

        #cv.circle(frame, center, 7, (0, 0, 255), -1)
        cv.circle(frame, real_end, 7, (255, 255, 255), -1)

        cv.putText(frame, f"{direction:.2f}", (cx - 20, cy - 20),
                   cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
        #print(direction)
        cv.drawContours(frame, c, -1, (0, 255, 0), 3)







    # #identify if cargo is ready to be picked up:
    # lower_pink = np.array([140, 50, 50])
    # upper_pink = np.array([160, 255, 255])
    # pink_mask = cv.inRange(hsv, lower_pink, upper_pink)
    #
    # res = cv.bitwise_and(frame, frame, mask=pink_mask)
    # contours, hierarchy = cv.findContours(pink_mask, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)
    # min_cargo_area = 50
    # filtered_contours = [contour for contour in contours if cv.contourArea(contour) > min_cargo_area]
    #
    # height, width = frame.shape[:2]
    # size = 100
    # offset = 20
    #
    # for cnt in filtered_contours:
    #     M = cv.moments(cnt)
    #     if M['m00'] != 0:
    #         cx = int(M['m10'] / M['m00'])
    #         cy = int(M['m01'] / M['m00'])
    #         cv.drawContours(frame, [cnt], -1, (0, 255, 0), 2)
    #         cv.circle(frame, (cx, cy), 7, (0, 0, 255), -1)
    #         cv.putText(frame, "cargo", (cx - 20, cy - 20),
    #                    cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

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




    #cargo pickup area
    pt1 = (250, 30)
    pt2 = (500, 300)
    cv.putText(frame, "cargo pickup pink", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 255, 0), 3)

    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        commands[0] = "clo"

    pt1 = (350, 900)
    pt2 = (480, 1080)
    cv.putText(frame, "cargo pickup orange", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 255, 0), 3)

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        commands[1] = "clo"

    pt1 = (925, 780)
    pt2 = (1230, 1070)
    cv.putText(frame, "storage pink", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 255, 0), 3)

    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        commands[0] = "ope"


    pt1 = (1300, 20)
    pt2 = (1450, 280)
    cv.putText(frame, "storage orange", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 255, 0), 3)

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        commands[1] = "ope"
    pt1 = (32, 320)
    pt2 = (280, 680)
    cv.putText(frame, "intersection 1", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 255, 0), 3)

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        info.append("orange at intersection 1")
        if 140 < robot_directions[1] or -140 > robot_directions[1]:
            commands[1] = "lef"
        elif 50 < robot_directions[1] < 130:
            commands[1] = "rig"

    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        info.append("pink at intersection 1")
        if 140 < robot_directions[0] or -140 > robot_directions[0]:
            commands[0] = "rig"
        elif -50 > robot_directions[0] > -130:
            commands[0] = "lef"


    pt1 = (1420, 320)
    pt2 = (1710, 680)
    cv.putText(frame, "intersection 2", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 255, 0), 3)

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        info.append("orange at intersection 2")
        if -40 < robot_directions[1] < 40:
            commands[1] = "lef"
        elif -50 > robot_directions[1] > -130:
            commands[1] = "rig"


    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        info.append("pink at intersection 2")
        if -40 < robot_directions[0] < 40:
            commands[0] = "rig"
        elif 50 < robot_directions[0] < 130:
            commands[0] = "lef"

    pt1 = (560, 400)
    pt2 = (1200, 680)
    cv.putText(frame, "wait zone", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (255, 0, 0), 3)

    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        pink_in_wait_zone = True
    else:
        pink_in_wait_zone = False

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        orange_in_wait_zone = True
    else:
        orange_in_wait_zone = False

    pt1 = (40, 0)
    pt2 = (250, 1080)
    cv.putText(frame, "busy zone 1", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 0, 255), 3)

    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        pink_in_busy_zone1 = True
    else:
        pink_in_busy_zone1 = False

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        orange_in_busy_zone1 = True
    else:
        orange_in_busy_zone1 = False

    pt1 = (1550, 0)
    pt2 = (1680, 1080)
    cv.putText(frame, "busy zone 2", pt1,
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
    cv.rectangle(frame, pt1, pt2, (0, 0, 255), 3)

    if pt1[0] < robot_positions[0][0] < pt2[0] and pt1[1] < robot_positions[0][1] < pt2[1]:
        pink_in_busy_zone2 = True
    else:
        pink_in_busy_zone2 = False

    if pt1[0] < robot_positions[1][0] < pt2[0] and pt1[1] < robot_positions[1][1] < pt2[1]:
        orange_in_busy_zone2 = True
    else:
        orange_in_busy_zone2 = False

    if (orange_in_busy_zone1 or pink_in_busy_zone1):
        if (orange_in_wait_zone):
            if (abs(robot_directions[1]) > 150):
                commands[1] = "sto"
        if (pink_in_wait_zone):
            if (abs(robot_directions[0]) > 150):
                commands[0] = "sto"

    if (orange_in_busy_zone2 or pink_in_busy_zone2):
        if (orange_in_wait_zone):
            if (abs(robot_directions[1]) < 40):
                commands[1] = "sto"
        if (pink_in_wait_zone):
            if (abs(robot_directions[0]) < 40):
                commands[0] = "sto"





    # detrmine if the two robots are too close together and need to pass
    min_distance = 350
    distance_between = np.sqrt(
        (robot_positions[0][0] - robot_positions[1][0]) ** 2 + (robot_positions[0][1] - robot_positions[1][1]) ** 2)
    distance_between_x = abs(robot_positions[0][0] - robot_positions[1][0])
    distance_between_y = abs(robot_positions[0][1] - robot_positions[1][1])
    info.append(f"dis {distance_between}")

    if (distance_between_x < min_distance and distance_between_y < 50):

        info.append("robots touching")
        VAL = (robot_directions[0] - robot_directions[1]) % 360
        info.append(str(VAL))
        if (140 < VAL < 220):
            if (robot_positions[0][0] < robot_positions[1][0] and abs(robot_directions[0]) > 150 or
            robot_positions[0][0] > robot_positions[1][0] and abs(robot_directions[0]) < 30):
                pass
            else:
                if (abs(robot_positions[0][0] - 1920 / 2) < abs(robot_positions[1][0] - 1920 / 2)):
                    a = 0
                else:
                    a = 1
                    info.append("robots avoiding")
                commands[a] = "sto"
                commands[1-a] = "avo"
                last_time = time.time()
        else:
            info.append("robot passing")
            if (abs(robot_directions[0]) > 150):
                if (robot_positions[0][0] > robot_positions[1][0]):
                    commands[0] = "avo"
                    commands[1] = "sto"
                else:
                    commands[1] = "avo"
                    commands[0] = "sto"
            elif (abs(robot_directions[0] < 30)):
                if (robot_positions[0][0] > robot_positions[1][0]):
                    commands[1] = "avo"
                    commands[0] = "sto"
                else:
                    commands[0] = "avo"
                    commands[1] = "sto"

    print(commands)

    command_text = f"pink {commands[0]}, orange {commands[1]}"
    cv.putText(frame, command_text, (10, 50),
               cv.FONT_HERSHEY_SIMPLEX, 3, (255, 255, 255), 5)

    cv.putText(frame, ' '.join(info), (700, 200),
               cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

    #write logic for sending commands to robots here:
    # if (pickup1_cargo):
    #     pass#point north



    # Display the resulting frame
    print(command_text)

    with open("shared_data.txt", "w") as f:
        f.write(f"p {commands[0]} o {commands[1]}")

    cv.imshow('frame', frame)
    #cv.imshow('mask', blue_mask)
    #cv.imshow('res', res)
    if cv.waitKey(1) == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv.destroyAllWindows()