section .data
    msg db 'Hello, Holberton',0xa
    len equ $-msg
section .bss

section .text
global _print
_print:
    mov eax,4
    mov ebx,1
    mov ecx,msg
    mov edx,len
    int 0x80
    mov eax,0
    int 0x80