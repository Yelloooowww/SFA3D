;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::steer_cmd)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'steer_cmd (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::STEER_CMD")
  (make-package "AUTOWARE_MSGS::STEER_CMD"))

(in-package "ROS")
;;//! \htmlinclude steer_cmd.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass autoware_msgs::steer_cmd
  :super ros::object
  :slots (_header _steer ))

(defmethod autoware_msgs::steer_cmd
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:steer __steer) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _steer (round __steer))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:steer
   (&optional __steer)
   (if __steer (setq _steer __steer)) _steer)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _steer
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _steer
       (write-long _steer s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _steer
     (setq _steer (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::steer_cmd :md5sum-) "a78f3e86a2d39111b18378b6ff89a1a1")
(setf (get autoware_msgs::steer_cmd :datatype-) "autoware_msgs/steer_cmd")
(setf (get autoware_msgs::steer_cmd :definition-)
      "Header header
int32 steer

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



(provide :autoware_msgs/steer_cmd "a78f3e86a2d39111b18378b6ff89a1a1")


