	.file	"fmaf.S"
	.text
	.align 2
	.p2align 4,,15
.globl fmaf
	/* .def	_fmaf;	.scl	2;	.type	32;	.endef */
fmaf:
	flds	4(%esp)
	fmuls	8(%esp)
	flds	12(%esp)
	faddp
	ret
