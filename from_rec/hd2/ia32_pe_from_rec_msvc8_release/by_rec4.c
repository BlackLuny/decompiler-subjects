L00401000(signed int __esp, signed int _a4, intOrPtr _a8)
{
    signed int _v4;
    char _v75;
    char _v84;
    signed int _v88;
    signed int _t39;
    char* _t40;
    signed int _t41;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    intOrPtr* _t46;
    signed int _t47;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t51;
    signed int _t52;
    _unknown_ _t56;
    intOrPtr _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    intOrPtr* _t63;
    _unknown_ _t64;
    char* _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t70;
    intOrPtr _t71;
    signed int _t76;

    __esp = __esp;
    _v4 =  *4206592 ^ __esp;
    _t39 = _a4;
    _push(_t45);
    _t46 = sprintf;
    _push(_t70);
    _t71 = _a8;
    _push(_t66);
    _push(_t61);
    _push(_t50);
    _push("%08lX:");
    _push( &_v84);
    _v88 = _t39;
     *sprintf();
    __esp = __esp + 12;
    if(_t71 > 16) {
        _t71 = 16;
    }
    _t67 = 0;
    if(_t71 <= 0) {
L6:
        _t58 =  *4202772;
        _t52 = 16 - _t67;
        goto L7;
        do {
            goto L7;
L9:
            _t52 = _t52 - 1;
             *_t63 = _t58;
        } while(_t76 != 0);
        goto L10;
    } else {
        _t65 =  &_v75;
        while(1) {
L4:
            _t39 = _v88;
            _t52 =  *(_t39 + _t67) & 255;
            _push(_t52);
            _push(" %02lX");
            _push(_t65);
             *_t46();
            _t67 = _t67 + 1;
            __esp = __esp + 12;
            _t65 = _t65 + 3;
            if(_t67 >= _t71) {
                break;
            }
        }
        if(_t67 < 16) {
            goto L6;
        }
L10:
        _t40 =  &_v84;
        _t59 = _t40 + 1;
        while(1) {
L11:
            _t40 = _t40 + 1;
            if((_t52 & 4294967295) == 0) {
                break;
            }
        }
        _t41 = _t40 - _t59;
        _t47 = _t41;
         *((intOrPtr*)(__esp + _t47 + 20)) = 8134688;
        _t48 = _t47 + 3;
        _t68 = 0;
        if(_t71 <= 0) {
L19:
            _t63 = 16 - _t68;
            _push(_t63);
            _t43 = __esp + _t48 + _t68 + 24;
            _push(32);
            _push(_t43);
            memset();
            __esp = __esp + 12;
            _t69 = _t68 + _t63;
        } else {
            _t56 = __esp + _t48 + 20;
            goto L14;
            do {
L14:
                if((_t41 & 4294967295) < 32) {
L16:
                    _t41 = 46;
                } else {
                    _t41 = _t41 & 4294967295 & ;
                    if((_t41 & 4294967295) > 126) {
                        goto L16;
                    }
                }
                 *(_t56 + _t68) = _t41 & 4294967295;
                _t68 = _t68 + 1;
            } while(_t68 < _t71);
            if(_t68 < 16) {
                goto L19;
            }
L21:
        }
        _push( &_v84);
        _push(4202776);
         *((intOrPtr*)(__esp + _t48 + _t69 + 28)) = 0x7c;
        printf();
        __esp = __esp + 8;
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        L0040123B(124, _v4 ^ __esp);
        return;
        goto L21;
    }
L7:
    _t63 =  &_v84 - 1;
    while(1) {
L8:
        _t63 = _t63 + 1;
        _t76 = _t39 & 4294967295;
        if(_t76 == 0) {
            break;
        }
    }
    goto L9;
}

L00401140(signed int __esp)
{
    signed int _v8;
    char _v24;
    intOrPtr _v56;
    char _v76;
    char _v92;
    char* _t12;
    char* _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    char* _t16;
    _unknown_ _t22;
    _unknown_ _t23;
    char* _t24;
    _unknown_ _t25;
    _unknown_ _t26;

    __esp = __esp;
    _v8 =  *4206592 ^ __esp;
    _push(__ebx);
    _push(_t25);
    _push(_t23);
    _push(__edi);
    _t12 =  &_v76;
    _t24 = _t16;
    _push(_t12);
    _push(_t24);
    __imp___stat64i32();
    __esp = __esp + 8;
    if(_t12 == 0) {
        _push(4202780);
        _push(_t24);
        _t13 = fopen();
        __edi = _t13;
        __esp = __esp + 8;
        if(__edi == 0) {
            goto L1;
        } else {
            _t26 = 0;
            if(_v56 > 0) {
                __ebx = __imp__fread;
                __esp =  &_v92;
                while(1) {
                    _push(__edi);
                    _push(16);
                    _push(1);
                    _push( &_v24);
                     *__ebx();
                    _t24 = _t13;
                    __esp = __esp + 16;
                    if(_t24 == 0) {
                        break;
                    }
                    _push(_t24);
                    _push( &_v24);
                    L00401000(__esp);
                    _t26 = _t26 + _t24;
                    __esp = __esp + 8;
                    if(_t26 < _v56) {
                        continue;
                    }
                    goto L7;
                }
            }
L7:
            _push(__edi);
            fclose();
            __esp = __esp + 4;
            _pop(__edi);
            _pop(__esi);
            _pop(__ebp);
            _pop(__ebx);
            L0040123B(0, _v8 ^ __esp);
            return;
        }
    } else {
L1:
        perror(_t24);
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        L0040123B(1, _v8 ^ __esp);
        return;
    }
L8:
}

L00401200(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    intOrPtr _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;

    __esp = __esp & 248;
    _push(_t10);
    _push(_t8);
    _t9 = _a4;
    _push(_t14);
    _push(_t12);
    _t13 = 0;
    _t15 = 1;
    if(_t9 > _t15) {
        while(1) {
L2:
            L00401140(__esp);
            _t15 = _t15 + 1;
            _t13 = _t13 + _a8;
            if(_t15 >= _t9) {
                break;
            }
        }
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _t13;
}

L0040123B(_unknown_ __eax, _unknown_ __ecx)
{
    _unknown_ _t1;
    _unknown_ _t3;

    __ecx = __ecx;
    if(__ecx ==  *4206592) {
        asm("rep ret ");
    }
}

_amsg_exit()
{// addr = 0x0040164C
    goto __imp___amsg_exit;
}

_XcptFilter()
{// addr = 0x0040175A
    goto __imp___XcptFilter;
}

L00401760(intOrPtr* _a4)
{
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t10;
    _unknown_ _t11;
    intOrPtr* _t12;
    _unknown_ _t13;

    _t12 = _a4;
    if( *_t12 != 0x5a4d) {
        return 0;
    }
    if( *((intOrPtr*)( *((intOrPtr*)(_t12 + 60)) + _t12)) != 17744) {
        return 0;
    }
    return 0;
}

L004017A0(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t12;
    _unknown_ _t16;
    intOrPtr _t17;
    _unknown_ _t18;
    signed int _t19;

    _t16 =  *((intOrPtr*)(_a4 + 60)) + _a4;
    _push(_t13);
    _push(_t18);
    _t19 =  *(_t16 + 6) & 65535;
    __edx = 0;
    _push(__edi);
    _t12 = ( *(_t16 + 20) & 65535) + _t16 + 24;
    if(_t19 <= 0) {
L5:
        _t12 = 0;
    } else {
        __edi = _a8;
        goto L2;
        do {
L2:
            _t17 =  *((intOrPtr*)(_t12 + 12));
            if(__edi < _t17) {
                goto L4;
            } else {
                _t13 =  *((intOrPtr*)(_t12 + 8)) + _t17;
                if(__edi >=  *((intOrPtr*)(_t12 + 8)) + _t17) {
                    goto L4;
                }
L7:
            }
            goto L6;
L4:
            __edx = __edx + 1;
            _t12 = _t12 + 40;
        } while(__edx < _t19);
        goto L5;
    }
L6:
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _t12;
    goto L7;
}

L004017F0(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr _v8;
    signed int _v12;
    char _v20;
    intOrPtr _v28;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int __ebp;
    _unknown_ _t12;
    signed int _t14;
    _unknown_ _t18;
    _unknown_ _t21;

    _push(254);
    _push(4203032);
    _push(4200725);
    _push( *fs:0x0]);
    __esp = __esp - 8;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _t14 =  *4206592;
    _v12 = _v12 ^ _t14;
    _push(_t14 ^ __ebp);
     *fs:0x0] =  &_v20;
    _v28 = __esp;
    _v8 = 0;
    if(L00401760(4194304) == 0) {
L3:
        _v8 = -2;
         *fs:0x0] = _v20;
        _pop(__ecx);
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return 0;
    } else {
        _t21 = L004017A0(4194304, _a4 - 4194304);
        if(_t21 == 0) {
            goto L3;
        } else {
            _v8 = -2;
             *fs:0x0] = _v20;
            _pop(__ecx);
            _pop(__edi);
            _pop(__esi);
            _pop(__ebx);
            return  !( *(_t21 + 36) >> 31) & 1;
        }
    }
L4:
}

_initterm()
{// addr = 0x004018AE
    goto __imp___initterm;
}

_initterm_e()
{// addr = 0x004018B4
    goto __imp___initterm_e;
}

L004018BC(_unknown_ __ebx, _unknown_ __edi, _unknown_ __esi)
{
    signed int _t13;
    _unknown_ _t17;
    signed int _t18;

    __esi = __esi;
    __edi = __edi;
    __ebx = __ebx;
    _push(4200725);
    _push( *fs:0x0]);
     *(__esp + 16) = _t17;
    _t18 = __esp + 16;
    __esp = __esp -  *(__esp + 16);
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _t13 =  *4206592;
     *(_t18 - 4) =  *(_t18 - 4) ^ _t13;
    _push(_t13 ^ _t18);
     *((intOrPtr*)(_t18 - 24)) = __esp;
    _push( *(_t18 - 8));
     *(_t18 - 4) = -2;
     *(_t18 - 8) =  *(_t18 - 4);
     *fs:0x0] = _t18 - 16;
    return;
}

L00401901()
{
    __ecx =  *((intOrPtr*)(__ebp - 16));
     *fs:0x0] =  *((intOrPtr*)(__ebp - 16));
    _pop(__ecx);
    _pop(__edi);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    _pop(__ebp);
    _push( *((intOrPtr*)(__ebp - 16)));
    return;
}

L00401968()
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    intOrPtr _v20;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t14;
    signed int _t16;
    signed int _t17;
    signed int _t18;
    _unknown_ _t20;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    signed int _t34;

    _t14 =  *4206592;
    _v12 = _v12 & 0;
    _v8 = _v8 & 0;
    _push(_t24);
    _push(_t26);
    if(_t14 == -1153374642 || (-65536 & _t14) == 0) {
        _push(_t28);
        GetSystemTimeAsFileTime( &_v12);
        _t16 = GetCurrentProcessId();
        _t17 = GetCurrentThreadId();
        _t18 = GetTickCount();
        QueryPerformanceCounter( &_v20);
        _t34 = _v8 ^ _v12 ^ _t16 ^ _t17 ^ _t18 ^ _v16 ^ _v20;
        if(_t34 != -1153374642) {
            if((-65536 & _t34) == 0) {
                _t34 = _t34 | _t34 << 16;
            }
        } else {
            _t34 = -1153374641;
        }
         *4206592 = _t34;
         *4206596 =  !_t34;
        _pop(__esi);
    } else {
         *4206596 =  !_t14;
    }
    _pop(__edi);
    _pop(__ebx);
    return;
}

_crt_debugger_hook()
{// addr = 0x004019FE
    goto __imp___crt_debugger_hook;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x00401A2E
    goto __imp__memset;
}

@type-tree void@void@* memset(@type-tree void@void@* __s, int __c, int __n)
{// addr = 0x00401A2E
    goto __imp__memset;
}

// Statistics:
//     116 Register nodes
//     190 Temporaries nodes
//      12 Casts
//     252 Statements
//      44 Labels
//      18 Gotos
//      16 Blocks
//     998 Nodes
//       1 Assembly nodes
//      69 Unknown Types

