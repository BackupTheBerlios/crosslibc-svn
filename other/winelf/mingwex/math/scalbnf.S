/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

	.file	"scalbnf.S"
	.text
	.align 4
.globl scalbnf
	/* .def	_scalbnf;	.scl	2;	.type	32;	.endef */
scalbnf:
	fildl	8(%esp)
	flds	4(%esp)
	fscale
	fstp	%st(1)
	ret

.globl scalblnf
	.set	_scalblnf,_scalbnf
