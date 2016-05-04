	.file	"echo.c"
	.text
	.globl	echo
	.type	echo, @function
echo:
.LFB0:
	.cfi_startproc
	pushl	%ebx
	.cfi_def_cfa_offset 8
	.cfi_offset 3, -8
	subl	$40, %esp
	.cfi_def_cfa_offset 48
	movl	%gs:20, %eax
	movl	%eax, 28(%esp)
	xorl	%eax, %eax
	leal	20(%esp), %ebx
	movl	%ebx, (%esp)
	call	gets
	movl	%ebx, (%esp)
	call	puts
	movl	28(%esp), %eax
	xorl	%gs:20, %eax
	je	.L2
	call	__stack_chk_fail
.L2:
	addl	$40, %esp
	.cfi_def_cfa_offset 8
	popl	%ebx
	.cfi_def_cfa_offset 4
	.cfi_restore 3
	.p2align 4,,2
	ret
	.cfi_endproc
.LFE0:
	.size	echo, .-echo
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
