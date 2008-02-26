.globl __deregister_frame_info
.globl __register_frame_info
__deregister_frame_info:
__register_frame_info:
    ret

.section .init
    leave
    ret
