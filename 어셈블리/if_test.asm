%include "io64.inc"


section .text
global main
main:
    mov rbp, rsp; for correct debugging
    ;write your code here
    mov rbp, rsp
    
    ;분기문
    ;특정 조건에 따라서 코드의 흐름을 제어하는 것
    ;ex)스킬 키를 눌렀는가 -> 스킬 사용
    
    
    ;CMP dst, src(dst가 기준)
    ;비교한 결과물은 flag register 저장
    
    ;JMP [label] 시리즈
    ;JMP : 무조건 jump
    ;JE : 같으면 점프
    ;JNE : 다르면 점프
    ;JG : 크면 점프
    ;JGE : 크거나 같으면 점프
    ;등등 여러개 존재
    
    ;두 숫자가 같으면 1, 아니면 0을 출력하는 프로그램
    
    ;rax에 10, rbx에 20
    mov rax, 10
    mov rbx, 20
    
    
    ;결과 -> flag
    cmp rax, rbx
    
    je LABEL_EQUAL
    
    ;점프 안함 = 같지않음
    mov rcx, 0
    JMP LABEL_EQUAL_END
    
    ;같으면 여기로 점프
LABEL_EQUAL:
    mov rcx, 1
LABEL_EQUAL_END:

    PRINT_HEX 1, rcx
    NEWLINE
    
    ;연습용 : 어떤 숫자(1~100)가 짝수면 1, 홀수면 0을 출력하는 프로그램
    mov ax, 100
    
    mov bl, 2
    div bl
    cmp ah, 0
    je L1
    mov rcx, 0
    jmp L2

        
L1:
    mov rcx, 1
L2:
    PRINT_HEX 1, rcx
    NEWLINE
    
    mov bl,2
    xor rax, rax
    ret