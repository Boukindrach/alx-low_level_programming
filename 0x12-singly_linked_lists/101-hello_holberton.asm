
    global main
    extern printf

main:
    mov   rdi, format_nl
    mov   rax, 0
    call  printf
    ret


    format_nl db 'Hello, Holberton', 0xa ,0
