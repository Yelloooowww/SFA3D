;; Auto-generated. Do not edit!


(when (boundp 'autoware_msgs::ConfigDistanceFilter)
  (if (not (find-package "AUTOWARE_MSGS"))
    (make-package "AUTOWARE_MSGS"))
  (shadow 'ConfigDistanceFilter (find-package "AUTOWARE_MSGS")))
(unless (find-package "AUTOWARE_MSGS::CONFIGDISTANCEFILTER")
  (make-package "AUTOWARE_MSGS::CONFIGDISTANCEFILTER"))

(in-package "ROS")
;;//! \htmlinclude ConfigDistanceFilter.msg.html


(defclass autoware_msgs::ConfigDistanceFilter
  :super ros::object
  :slots (_sample_num _measurement_range ))

(defmethod autoware_msgs::ConfigDistanceFilter
  (:init
   (&key
    ((:sample_num __sample_num) 0)
    ((:measurement_range __measurement_range) 0.0)
    )
   (send-super :init)
   (setq _sample_num (round __sample_num))
   (setq _measurement_range (float __measurement_range))
   self)
  (:sample_num
   (&optional __sample_num)
   (if __sample_num (setq _sample_num __sample_num)) _sample_num)
  (:measurement_range
   (&optional __measurement_range)
   (if __measurement_range (setq _measurement_range __measurement_range)) _measurement_range)
  (:serialization-length
   ()
   (+
    ;; int32 _sample_num
    4
    ;; float32 _measurement_range
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sample_num
       (write-long _sample_num s)
     ;; float32 _measurement_range
       (sys::poke _measurement_range (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sample_num
     (setq _sample_num (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _measurement_range
     (setq _measurement_range (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get autoware_msgs::ConfigDistanceFilter :md5sum-) "3c62131ed7d7074af43c78ec79a1aa05")
(setf (get autoware_msgs::ConfigDistanceFilter :datatype-) "autoware_msgs/ConfigDistanceFilter")
(setf (get autoware_msgs::ConfigDistanceFilter :definition-)
      "int32 sample_num
float32 measurement_range

")



(provide :autoware_msgs/ConfigDistanceFilter "3c62131ed7d7074af43c78ec79a1aa05")


