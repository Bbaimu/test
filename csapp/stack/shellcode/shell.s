	.file	"shell.c"
	.globl	code
	.section	.rodata
.LC0:
	.string	"\260X01X31\333Xcd\200"
	.data
	.align 4
	.type	code, @object
	.size	code, 4
code:
	.long	.LC0
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	movl	code, %eax
	movl	%eax, 12(%esp)
	movl	12(%esp), %eax
	call	*%eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
