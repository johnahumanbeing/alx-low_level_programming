section .data
    hello db 'Hello, Holberton', 10, 0
section .text
    global main
    extern printf
main:
    push rbp
    mov rbp, rsp
    mov rdi, hello
    xor eax, eax
    call printf
    mov eax, 0
    pop rbp
    ret
