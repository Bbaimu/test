	.file	"simple.c"
	.intel_syntax noprefix
	.text
	.globl	simple
	.type	simple, @function
simple:
.LFB0:
	.cfi_startproc
	mov	edx, DWORD PTR [esp+4]
	mov	ecx, DWORD PTR [esp+8]
	mov	eax, ecx
	add	eax, DWORD PTR [edx]
	mov	DWORD PTR [edx], ecx
	ret
	.cfi_endproc
.LFE0:
	.size	simple, .-simple
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
