	.file	"for.c"
	.text
	.globl	fact_for
	.type	fact_for, @function
fact_for:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$1, -4(%ebp)
	movl	$2, -8(%ebp)
	jmp	.L2
.L3:
	movl	-4(%ebp), %eax
	imull	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	addl	$1, -8(%ebp)
.L2:
	movl	-8(%ebp), %eax
	cmpl	8(%ebp), %eax
	jle	.L3
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	fact_for, .-fact_for
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
