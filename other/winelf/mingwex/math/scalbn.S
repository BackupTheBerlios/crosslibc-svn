/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

	.file	"scalbn.S"
	.text
	.align 4
.globl scalbn
	/* .def	_scalbn;	.scl	2;	.type	32;	.endef */
scalbn:
	fildl	12(%esp)
	fldl	4(%esp)
	fscale
	fstp	%st(1)
	ret

.globl scalbln
	.set	_scalbln,_scalbn
