section .data
    hello db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    push hello
    push format
    call printf
    add rsp, 16  ; clear arguments from stack

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret
