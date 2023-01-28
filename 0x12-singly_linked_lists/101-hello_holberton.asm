section .data
	msg db 'Hello, Holberton', 10

section .text
	global main
	extern printf

main:
	mov edi, msg
	xor eax, eax
	call printf
	xor eax, eax
	ret
