; Auto-generated. Do not edit!


(cl:in-package autoware_msgs-msg)


;//! \htmlinclude lamp_cmd.msg.html

(cl:defclass <lamp_cmd> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (l
    :reader l
    :initarg :l
    :type cl:integer
    :initform 0)
   (r
    :reader r
    :initarg :r
    :type cl:integer
    :initform 0))
)

(cl:defclass lamp_cmd (<lamp_cmd>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <lamp_cmd>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'lamp_cmd)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autoware_msgs-msg:<lamp_cmd> is deprecated: use autoware_msgs-msg:lamp_cmd instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <lamp_cmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:header-val is deprecated.  Use autoware_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'l-val :lambda-list '(m))
(cl:defmethod l-val ((m <lamp_cmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:l-val is deprecated.  Use autoware_msgs-msg:l instead.")
  (l m))

(cl:ensure-generic-function 'r-val :lambda-list '(m))
(cl:defmethod r-val ((m <lamp_cmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:r-val is deprecated.  Use autoware_msgs-msg:r instead.")
  (r m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <lamp_cmd>) ostream)
  "Serializes a message object of type '<lamp_cmd>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'l)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'r)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <lamp_cmd>) istream)
  "Deserializes a message object of type '<lamp_cmd>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'l) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'r) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<lamp_cmd>)))
  "Returns string type for a message object of type '<lamp_cmd>"
  "autoware_msgs/lamp_cmd")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'lamp_cmd)))
  "Returns string type for a message object of type 'lamp_cmd"
  "autoware_msgs/lamp_cmd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<lamp_cmd>)))
  "Returns md5sum for a message object of type '<lamp_cmd>"
  "f01795e0c1fa842f366906ad189e0f0a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'lamp_cmd)))
  "Returns md5sum for a message object of type 'lamp_cmd"
  "f01795e0c1fa842f366906ad189e0f0a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<lamp_cmd>)))
  "Returns full string definition for message of type '<lamp_cmd>"
  (cl:format cl:nil "Header header~%int32 l~%int32 r~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'lamp_cmd)))
  "Returns full string definition for message of type 'lamp_cmd"
  (cl:format cl:nil "Header header~%int32 l~%int32 r~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <lamp_cmd>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <lamp_cmd>))
  "Converts a ROS message object to a list"
  (cl:list 'lamp_cmd
    (cl:cons ':header (header msg))
    (cl:cons ':l (l msg))
    (cl:cons ':r (r msg))
))
