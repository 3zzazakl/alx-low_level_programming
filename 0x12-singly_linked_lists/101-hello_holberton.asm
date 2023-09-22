section .data
       hello db "Hello, Holberton", 0
       format db "%s\n", 10, 0

section .text
       global main

       extern printf

main:
       push rbp

       mov rdi, format
       mov rsi, hello
       mov rax, 0
       call printf

       pop rbp
       mov rax, 0
       ret

section .data
