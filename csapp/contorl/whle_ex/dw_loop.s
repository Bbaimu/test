	.file	"dw_loop.c"
	.text
	.globl	dw_loop
	.type	dw_loop, @function
dw_loop:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
.L3:
	movl	16(%ebp), %eax
	addl	%eax, 8(%ebp)
	movl	12(%ebp), %eax
	imull	16(%ebp), %eax
	movl	%eax, 12(%ebp)
	subl	$1, 16(%ebp)
	cmpl	$0, 16(%ebp)
	jle	.L2
	movl	12(%ebp), %eax
	cmpl	16(%ebp), %eax
	jl	.L3
.L2:
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
	.cfi_endproc
.LFE0:
	.size	dw_loop, .-dw_loop
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
