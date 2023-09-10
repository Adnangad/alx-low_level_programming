	.file	"0-main.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Hello"
.LC1:
	.string	"Adnan Gard"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	printf@PLT
	mov	BYTE PTR -1[rbp], 97
	movsx	eax, BYTE PTR -1[rbp]
	mov	edi, eax
	call	putchar@PLT
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
