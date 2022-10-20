        extern printf

        SECTION .data

msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

        SECTION .text

        global main
main:
        mov   esi, msg
        mov   edi, fmt
        mov   eax, 0
        call  printf
        pop   rbp
        mov   eax, 0
        ret
