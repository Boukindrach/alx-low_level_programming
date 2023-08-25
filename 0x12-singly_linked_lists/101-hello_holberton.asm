section .data
    hello db 'Hello, ',0
    holberton db 'Holberton',0
    format db "%s%s\n",0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    lea rsi, [hello]
    lea rdx, [holberton]
    call printf
    pop rbp
    ret
