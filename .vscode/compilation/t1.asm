ASSUME CS:CODE
CODE SEGMENT 
mov ax,2
add ax,ax
mov dx,ax 
mov ax,09
mov ax,4c00h
int 21h

CODE ENDS