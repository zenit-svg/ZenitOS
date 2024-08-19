[BITS 16]
[ORG 0x7C00]

mov ah, 0x0E
mov al, 'K'
int 0x10

mov ah, 0x0E
mov al, 'E'
int 0x10

mov ah, 0x0E
mov al, 'R'
int 0x10

mov ah, 0x0E
mov al, 'N'
int 0x10

mov ah, 0x0E
mov al, 'I'
int 0x10

mov ah, 0x0E
mov al, 'X'
int 0x10

mov ah, 0x00
mov al, 0x00
int 0x13 ; Load kernel

jmp 0x1000:0x0000 ; Jump to kernel

times 510 - ($ - $$) db 0
dw 0xAA55