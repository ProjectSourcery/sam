
#ifndef SAMLANG_TOKENTYPE_H
#define SAMLANG_TOKENTYPE_H

namespace sam {
    enum TokenTypes {
        NUMBER, LETTER,
        UNDERSCORE,
        LEFTPAREN/* ( */,RIGHTPAREN/* ) */,
        LEFTCURLY/* { */, RIGHTCURLY/* } */,
        LEFTBRACE/* [ */,RIGHTBRACE/* ] */,
        HASH/* # */, DOT/* . */,COMMA/* , */,QUESMK/* ? */,
        PLUS,MINUS,MULT,DIV,MOD,
        COLON/* : */,SEMICOLON/* ; */,
        DUBQUOTE/* " */,QUOTE/* ' */,GRAVE/* ` */,
        NEWLINE,
        LTEQ  /* <= */,GTEQ   /* >= */,EQEQ  /* == */,
        PLUSEQ/* += */,MINUSEQ/* -= */,MULTEQ/* *= */,
        DIVEQ /* /= */,ANDEQ  /* &= */,OREQ  /* |= */,
        XOREQ /* ^= */,MODEQ  /* %= */,NOTEQ /* != */,
        LESST/* < */,GREATERT/* > */,
        SHR/* << */,SHL/* >> */,
        AND/* & */,ANDAND/* && */,
        OR/* | */, OROR/* || */,
        XOR/* ^ */,
        NOT/* ! */,
        ASSIGN/* = */,
        PTR/* -> */,
        INCR/* ++ */,
        DECR/* -- */,
        DOLLAR/* $ */,
        EOF = 9999, //end of file

        NONE
    };
}

#endif //SAMLANG_TOKENTYPE_H
