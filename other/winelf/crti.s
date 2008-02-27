.section .rodata
.globl _data_start__
_data_start__:

.section .text
# This is just here to make sure frame_info gets a reference
    mov $__register_frame_info, %eax
    mov $__deregister_frame_info, %eax

.section .init
.globl _init
_init:
    enter $0, $0
