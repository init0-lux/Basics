.section .rodata
.globl hello
hello:
	.string "Hello, World!"

.text
.global main
main:
	push	%rbp
	mov	%rsp, %rsp

	mov	$hello, %edi
	call puts

	mov	$0,	%eax
	leave
	ret
