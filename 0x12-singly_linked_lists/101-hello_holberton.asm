global      main

main:
    mov     edx,17
    mov     ebx,1
    mov     ecx,msg
    mov     eax,4
    int     0x80

    mov     eax,1
    int     0x80

section     .data

msg     db  'Hello, Holberton',10
