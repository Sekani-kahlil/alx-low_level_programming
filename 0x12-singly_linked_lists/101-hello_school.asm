extern printf

section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

section .text
	extern printf
	global main
main:
	push pbp

	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	pop pbp

	mov eax, 0
	ret
