_dumpline(_unknown_ __edx, long long __rdi, _unknown_ __rsi)
{// addr = 0x0000000100000AEC
    long long _v64;
    char _v152;
    long long _v160;
    _unknown_ __rbx;
    _unknown_ __rbp;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t33;
    signed int _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    intOrPtr* _t61;
    _unknown_ _t64;
    intOrPtr _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t69;
    _unknown_ _t70;
    long long _t72;
    _unknown_ _t74;
    char* _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t80;
    char* _t82;
    _unknown_ _t83;

    _push(r15);
    _push(r14);
    _push(r13);
    _push(r12);
    _push(_t64);
    __rsp = __rsp - 120;
    _v160 = __rdi;
    _t61 =  *4294971408;
    _t72 =  *_t61;
    _v64 = _t72;
    _t76 =  &_v152;
    r8 = __rsi;
    L0000000100000E08();
    r14d = 16;
    r14d = __edx - 16 <= 0 ? __edx : r14d;
    _t39 = 1;
    if(r14d <= 0) {
L5:
        r12 =  &_v152;
        while(1) {
L6:
            _t82 = 4294971094;
            L0000000100000E14();
            _t39 = _t39 + 1;
            if(_t64 - 1 > 15) {
                break;
            }
        }
        asm("cld ");
        _t33 = 0;
        asm("repne scasb ");
        _t69 =  !4294967295 - 1;
        asm("dec eax");
         *r12+rax] = 8134688;
        r8d = _t69 + 3;
        __edi = 0;
        if(r14d > 0) {
            goto L10;
        }
        _t49 = 0;
        goto L9;
    } else {
        _t65 = _v160;
        r13d = 0;
        r12d = 0;
        r15 =  &_v152;
        while(1) {
L2:
            asm("dec ecx");
            _t76 = _t76 + r15+0x9];
            L0000000100000E3E();
            r13d = r13d + 1;
            _t65 = _t65 + 1;
            r12d = r12d + 3;
            if(r13d == r14d) {
                break;
            }
        }
        if(r14d > 15) {
            _t82 =  &_v152;
            asm("cld ");
            asm("repne scasb ");
            _t69 =  !4294967295 - 1;
            asm("dec eax");
             *(_t82 + _t61) = 8134688;
            r8d = _t69 + 3;
            __edi = 0;
L10:
            while(1) {
L11:
                _t61 = _v160;
                _t34 = _t72 - 32;
                __eflags = (_t34 & 4294967295) - 95;
                _t47 = (_t34 & 4294967295) - 95 >= 0 ? 46 :  *(_t82 + _t61) & 255;
                _t33 = _t69 + _t82;
                asm("dec eax");
                 *(__rbp + _t61 - 144) = ((_t34 & 4294967295) - 95 >= 0 ? 46 :  *(_t82 + _t61) & 255) & 4294967295;
                __edi = __edi + 1;
                _t82 = _t82 + 1;
                __eflags = __edi - r14d;
                if(__edi == r14d) {
                    break;
                }
            }
            __eflags = __edi - 15;
            if(__eflags <= 0) {
                _t49 = r14d;
L9:
                _t42 = r8+rdx];
                while(1) {
                    asm("dec eax");
                     *(__rbp + _t61 - 144) = 32;
                    _t49 = _t49 + 1;
                    _t42 = _t42 + 1;
                    if(_t49 > 15) {
                        break;
                    }
                }
            }
            asm("dec ecx");
            asm("dec eax");
             *((short*)( &_v152 + _t61 + _t72)) = 124;
            L0000000100000E38();
            if(__eflags != 0) {
                L0000000100000E0E();
            }
            __rsp = __rsp + 120;
            _pop(__rbx);
            _pop(r12);
            _pop(r13);
            _pop(r14);
            _pop(r15);
            return _t33;
        } else {
            _t39 = r14+0x1];
            goto L5;
        }
    }
    goto L6;
}

_hexdump()
{// addr = 0x0000000100000CD9
    long long _v48;
    char _v72;
    long long _v120;
    _unknown_ _v216;
    _unknown_ __rbx;
    _unknown_ __rbp;
    long long _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;

    _push(r14);
    _push(r13);
    _push(r12);
    _push(_t12);
    __rsp = __rsp - 176;
    __rax =  *4294971408;
    _v48 =  *__rax;
    _t7 = L0000000100000E44();
    __eflags = _t7;
    if(__eflags == 0) {
        L0000000100000E26();
        r13 = __rax;
        __eflags = __rax;
        if(__eflags == 0) {
            L0000000100000E32();
            _t8 = 1;
        } else {
            r12d = 0;
            r14 =  &_v72;
            __eflags = _v120;
            if(__eflags != 0) {
                while(1) {
                    __esi = 1;
                    L0000000100000E2C();
                    __ebx = _t7;
                    __eflags = _t7;
                    if(__eflags == 0) {
                        break;
                    }
                    _t7 = _dumpline(_t7, r14, r12);
                    asm("dec eax");
                    r12 = r12 + __rax;
                    __eflags = _v120 - r12;
                    if(__eflags > 0) {
                        continue;
                    }
                    goto L8;
                }
            }
L8:
            L0000000100000E20();
            _t8 = 0;
        }
    } else {
        L0000000100000E32();
        _t8 = 1;
    }
    if(__eflags != 0) {
        L0000000100000E0E();
    }
    __rsp = __rsp + 176;
    _pop(__rbx);
    _pop(r12);
    _pop(r13);
    _pop(r14);
    return _t8;
}

_main(_unknown_ __eax)
{// addr = 0x0000000100000DBC
    _unknown_ __rbx;
    _unknown_ __rbp;
    _unknown_ _t2;
    _unknown_ _t7;
    _unknown_ _t8;

    _push(r14);
    _push(r13);
    _push(r12);
    _push(_t7);
    r14d = __edi;
    r13d = 0;
    if(__edi > 1) {
        _t8 = __rsi;
        r12d = 1;
        r13d = 0;
        while(1) {
L2:
            r13d = r13d + _hexdump();
            r12d = r12d + 1;
            _t8 = _t8 + 8;
            if(r12d == r14d) {
                break;
            }
        }
    }
    _pop(__rbx);
    _pop(r12);
    _pop(r13);
    _pop(r14);
    return r13d;
}

L0000000100000E08()
{
    goto ( *4294971416);
    goto ( *4294971424);
    goto ( *4294971432);
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E0E()
{
    goto ( *4294971424);
    goto ( *4294971432);
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E14()
{
    goto ( *4294971432);
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E1A()
{
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E20()
{
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E26()
{
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E2C()
{
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E32()
{
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E38()
{
    goto ( *4294971480);
    goto ( *4294971488);
}

L0000000100000E3E()
{
    goto ( *4294971488);
}

L0000000100000E44()
{
}

L0000000100000E44()
{
}

// Statistics:
//      50 Register nodes
//      69 Temporaries nodes
//       1 Casts
//     199 Statements
//      16 Labels
//       5 Gotos
//      13 Blocks
//     687 Nodes
//      12 Assembly nodes
//      56 Unknown Types

