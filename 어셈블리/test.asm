%include "io64.inc"

section .text
global main
main:
    mov rbp, rsp; for correct debugging
    GET_DEC 1, al
    GET_DEC 1, num
    
    add al, 1 ;레지스터 + 상수
    PRINT_DEC 1, al
    NEWLINE
    
    add al, [num];레지스터 + 메모리
    PRINT_DEC 1, al
    NEWLINE
    
    mov bl, 3 ;레지스터 + 레지스터
    add al, bl
    PRINT_DEC 1, al
    NEWLINE
    
    add [num], byte 1;메모리 + 상수
    PRINT_DEC 1, [num]
    NEWLINE
    
    add [num], al;메모리 + 레지스터
    PRINT_DEC 1, [num]
    NEWLINE
    
    
    ;곱셈
    ;mul reg
    ;mul bl => al * bl
    ;연산결과를 ax에 저장
    ;mul bx => ax * bx
    ;연산결과를 dx(상위 16비트)와 ax(하위 16비트)에 저장
    mov ax, 0
    mov al, 5
    mov bl, 8
    mul bl
    PRINT_DEC 2, ax
    NEWLINE
    
    ;나누기 연산
    ;div reg
    ;- div bl => ax / bl
    ; 연산결과는 al몫 ah 나머지
    mov ax, 100
    mov bl, 3
    div bl
    PRINT_DEC 1, al
    NEWLINE
    mov al, ah
    PRINT_DEC 1, al
    
    
    
    xor rax, rax
    ret
    
    
section .data
    
    
    
section .bss
    num resb 1
    