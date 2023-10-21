section .data
    hello db "Hello, Holberton",0  ; The string to print, null-terminated

section .text
    global main

extern printf

main:
    mov rdi, hello         ; The format string for printf
    call printf            ; Call printf
    ret                    ; Exit the program
