L08048778()
{
    _unknown_ __ebp;

    L080489A4(__eax, __ebx);
    L08048A04(__esi);
    L08049EC0(__edx);
    return;
}

int __overflow(struct _IO_FILE* fp, int v)
{// addr = 0x080487B0
    struct _IO_FILE* fp;
    goto __imp____overflow;
}

int fputs_unlocked(char* str, struct _IO_FILE* fp)
{// addr = 0x080487C0
    goto __imp__fputs_unlocked;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x080487D0
    goto __imp__fprintf;
}

char* getenv(char* __name)
{// addr = 0x080487E0
    goto __imp__getenv;
}

__builtin_va_list dcgettext(char* __domainname, char* __msgid, int __category)
{// addr = 0x080487F0
    goto __imp__dcgettext;
}

__builtin_va_list setlocale(int __category, char* __locale)
{// addr = 0x08048800
    goto __imp__setlocale;
}

__cxa_atexit()
{// addr = 0x08048810
    goto __imp____cxa_atexit;
}

void abort()
{// addr = 0x08048840
    goto __imp__abort;
}

int vfprintf(struct _IO_FILE* fp, char* fmt0, _G_va_list vals)
{// addr = 0x08048850
    goto __imp__vfprintf;
}

__builtin_va_list bindtextdomain(char* __domainname, char* __dirname)
{// addr = 0x08048860
    goto __imp__bindtextdomain;
}

__libc_start_main()
{// addr = 0x08048890
    goto __imp____libc_start_main;
}

__builtin_va_list textdomain(char* __domainname)
{// addr = 0x080488B0
    goto __imp__textdomain;
}

int printf(char* format)
{// addr = 0x080488C0
    goto __imp__printf;
}

void exit(int __status)
{// addr = 0x08048900
    goto __imp__exit;
}

L080489A4(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _t3 = __eax;
    _push(_t5);
    L1();
    _pop(__ebx);
    _push(_t3);
    _t4 =  *((intOrPtr*)(_t5 + 11647 + -4));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080489AD(_unknown_ __eax)
{
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _pop(__ebx);
    _push(__eax);
    _t4 =  *((intOrPtr*)(_t5 + 11647 + -4));
    if(_t4 != 0) {
         *_t4();
    }
    _pop(__ebp);
    return;
}

L080489C8()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134526948 != 0) {
        return ;
    }
    _t2 =  *134526904;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134526948 = 1;
        return;
    } else {
        while(1) {
L3:
             *134526904 = _t2 + 4;
             *__edx();
            _t2 =  *134526904;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048A04(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134526552;
    if( *134526552 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134526552);
     *__eax();
    __esp = __esp + 16;
    return;
}

L08048A30(int _a4)
{
    char* _v20;
    char _v24;
    intOrPtr _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    intOrPtr _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    intOrPtr _v68;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t62;
    intOrPtr _t64;
    char* _t65;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t70;
    char* _t71;
    intOrPtr _t75;
    intOrPtr _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    intOrPtr _t80;
    intOrPtr _t81;
    _unknown_ _t82;
    _unknown_ _t83;
    signed int _t85;
    _unknown_ _t86;
    char* _t88;

    _t85 = __esp;
    __esp = __esp - 24;
     *__esp = dcgettext(0, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    _t71 =  *134527272;
    _v20 = _t71;
    _v24 = _t71;
    printf();
    fputs_unlocked(dcgettext(0, "      --help     display this help and exit\n", 5), __imp__stdout);
    fputs_unlocked(dcgettext(0, "      --version  output version information and exit\n", 5), __imp__stdout);
     *__esp = dcgettext(0, "\nReport bugs to <%s>.\n", 5);
    _v24 = "bug-coreutilsgnu.org";
    printf();
    exit(_a4);
    _t81 = _t80;
    _t76 = _t75;
    _push(_t85);
    __esp = __esp - 40;
    _v44 = _t64;
    __esp = __esp & 240;
    _t65 = _v20;
    _v40 = _t81;
    _v36 = _t76;
     *__esp = 6;
     *134527272 =  *_t65;
    _v68 = 134520860;
    setlocale();
    bindtextdomain("coreutils", "/usr/share/locale");
    textdomain("coreutils");
    L08049E90(_t65, 134515744);
    if(_v24 == 2) {
L3:
        _t88 = getenv("POSIXLY_CORRECT");
        if(_t88 == 0) {
            asm("cld ");
            _v24 = _t65[4];
            asm("rep cmpsb ");
            if(_t88 == 0) {
                 *__esp = 0;
                L08048A30();
                _t65 = _t65[4];
                _v24 = _t65;
            }
            asm("cld ");
            asm("rep cmpsb ");
            if(_t88 == 0) {
                _v52 = 0;
                _t65 = "GNU coreutils";
                L08049AC0(__imp__stdout, "true", _t65, "5.2.1", "Jim Meyering");
            }
        }
    }
    exit(0);
    goto L3;
}

main(intOrPtr _a4, char* _a8)
{// addr = 0x08048B10
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    char _v20;
    intOrPtr _v24;
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    intOrPtr _v40;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    intOrPtr _t32;
    char* _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    intOrPtr _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    intOrPtr _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    char* _t46;

    _v16 = _t32;
    __esp = __esp & 240;
    _t33 = _a8;
    _v12 = _t41;
    _v8 = _t37;
     *__esp = 6;
     *134527272 =  *_t33;
    _v40 = 134520860;
    setlocale();
    bindtextdomain("coreutils", "/usr/share/locale");
    textdomain("coreutils");
    L08049E90(_t33, 134515744);
    if(_a4 == 2) {
L2:
        _t46 = getenv("POSIXLY_CORRECT");
        if(_t46 != 0) {
            goto L1;
        }
        goto L3;
    }
L1:
    exit(0);
    goto L2;
L3:
    asm("cld ");
    _v20 = _t33[4];
    asm("rep cmpsb ");
    if(_t46 == 0) {
         *__esp = 0;
        L08048A30();
        _t33 = _t33[4];
        _v20 = _t33;
    }
    asm("cld ");
    asm("rep cmpsb ");
    if(_t46 == 0) {
        _v24 = 0;
        _t33 = "GNU coreutils";
        L08049AC0(__imp__stdout, "true", _t33, "5.2.1", "Jim Meyering");
    }
    goto L1;
}

L080498B0(struct _IO_FILE* _a4, int _a8, int _a12, int _a16, void* _a20)
{
    int _v20;
    int _v24;
    int _v28;
    int _v32;
    int _v36;
    char* _v40;
    _unknown_ _t61;
    _unknown_ _t62;
    char* _t63;
    _unknown_ _t65;
    signed int* _t66;
    _unknown_ _t67;
    signed int* _t69;
    _unknown_ _t70;
    _unknown_ _t74;
    _unknown_ _t78;
    _unknown_ _t79;
    _unknown_ _t80;

    __ebx = 0;
    __edi = _a20;
    __esi = _a4;
    _v20 = _a12;
    __ecx = _a8;
    __edx =  &((__edi)[1]);
    _v24 = _a16;
    if( *__edi == 0) {
L4:
        if(__ecx == 0) {
            _v32 = _v24;
             *__esp = __esi;
            _v36 = _v20;
            _v40 = "%s %s\n";
            fprintf();
        } else {
            _v28 = _v24;
            _v36 = __ecx;
             *__esp = __esi;
            _v32 = _v20;
            _v40 = "%s (%s) %s\n";
            fprintf();
        }
        if(__ebx > 9) {
            _v36 = 5;
            _t63 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
L10:
            _v40 = _t63;
L11:
            vfprintf(__esi, dcgettext(0), __edi);
            _t66 =  *(__esi + 20);
            if(_t66 >=  *((intOrPtr*)(__esi + 24))) {
                 *__esp = __esi;
                __ebx = 10;
                _v40 = 10;
                __overflow();
            } else {
                 *_t66 = 10;
                 *(__esi + 20) =  &(( *(__esi + 20))[0]);
            }
            _v40 = __esi;
             *__esp =  *134526928;
            L1();
            _t69 =  *(__esi + 20);
            if(_t69 >=  *((intOrPtr*)(__esi + 24))) {
                 *__esp = __esi;
                __ecx = 10;
                _v40 = 10;
                __overflow();
            } else {
                 *_t69 = 10;
                 *(__esi + 20) =  &(( *(__esi + 20))[0]);
            }
            _a8 = __esi;
            __edx = 5;
            _a4 = dcgettext(0, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
            __esp =  &((__esp)[7]);
            _pop(__ebx);
            _pop(__esi);
            _pop(__edi);
            _pop(__ebp);
            goto __imp__fputs_unlocked;
        }
        switch( *((intOrPtr*)(__ebx * 4 +  &M0804A608))) {
            case 0:
                abort();
                goto L9;
            case 1:
L9:
                _v36 = 5;
                _t63 = "Written by %s.\n";
                __esi = __esi;
                goto L10;
            case 2:
                __ebx = 5;
                __ecx = "Written by %s and %s.\n";
                _v36 = 5;
                _v40 = "Written by %s and %s.\n";
                goto L11;
            case 3:
                __edx = 5;
                _v36 = 5;
                goto L10;
            case 4:
                _v36 = 5;
                goto L10;
            case 5:
                _v36 = 5;
                goto L10;
            case 6:
                __ebx = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                _v36 = 5;
                _v40 = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                goto L11;
            case 7:
                __ecx = 5;
                __edx = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                _v36 = 5;
                _v40 = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                goto L11;
            case 8:
                _v36 = 5;
                goto L10;
            case 9:
                _v36 = 5;
                goto L10;
        }
    }
    __esi = __esi;
    while(1) {
L3:
        __ebx = __ebx + 1;
        _t74 =  *__edx;
        __edx = __edx + 4;
        if(_t74 == 0) {
            break;
        }
    }
    goto L4;
}

L08049AC0(struct _IO_FILE* _a4, int _a8, int _a12, int _a16, char _a20)
{
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    __esp = __esp - 24;
    L080498B0(_a4, _a8, _a12, _a16,  &_a20);
    return;
}

L08049E12()
{
    _unknown_ _t6;
    _unknown_ _t7;
    signed int _t10;

    _pop(__ebx);
    _t7 = _t6 + 6426;
    L08048778();
    __esi = 0;
    _t10 = _t7 + -228 - _t7 + -228 >> 2;
    if(0 < _t10) {
        __edi = _t10;
        while(1) {
L2:
             *((intOrPtr*)(_t7 + -228 + __esi * 4))();
            __esi = __esi + 1;
            if(__esi >= __edi) {
                break;
            }
        }
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08049E56()
{
    _unknown_ _t7;
    _unknown_ _t8;
    signed int _t11;

    _pop(__ebx);
    _t8 = _t7 + 6358;
    _t11 = _t8 + -228 - _t8 + -228 >> 2;
    __esi = _t11 - 1;
    if(_t11 != 0) {
        while(1) {
L2:
             *((intOrPtr*)(_t8 + -228 + __esi * 4))();
            __edx = __esi;
            __esi = __esi - 1;
            if(__edx == 0) {
                break;
            }
        }
    }
    L08049EE4(_t8, __edx);
    _pop(__ebx);
    _pop(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08049E90(_unknown_ __ebx, intOrPtr _a4)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t6;

    _t4 = __ebx;
    _push(_t4);
    L1();
    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t4 + 6291 + -8));
    __edx = 0;
    if(__eax != 0) {
        __edx =  *__eax;
    }
    _push(__edx);
    _push(0);
    _push(_a4);
    __cxa_atexit();
    return;
}

L08049E99()
{
    _unknown_ _t4;
    _unknown_ _t6;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t4 + 6291 + -8));
    __edx = 0;
    if(__eax != 0) {
        __edx =  *__eax;
    }
    _push(__edx);
    _push(0);
    _push( *((intOrPtr*)(__ebp + 8)));
    __cxa_atexit();
    _pop(__ebp);
    return;
}

L08049EC0(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134526536;
    __ebx = 134526536;
    if(__eax != 255) {
        while(1) {
L1:
            __ebx = __ebx - 4;
             *__eax();
            __eax =  *__ebx;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

L08049EE4(_unknown_ __ebx, _unknown_ __edx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _push(__ebx);
    L1();
    _pop(__ebx);
    _push(__edx);
    L080489C8();
    return;
}

L08049EED(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    L080489C8();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08049EED(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    @rec 0x080489C8@L080489C8@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     168 Register nodes
//      90 Temporaries nodes
//      10 Casts
//     445 Statements
//      28 Labels
//      17 Gotos
//      30 Blocks
//    1094 Nodes
//       8 Assembly nodes
//      98 Unknown Types

