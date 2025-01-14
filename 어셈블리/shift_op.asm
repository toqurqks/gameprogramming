%include "io64.inc"

section .text
global main
main:
    mov rbp, rsp; for correct debugging
    
    mov eax, 0x12345678
    PRINT_HEX 4, eax
    NEWLINE
    shl eax, 8
    PRINT_HEX 4, eax
    NEWLINE
    shr eax, 8
    PRINT_HEX 4, eax
    NEWLINE
    
    ; 곱셈/나눗셈
    ; ex) 게임 서버에서 objectID를 만들때
    ; 64비트의 공간을 활용하여 ID+ 여러 정보들을 표기하기 때문에
    ; 만들고 수정하는데 사용한다.
    
    ;not A : a가 아닌 것
    ;A and b : a이고 b인것
    ;A or b: a이거나 b거나
    ;A xor B : a인데 b가 아니거나 a가 아닌데 b거나
    mov al, 0b10010101
    mov bl, 0b01111100
    
    and al, bl
    PRINT_HEX 1, al
    NEWLINE
    
    not al
    PRINT_HEX 1, al
    NEWLINE
    
    ;동일한 값으로 xor 두번하면 자기 자신으로 되돌아오는 특성
    ;암호학에서 유용하다. 대칭키암호화
    
    xor rax, rax
    ret
    
    
section .data
    
    
    
section .bss
    num resb 1
    