INC16   MAC
*^ function
*       ^ function.builtin
        INC     ]1
*       ^ keyword
*               ^ variable.builtin
        BNE     CONT
*               ^ type
        INC     ]1+1
CONT
        <<<
*       ^ function.builtin
        LDA     ($A0,X)
*               ^ keyword
*                    ^ keyword
        JMP     ($1000)
*                ^ number
        INC16   $2000
*       ^ keyword
*          ^ string
Ā       INC16   $2000
*        ^ function
ST      MYMAC   $00;$01
*        ^ function
*                ^ number
DATA    HEX     00,0A,000B
*                  ^ number
*                       ^ number
        SAV     /prodoshd/myfile.obj
*       ^ function.builtin
*               ^ string
        SAV     my dos 33 file
*                 ^ string
        LDA     |$4000
*               ^ keyword
        ASC     #>A+B
*               ^ keyword
