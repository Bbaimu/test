	.file	"switch2.c"
	.text
	.globl	switcher
	.type	switcher, @function
switcher:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	cmpl	$7, 8(%ebp)
	ja	.L2
	movl	8(%ebp), %eax
	sall	$2, %eax
	addl	$.L7, %eax
	movl	(%eax), %eax
	jmp	*%eax
	.section	.rodata
	.align 4
	.align 4
.L7:
	.long	.L3
	.long	.L2
	.long	.L4
	.long	.L2
	.long	.L5
	.long	.L6
	.long	.L2
	.long	.L4
	.text
.L6:
	movl	12(%ebp), %eax
	xorl	$15, %eax
	movl	%eax, 16(%ebp)
.L3:
	movl	16(%ebp), %eax
	addl	$12, %eax
	movl	%eax, -4(%ebp)
	jmp	.L8
.L4:
	movl	16(%ebp), %eax
	movl	12(%ebp), %edx
	addl	%edx, %eax
	sall	$2, %eax
	movl	%eax, -4(%ebp)
	jmp	.L8
.L5:
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
.L2:
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
.L8:
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	switcher, .-switcher
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
