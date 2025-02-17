;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::vscan_tracked)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'vscan_tracked (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::VSCAN_TRACKED")
  (make-package "AUTOWARE_MSGS::VSCAN_TRACKED"))

(in-package "ROS")
;;//! \htmlinclude vscan_tracked.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass autoware_msgs::vscan_tracked
  :super ros::object
  :slots (_position _orientation _velocity _geo_rect ))

(defmethod autoware_msgs::vscan_tracked
  (:init
   (&key
    ((:position __position) (instance geometry_msgs::Point :init))
    ((:orientation __orientation) 0.0)
    ((:velocity __velocity) 0.0)
    ((:geo_rect __geo_rect) (instance autoware_msgs::geometric_rectangle :init))
    )
   (send-super :init)
   (setq _position __position)
   (setq _orientation (float __orientation))
   (setq _velocity (float __velocity))
   (setq _geo_rect __geo_rect)
   self)
  (:position
   (&rest __position)
   (if (keywordp (car __position))
       (send* _position __position)
     (progn
       (if __position (setq _position (car __position)))
       _position)))
  (:orientation
   (&optional __orientation)
   (if __orientation (setq _orientation __orientation)) _orientation)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:geo_rect
   (&rest __geo_rect)
   (if (keywordp (car __geo_rect))
       (send* _geo_rect __geo_rect)
     (progn
       (if __geo_rect (setq _geo_rect (car __geo_rect)))
       _geo_rect)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point _position
    (send _position :serialization-length)
    ;; float32 _orientation
    4
    ;; float32 _velocity
    4
    ;; autoware_msgs/geometric_rectangle _geo_rect
    (send _geo_rect :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point _position
       (send _position :serialize s)
     ;; float32 _orientation
       (sys::poke _orientation (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; autoware_msgs/geometric_rectangle _geo_rect
       (send _geo_rect :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point _position
     (send _position :deserialize buf ptr-) (incf ptr- (send _position :serialization-length))
   ;; float32 _orientation
     (setq _orientation (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _velocity
     (setq _velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; autoware_msgs/geometric_rectangle _geo_rect
     (send _geo_rect :deserialize buf ptr-) (incf ptr- (send _geo_rect :serialization-length))
   ;;
   self)
  )

(setf (get autoware_msgs::vscan_tracked :md5sum-) "bff5c0a61020da26ef210837bea359b1")
(setf (get autoware_msgs::vscan_tracked :datatype-) "autoware_msgs/vscan_tracked")
(setf (get autoware_msgs::vscan_tracked :definition-)
      "geometry_msgs/Point position
float32 orientation
float32 velocity
geometric_rectangle geo_rect
================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: autoware_msgs/geometric_rectangle
float32 wl
float32 wr
float32 lf
float32 lb
")



(provide :autoware_msgs/vscan_tracked "bff5c0a61020da26ef210837bea359b1")


