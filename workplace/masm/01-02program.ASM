CODE SEGMENT
	      ASSUME CS:CODE
	      MOV AX,2000H
          MOV SS,AX
          MOV SP,0 
          ADD SP,10 
          POP AX
          POP BX
          PUSH AX
          PUSH BX 
          POP AX
          POP BX 
          INT 21H
          MOV AX,4C00H
          INT 21H
CODE   ENDS    
 
END 