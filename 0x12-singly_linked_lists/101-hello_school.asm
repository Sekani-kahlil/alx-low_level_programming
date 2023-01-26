extern printf

section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

section .text
global main
main:
	push pbp

	mov rsi, msg
	mov rdi, fmt
	mov rax, 0
	call printf

	pop pbp

	mov rax, 0
	ret
