	.file	"caller.c"
	.text
	.globl	caller
	.type	caller, @function
caller:
.LFB0:
	.cfi_startproc
	subl	$44, %esp
	.cfi_def_cfa_offset 48
	movl	$543, 24(%esp)
	movl	$1057, 28(%esp)
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	swap_add
	movl	24(%esp), %edx
	subl	28(%esp), %edx
	imull	%edx, %eax
	addl	$44, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
.LFE0:
	.size	caller, .-caller
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
