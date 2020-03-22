section .data
fmt     db "%s",10,0
msg1    db "Hello, Holberton",0

    section .text
    extern printf
    global main

main:
    mov  edi, msg1
    mov  eax, 0     ; no f.p. args
    call printf
    mov eax, 0
ret

