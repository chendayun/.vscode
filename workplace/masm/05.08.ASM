ASSUME CS:CODE

CODE SEGMENT
	     MOV  BX,0
	     MOV  CX,12
	S:   MOV  AX,0FFFFH
	     MOV  DS,AX
	     MOV  DL,[BX]

	     MOV  AX,0020H
	     MOV  DS,AX
	     MOV  [BX],DL

	     INC  BX
	     LOOP S
	     MOV  AX,4C00H
	     INT  21H
CODE ENDS
END