; Auto-generated. Do not edit!


(cl:in-package autoware_msgs-msg)


;//! \htmlinclude image_obj.msg.html

(cl:defclass <image_obj> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (type
    :reader type
    :initarg :type
    :type cl:string
    :initform "")
   (obj
    :reader obj
    :initarg :obj
    :type (cl:vector autoware_msgs-msg:image_rect)
   :initform (cl:make-array 0 :element-type 'autoware_msgs-msg:image_rect :initial-element (cl:make-instance 'autoware_msgs-msg:image_rect))))
)

(cl:defclass image_obj (<image_obj>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <image_obj>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'image_obj)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autoware_msgs-msg:<image_obj> is deprecated: use autoware_msgs-msg:image_obj instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <image_obj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:header-val is deprecated.  Use autoware_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <image_obj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:type-val is deprecated.  Use autoware_msgs-msg:type instead.")
  (type m))

(cl:ensure-generic-function 'obj-val :lambda-list '(m))
(cl:defmethod obj-val ((m <image_obj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:obj-val is deprecated.  Use autoware_msgs-msg:obj instead.")
  (obj m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <image_obj>) ostream)
  "Serializes a message object of type '<image_obj>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'type))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'type))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'obj))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'obj))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <image_obj>) istream)
  "Deserializes a message object of type '<image_obj>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'type) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'type) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'obj) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'obj)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autoware_msgs-msg:image_rect))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<image_obj>)))
  "Returns string type for a message object of type '<image_obj>"
  "autoware_msgs/image_obj")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'image_obj)))
  "Returns string type for a message object of type 'image_obj"
  "autoware_msgs/image_obj")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<image_obj>)))
  "Returns md5sum for a message object of type '<image_obj>"
  "07ef08924af0932bcdf48f6ca49c8c23")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'image_obj)))
  "Returns md5sum for a message object of type 'image_obj"
  "07ef08924af0932bcdf48f6ca49c8c23")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<image_obj>)))
  "Returns full string definition for message of type '<image_obj>"
  (cl:format cl:nil "Header header~%string type~%image_rect[] obj~%# XXX Should this message have 'score' ?~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: autoware_msgs/image_rect~%int32 x~%int32 y~%int32 height~%int32 width~%float32 score~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'image_obj)))
  "Returns full string definition for message of type 'image_obj"
  (cl:format cl:nil "Header header~%string type~%image_rect[] obj~%# XXX Should this message have 'score' ?~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: autoware_msgs/image_rect~%int32 x~%int32 y~%int32 height~%int32 width~%float32 score~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <image_obj>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'type))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'obj) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <image_obj>))
  "Converts a ROS message object to a list"
  (cl:list 'image_obj
    (cl:cons ':header (header msg))
    (cl:cons ':type (type msg))
    (cl:cons ':obj (obj msg))
))
