section .data
    msg db "Hello, Holberton", 0Ah, 00h
section .text
    global main
    extern printf
main:
	sub rsp, 8
	mov rdi, msg
	xor eax, eax
	call printf
	add rsp, 8
	xor eax, eax
	ret
