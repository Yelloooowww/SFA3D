;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::traffic_light)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'traffic_light (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::TRAFFIC_LIGHT")
  (make-package "AUTOWARE_MSGS::TRAFFIC_LIGHT"))

(in-package "ROS")
;;//! \htmlinclude traffic_light.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass autoware_msgs::traffic_light
  :super ros::object
  :slots (_header _traffic_light ))

(defmethod autoware_msgs::traffic_light
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:traffic_light __traffic_light) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _traffic_light (round __traffic_light))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:traffic_light
   (&optional __traffic_light)
   (if __traffic_light (setq _traffic_light __traffic_light)) _traffic_light)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _traffic_light
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _traffic_light
       (write-long _traffic_light s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _traffic_light
     (setq _traffic_light (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::traffic_light :md5sum-) "a4931ba214a0e37e220dd00b2acca20a")
(setf (get autoware_msgs::traffic_light :datatype-) "autoware_msgs/traffic_light")
(setf (get autoware_msgs::traffic_light :definition-)
      "Header header
int32 traffic_light

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



(provide :autoware_msgs/traffic_light "a4931ba214a0e37e220dd00b2acca20a")


