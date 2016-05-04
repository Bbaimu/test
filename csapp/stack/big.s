	.file	"big.c"
	.text
	.globl	test_return
	.type	test_return, @function
test_return:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %eax
	movb	$48, 18(%eax)
	ret	$4
	.cfi_endproc
.LFE0:
	.size	test_return, .-test_return
	.globl	mian
	.type	mian, @function
mian:
.LFB1:
	.cfi_startproc
	subl	$172, %esp
	.cfi_def_cfa_offset 176
	movl	%gs:20, %eax
	movl	%eax, 156(%esp)
	xorl	%eax, %eax
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	test_return
	subl	$4, %esp
	movl	156(%esp), %edx
	xorl	%gs:20, %edx
	je	.L3
	call	__stack_chk_fail
.L3:
	addl	$172, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
.LFE1:
	.size	mian, .-mian
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
