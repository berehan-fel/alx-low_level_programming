section .data
    msg db "Hello, ALX", 10, 0

section .text
    global main
    extern printf

main:
    mov rdi, msg
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
