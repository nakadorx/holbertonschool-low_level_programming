section .data
    msg db 'Hello, Holberton',0xa
section .bss

section .text
global main
main:
    mov eax,4
    mov ebx,1
    mov ecx,msg
    mov edx,17
    int 0x80
    mov eax,0
    int 0x80