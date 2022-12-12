		.orig x3000 
		LEA R0, PROMPT 
		PUTS
		JSR GETALPHA 
		JSR GETALPHA 
		HALT 
PROMPT          .stringz "Enter two letters: "
GETALPHA        ST R7, V7
                ST R1, V1
               
BEG             GETC
                ADD R1, R0, #-10
                BRZ VALOUT
                LD R1, V95
                ADD R1, R0, R1
	       BRZ PRINT
                LD R1, V65
                ADD R1, R0, R1
                BRN BEG
                LD R1, V90
                ADD R1, R0, R1
                BRNZ PRINT
  		LD R1, V97
                ADD R1, R0, R1
                BRN BEG
 		LD R1, V123
                ADD R1, R0, R1
                BRN PRINT
                BRNZP BEG
PRINT           OUT
VALOUT        	LD R7, V7
                LD R1, V1
               
                RET
V7                .fill 0
V1                .fill 0 

V95                .fill -95
V65                .fill -65
V90                .fill -90
V97                .fill -97
V123               .fill -123
                .end