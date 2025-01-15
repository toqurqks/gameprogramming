%include "io64.inc"

section .text
global main
main:
    mov rbp, rsp
    
    ;반복문
    ;특정 조건을 만족할 때까지 반복해서 실행
    
    mov ecx, 10

LABEL_LOOP:
    PRINT_STRING msg
    NEWLINE
    dec ecx; sub ecx,1 과같음 ecx--;
    cmp ecx, 0
    jne LABEL_LOOP
    
    ;연습 문제) 1에서 100까지의 합을 수하는 프로그램
    
    mov ecx, 1
    mov edx, 0
    
add_LOOP:
    PRINT_DEC 1, ecx
    NEWLINE
    add edx, ecx
    add ecx, 1 ;inc ecx를 사용하면 한줄에 가능
    cmp ecx, 101
    jne add_LOOP
        
    ;loop [라벨]
    ; - ecx에 반복횟수
    ; - loop 할때마다 ecx 1감소. 0이면 빠져나감 아니면 라벨로 이동
    
    mov ecx, 100
LABEL_LOOP_SUM:
    add ebx, ecx
    loop LABEL_LOOP_SUM
    
    PRINT_DEC 4,ebx
    NEWLINE
    
    ;write your code here
    PRINT_DEC 1, edx
    xor rax, rax
    ret
section .data
    msg db 'HELLO World', 0x00