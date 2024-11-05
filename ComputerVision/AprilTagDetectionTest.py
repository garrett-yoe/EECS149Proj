from pupil_apriltags import Detector
import os
os.add_dll_directory("C:/Users/username/Miniconda3/envs/my_env/lib/site-packages/pupil_apriltags.libs")

at_detector = Detector(
                        families='tag36h11',
                       nthreads=1,
                       quad_decimate=1.0,
                       quad_sigma=0.0,
                       refine_edges=1,
                       decode_sharpening=0.25,
                       debug=0)
import cv2
img = cv2.imread('AprilTagExample.png'.cv2.IMREAD_GRAYSCALE)
tags = at_detector.detect(img, estimate_tag_pose=False, camera_params=None, tag_size=None)
print(tags)