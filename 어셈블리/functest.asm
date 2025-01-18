%include "io64.inc"

section .text
global main
main:
    ;write your code here
    mov rbp, rsp
    
    ;함수(프로시저 procedure 서브루틴 subroutine)
    mov eax, 10
    mov ebx, 15
    call MAX
    PRINT_DEC 4, ecx
    NEWLINE
    
    xor rax, rax
    ret
    
PRINT_MSG:
    PRINT_STRING msg
    NEWLINE
    ret

;ex) 두 값중 더 큰 값을 반환하는 max
MAX:
    cmp eax, ebx
    jg L1
    
    mov ecx, ebx
    jmp L2
L1: 
    mov ecx, eax
L2: 
    ret
    
    ;인자
    