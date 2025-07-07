	.file	"Struct.c"
	.text
	.section	.rodata
.LC0:
	.string	"%s is %d years old\n"
.LC1:
	.string	"%s is located at %p\n"
.LC2:
	.string	"%s's age is located at %p\n"
.LC3:
	.string	"%s's name is located at %p\n"
	.align 8
.LC4:
	.string	"%s's eye color is located at %p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$55, -96(%rbp)
	movq	$2019912769, -92(%rbp)
	movq	$0, -84(%rbp)
	movl	$0, -76(%rbp)
	movq	$1701736270, -72(%rbp)
	movw	$0, -64(%rbp)
	movl	$24, -48(%rbp)
	movabsq	$32476740675397966, %rax
	movl	$0, %edx
	movq	%rax, -44(%rbp)
	movq	%rdx, -36(%rbp)
	movl	$0, -28(%rbp)
	movabsq	$474450195010, %rax
	movq	%rax, -24(%rbp)
	movw	$0, -16(%rbp)
	movl	-96(%rbp), %eax
	leaq	-96(%rbp), %rdx
	leaq	4(%rdx), %rcx
	movl	%eax, %edx
	movq	%rcx, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	-96(%rbp), %rdx
	leaq	4(%rdx), %rcx
	movq	%rax, %rdx
	movq	%rcx, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	-96(%rbp), %rdx
	leaq	4(%rdx), %rcx
	movq	%rax, %rdx
	movq	%rcx, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	4(%rax), %rdx
	leaq	-96(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	24(%rax), %rdx
	leaq	-96(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
