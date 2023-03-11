MYMAC    MAC
*^ function
*        ^ function.builtin
INC16    MAC
*^ function
*        ^ function.builtin
A1       =     $20
B1       =     $AA72
*^ type
         INC   ]1
*        ^ keyword
*              ^ variable.builtin
         BNE   CONT
*              ^ type
         INC   ]1+1
CONT
         <<<
*        ^ function.builtin
         LDA   ($A0,X)
*              ^ keyword
*                   ^ keyword
         JMP   ($1000)
*               ^ number
         INC16 $2000      ; n.b. testing *parser* highlighting
*        ^ keyword
*           ^ string
Ā        INC16 $2000      ; parser should accept, extension may flag an error
*         ^ function
*            ^ function
ST       MYMAC $00;$01
*        ^ function
*               ^ number
*                   ^ number
DATA     HEX   00,0A,000B
*                 ^ number
*                    ^ number
         SAV   /prodoshd/myfile.obj
*        ^ function.builtin
*               ^ string
         SAV   my dos 33 file
*                 ^ string
         LDA   |$4000
*              ^ keyword
         LDA   #>A1+B1
*              ^ keyword
