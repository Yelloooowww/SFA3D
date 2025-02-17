;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::RemoteCmd)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'RemoteCmd (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::REMOTECMD")
  (make-package "AUTOWARE_MSGS::REMOTECMD"))

(in-package "ROS")
;;//! \htmlinclude RemoteCmd.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass autoware_msgs::RemoteCmd
  :super ros::object
  :slots (_header _vehicle_cmd _control_mode ))

(defmethod autoware_msgs::RemoteCmd
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:vehicle_cmd __vehicle_cmd) (instance autoware_msgs::VehicleCmd :init))
    ((:control_mode __control_mode) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _vehicle_cmd __vehicle_cmd)
   (setq _control_mode (round __control_mode))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:vehicle_cmd
   (&rest __vehicle_cmd)
   (if (keywordp (car __vehicle_cmd))
       (send* _vehicle_cmd __vehicle_cmd)
     (progn
       (if __vehicle_cmd (setq _vehicle_cmd (car __vehicle_cmd)))
       _vehicle_cmd)))
  (:control_mode
   (&optional __control_mode)
   (if __control_mode (setq _control_mode __control_mode)) _control_mode)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; autoware_msgs/VehicleCmd _vehicle_cmd
    (send _vehicle_cmd :serialization-length)
    ;; int32 _control_mode
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; autoware_msgs/VehicleCmd _vehicle_cmd
       (send _vehicle_cmd :serialize s)
     ;; int32 _control_mode
       (write-long _control_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; autoware_msgs/VehicleCmd _vehicle_cmd
     (send _vehicle_cmd :deserialize buf ptr-) (incf ptr- (send _vehicle_cmd :serialization-length))
   ;; int32 _control_mode
     (setq _control_mode (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::RemoteCmd :md5sum-) "4ef8b915e5d6977285cb18a9e6793604")
(setf (get autoware_msgs::RemoteCmd :datatype-) "autoware_msgs/RemoteCmd")
(setf (get autoware_msgs::RemoteCmd :definition-)
      "Header header
autoware_msgs/VehicleCmd vehicle_cmd
int32 control_mode

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

================================================================================
MSG: autoware_msgs/VehicleCmd
Header header
autoware_msgs/steer_cmd steer_cmd
autoware_msgs/accel_cmd accel_cmd
autoware_msgs/brake_cmd brake_cmd
autoware_msgs/lamp_cmd lamp_cmd
int32 gear
int32 mode
geometry_msgs/TwistStamped twist_cmd
autoware_msgs/ControlCommand ctrl_cmd
int32 emergency

================================================================================
MSG: autoware_msgs/steer_cmd
Header header
int32 steer

================================================================================
MSG: autoware_msgs/accel_cmd
Header header
int32 accel

================================================================================
MSG: autoware_msgs/brake_cmd
Header header
int32 brake

================================================================================
MSG: autoware_msgs/lamp_cmd
Header header
int32 l
int32 r

================================================================================
MSG: geometry_msgs/TwistStamped
# A twist with reference coordinate frame and timestamp
Header header
Twist twist

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: autoware_msgs/ControlCommand
float64 linear_velocity
float64 linear_acceleration #m/s^2
float64 steering_angle

")



(provide :autoware_msgs/RemoteCmd "4ef8b915e5d6977285cb18a9e6793604")


