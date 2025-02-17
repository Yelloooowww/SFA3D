;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::brake_cmd)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'brake_cmd (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::BRAKE_CMD")
  (make-package "AUTOWARE_MSGS::BRAKE_CMD"))

(in-package "ROS")
;;//! \htmlinclude brake_cmd.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass autoware_msgs::brake_cmd
  :super ros::object
  :slots (_header _brake ))

(defmethod autoware_msgs::brake_cmd
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:brake __brake) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _brake (round __brake))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:brake
   (&optional __brake)
   (if __brake (setq _brake __brake)) _brake)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _brake
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _brake
       (write-long _brake s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _brake
     (setq _brake (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::brake_cmd :md5sum-) "5705431e779f450d71c11d56d5a2d8ed")
(setf (get autoware_msgs::brake_cmd :datatype-) "autoware_msgs/brake_cmd")
(setf (get autoware_msgs::brake_cmd :definition-)
      "Header header
int32 brake

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



(provide :autoware_msgs/brake_cmd "5705431e779f450d71c11d56d5a2d8ed")


