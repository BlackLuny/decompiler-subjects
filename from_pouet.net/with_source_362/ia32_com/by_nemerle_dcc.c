/*
 * Input file	: from_pouet.net/with_source_362/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
                    MOV            dx, 0BF8h          
                    MOV            ax, 26E1h          
                    CMP            ax, sp             
                    JAE            L1                 
                    PUSH           sp                 
                    POP            ax                 
                    SUB            ax, 344h           
                    NOP                               
                    AND            ax, 0FFF0h         
                    MOV            di, ax             
                    MOV            cx, 0A2h           
                    NOP                               
                    MOV            si, 17Eh           
                    CLD                               
                    REP MOVSW                         
                    MOV            bx, ax             
                    MOV            cl, 4              
                    SHR            bx, cl             
                    MOV            cx, ds             
                    ADD            bx, cx             
                    PUSH           bx                 
                    XOR            bx, 0              
                    PUSH           bx                 
                    RETF                              

               L1:  MOV            ax, 900h           
                    MOV            dx, 161h           
                    INT            21h                	/* Display string */

                    INT            20h                ;Exit to DOS	/* Exit */

}
