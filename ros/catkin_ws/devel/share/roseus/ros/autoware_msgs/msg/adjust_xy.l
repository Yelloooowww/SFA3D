;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::adjust_xy)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'adjust_xy (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::ADJUST_XY")
  (make-package "AUTOWARE_MSGS::ADJUST_XY"))

(in-package "ROS")
;;//! \htmlinclude adjust_xy.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass autoware_msgs::adjust_xy
  :super ros::object
  :slots (_header _x _y ))

(defmethod autoware_msgs::adjust_xy
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:x __x) 0)
    ((:y __y) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _x (round __x))
   (setq _y (round __y))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _x
    4
    ;; int32 _y
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _x
       (write-long _x s)
     ;; int32 _y
       (write-long _y s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _x
     (setq _x (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _y
     (setq _y (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::adjust_xy :md5sum-) "0b992aab7c6f38b1fcd66efe02889fca")
(setf (get autoware_msgs::adjust_xy :datatype-) "autoware_msgs/adjust_xy")
(setf (get autoware_msgs::adjust_xy :definition-)
      "Header header
int32 x
int32 y

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :autoware_msgs/adjust_xy "0b992aab7c6f38b1fcd66efe02889fca")


