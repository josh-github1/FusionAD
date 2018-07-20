#!/usr/bin/env python
import cv2
import rospy
import roslib
import numpy as np
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

def main():
    #Initialize node 
    rospy.init_node('camera')
    
    #Create bridge object
    bridge= CvBridge()
    
    #Create publisher  and to publish raw image data
    pub= rospy.Publisher("/raw_USBcamera_images", Image, queue_size=1)
    rate= rospy.Rate(10)
    
    #initialize camera
    cap= cv2.VideoCapture(1)
    print "Camera Initialized"
    
    while not rospy.is_shutdown():
        frameReadCorrectly, frame = cap.read()
        #If frame is empty, don't send anything (Stuff crashes)
        if frameReadCorrectly:
            pub.publish(bridge.cv2_to_imgmsg(frame, "bgr8"))
        rate.sleep()

    cap.release()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass