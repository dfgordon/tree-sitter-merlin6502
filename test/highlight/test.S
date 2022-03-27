INC16   MAC
*^ type
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
*               ^ variable.parameter
