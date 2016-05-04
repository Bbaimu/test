	.file	"cond.c"
	.text
	.globl	cond
	.type	cond, @function
cond:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	cmpl	$0, 12(%ebp)
	je	.L1
	cmpl	$0, 8(%ebp)
	jle	.L1
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, %edx
	addl	8(%ebp), %edx
	movl	12(%ebp), %eax
	movl	%edx, (%eax)
.L1:
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
	.cfi_endproc
.LFE0:
	.size	cond, .-cond
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
