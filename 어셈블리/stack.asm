%include "io64.inc"


section .text
global main
main:
        mov rbp, rsp; for correct debugging
    ;write your code here
    mov rbp, rsp
    
    
    ;스택 메모리, 스택 프레임
    ;레지스터는 다양한 용도로 사용
    ;a, b, c, d 범용 레지스터
    ;포인터 레지스터
    ;ip (instruction pointer) : 다음 수행 명령어 위치
    ;sp (stack pointer) : 현재 스택 포인터 (cursor와 유사한 성질)
    ;bp (base pointer) : 스택 상대주소 계산 (ex: ebp, rbp)
    ;선입후출(LIFO구조)


    push rax
    push rbx
    call MAX
    PRINT_DEC 8, rax
    NEWLINE
    add rsp, 16
    xor rax, rax
    pop rbx
    pop rax
    ret
    
    
    
MAX:
    push rbp
    mov rbp, rsp
    
    mov rax, [rbp+16]
    mov rbx, [rbp+24]
    ;일반적인 상황에서는 컴파일러가 이 작업을 해주기 때문에 작성까진 필요없으나
    ;실행되는 코드는 이해할 수 있어야 한다.
    
    ;사용하지 않는 스택부분을 메모 혹은 기록용 등으로 사용할 떄는
    ;bp를 기준으로 - 해서 사용할 수 있다 ex)[rbp-24]
cmp rax, rbx
    jg L1
    mov rax, rbx
    
L1:
    pop rbp
    ret ; 원래 call 한자리로 돌아가기
   
section .data


section .bss