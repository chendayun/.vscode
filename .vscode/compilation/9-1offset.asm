ASSUME CS:codesg, DS:DATA, SS:STACK
DATA SEGMENT
    
DATA ENDS

STACKS SEGMENT
    
STACKS ENDS

CODES SEGMENT
    ASSUME CS:CODES, DS:DATA, SS:STACKS
START:
    MOV AX, DATA
    MOV DS, AX
    
    MOV AH, 4CH
    INT 21H
CODES ENDS
END START