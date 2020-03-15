Section     .text
global      main

main:
    mov     edx,len
    mov     ebx,1
    mov     ecx,msg
    mov     eax,4
    int     0x80

    mov     eax,1
    int     0x80

section     .data

msg     db  'Hello, Holberton',10
len equ $ - msg
