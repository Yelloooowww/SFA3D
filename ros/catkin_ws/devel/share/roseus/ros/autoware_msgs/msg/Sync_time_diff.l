;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::Sync_time_diff)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'Sync_time_diff (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::SYNC_TIME_DIFF")
  (make-package "AUTOWARE_MSGS::SYNC_TIME_DIFF"))

(in-package "ROS")
;;//! \htmlinclude Sync_time_diff.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass autoware_msgs::Sync_time_diff
  :super ros::object
  :slots (_header _time_diff _camera _lidar ))

(defmethod autoware_msgs::Sync_time_diff
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:time_diff __time_diff) 0.0)
    ((:camera __camera) (instance ros::time :init))
    ((:lidar __lidar) (instance ros::time :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _time_diff (float __time_diff))
   (setq _camera __camera)
   (setq _lidar __lidar)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:time_diff
   (&optional __time_diff)
   (if __time_diff (setq _time_diff __time_diff)) _time_diff)
  (:camera
   (&optional __camera)
   (if __camera (setq _camera __camera)) _camera)
  (:lidar
   (&optional __lidar)
   (if __lidar (setq _lidar __lidar)) _lidar)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64 _time_diff
    8
    ;; time _camera
    8
    ;; time _lidar
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64 _time_diff
       (sys::poke _time_diff (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; time _camera
       (write-long (send _camera :sec) s) (write-long (send _camera :nsec) s)
     ;; time _lidar
       (write-long (send _lidar :sec) s) (write-long (send _lidar :nsec) s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64 _time_diff
     (setq _time_diff (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; time _camera
     (send _camera :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _camera :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; time _lidar
     (send _lidar :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _lidar :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::Sync_time_diff :md5sum-) "c640f7073f6004ba0221e76e2c83ffa1")
(setf (get autoware_msgs::Sync_time_diff :datatype-) "autoware_msgs/Sync_time_diff")
(setf (get autoware_msgs::Sync_time_diff :definition-)
      "Header header
float64 time_diff
time camera
time lidar
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



(provide :autoware_msgs/Sync_time_diff "c640f7073f6004ba0221e76e2c83ffa1")


