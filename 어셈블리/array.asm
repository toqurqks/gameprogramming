%include "io64.inc"

section .text
global main
main:
    mov rbp, rsp
    
    ;write your code here
    
    ;연습문제 배열의 모든 데이터 출력해보기
    xor ecx, ecx
;PRINT_ARRAY_A:
    ;PRINT_HEX 1, [a+ecx]
    ;NEWLINE
    ;inc ecx
    ;cmp ecx, 5
    ;jne PRINT_ARRAY_A
    
    xor ecx, ecx
PRINT_ARRAY_B:
    PRINT_HEX 2, [b+ecx*2]
    NEWLINE
    inc ecx
    cmp ecx, 5
    jne PRINT_ARRAY_B   
    xor rax, rax
    ret

        
    ;배열 = 동일한 사이즈의 데이터 묶음
    ;배열을 구성하는 각 값을 배열 요소
    ;배열의 위치를 가리키는 숫자를 인덱스
    
section .data
    msg db 'hello world', 0x00
    a db 0x01, 0x02, 0x03, 0x04, 0x05
    
    b times 5 dw 1
section .bss
    num resb 1