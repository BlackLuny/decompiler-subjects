L00401140()
{
    return  *((intOrPtr*)( *fs:0x2c] +  *4235535 * 4));
}

L0040120C(intOrPtr _a4)
{
    _unknown_ __ebp;

    L004013F0(_a4);
    return;
}

L0040121C(intOrPtr _a4)
{
    _unknown_ __ebp;

    L0040120C(_a4);
    return;
}

L0040122C(_unknown_ __eax, long* __ecx, void** __edx)
{
    _unknown_ __ebx;
    long* __edi;
    void** __esi;
    _unknown_ _t1;
    void* _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    long _t8;
    intOrPtr _t13;

    __ecx = __ecx;
    _t1 = __eax;
    __edi = __ecx;
    __esi = __edx;
    if( *4235612 == 0) {
        _t13 =  *4246648;
        if(_t13 == 2 || _t13 == 1) {
             *4235612 = 1048576;
        } else {
             *4235612 = 4194304;
        }
    }
    _t8 =  *4235612 + _t1 - 1 &  !( *4235612 - 1);
    _t2 = VirtualAlloc(0, _t8, 8192, 1);
     *__esi = _t2;
    if(_t2 == 0) {
        return 0;
    }
     *__edi = _t8;
    return 1;
}

L004012C0()
{
    void* __ebx;
    void* __edi;
    _unknown_ __esi;
    void* _t1;
    _unknown_ _t2;
    void* _t3;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    __esi = _t7;
    __ebx = _t1;
    __edi = __ebx;
    if(__esi == 0) {
        return 1;
    }
    while(1) {
        _t3 = VirtualAlloc(__ebx, 4096, 4096, 4);
        _t11 = _t3;
        if(_t3 != 0) {
            goto L3;
        } else {
            L0040130C(__edi, __ebx - __edi, _t11);
            return 0;
        }
    }
}

L0040130C(void* __eax, long __edx, _unknown_ __eflags)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    __eflags = __eflags;
    __edx = __edx;
    VirtualFree(__eax, __edx, 16384);
    if(__eflags == 0) {
        return 1;
    }
    return 0;
}

L00401324(void* __eax, _unknown_ __eflags)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    __eflags = __eflags;
    VirtualFree(__eax, 0, 32768);
    if(__eflags == 0) {
        return 1;
    }
    return 0;
}

L004013E0(intOrPtr _a4)
{
    _unknown_ __ebp;

    _push(_a4);
     *4235788();
    _pop(__ecx);
    return;
}

L004013F0(intOrPtr _a4)
{
    _unknown_ __ebp;

    _push(_a4);
     *4235784();
    _pop(__ecx);
    return;
}

L004014D0()
{
    return;
}

L004014D4()
{
    intOrPtr _t8;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    _t13 = 12;
    while(_t13 <  *4235816) {
        _t8 = _t13 + _t13 +  *4235836 + -12;
         *((intOrPtr*)(_t8 + 4)) = _t8;
         *((intOrPtr*)(_t8 + 8)) = _t8;
        _t13 = _t13 + 4;
    }
}

L00401514(signed int _a4, intOrPtr _a8, intOrPtr _a12)
{
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t23;
    _unknown_ _t24;
    _unknown_ _t29;
    _unknown_ _t30;
    signed int _t32;
    intOrPtr* _t35;
    signed int* _t37;
    signed int _t42;
    _unknown_ _t44;
    signed int _t45;
    signed int _t46;
    signed int _t48;
    intOrPtr _t53;
    signed int _t57;

    __edi = _a8;
    _t42 = _a4;
    _t23 = _t42;
    _t53 = 0;
    if(__edi < 4096) {
        return _t23 | 255;
    }
     *((intOrPtr*)(_t23 + 8)) = 1;
     *(_t23 + 12) = _t42;
     *_t23 = __edi;
     *((intOrPtr*)(_t23 + 4)) = _a12;
     *(_t23 + 140) =  *4235828;
     *((intOrPtr*)(_t23 + 144)) = 0;
    _t45 =  *4235828;
    if(_t45 == 0) {
         *4235832 = _t23;
    } else {
         *(_t45 + 144) = _t23;
    }
     *4235828 = _t23;
    _t35 = _t23 + 148;
     *_t35 = 0;
    _t37 = _t35 + 4;
    if( *4235836 == 0) {
        _t57 =  *4235816 +  *4235816 + 3 & 252;
         *4235836 =  &(_t37[1]);
        _t32 = _t57;
         *_t37 = _t32;
        _t37 = _t37 + (_t32 & 252) + 4;
        L004014D4();
        _t53 = _t57 + 4;
    }
    _t29 = __edi - 148 - 12 - _t53;
    _t46 = _t29 + 1;
     *_t37 = _t46;
     *((intOrPtr*)(_t37 + (_t46 & 252) + 4)) = 2;
    if(_t29 >=  *4235816) {
        _t48 =  *4235852;
    } else {
        _t48 = _t29 + _t29 +  *4235836 + -12;
    }
    _t37[1] =  *(_t48 + 4);
    _t37[2] = _t48;
     *(_t37[1] + 8) = _t37;
     *(_t48 + 4) = _t37;
     *((intOrPtr*)(_t37 + _t29)) = _t29 + 4;
    return 0;
}

L00401614(intOrPtr* _a4, signed int _a8)
{
    intOrPtr* __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t26;
    _unknown_ _t28;
    signed int _t30;
    intOrPtr _t32;
    signed int _t45;
    _unknown_ _t48;
    signed int _t56;
    _unknown_ _t70;
    _unknown_ _t72;

    __ebx = _a4;
    _t45 = _a8 & -4096;
    _t32 =  *__ebx;
    _t26 = _t32 + __ebx + -4;
    if(_t32 <= _t45) {
        _t70 = _t45 -  *__ebx;
         *_t26 =  *_t26 + _t70 - 4;
         *((intOrPtr*)(_t26 + ( *_t26 & 252) + 4)) = 0;
        L00401AE4(_t26 + 4);
         *__ebx =  *__ebx + _t70;
        return 0;
    }
    if(( *_t26 & 2) == 0) {
        return _t26 | 255;
    }
    _t30 = _t26 -  *((intOrPtr*)(_t26 - 4));
    _t72 = _t32 - _t45;
    if(_t72 > ( *_t30 & 252) - 12) {
        return _t30 | 255;
    }
     *_t30 =  *_t30 - _t72;
     *((intOrPtr*)(_t30 + ( *_t30 & 252))) = ( *_t30 & 252) + 4;
     *((intOrPtr*)(_t30 + ( *_t30 & 252) + 4)) = 2;
    if(( *_t30 & 252) >=  *4235816) {
        return 0;
    }
    _t56 =  *(_t30 + 4);
     *((intOrPtr*)(_t56 + 8)) =  *((intOrPtr*)(_t30 + 8));
     *( *((intOrPtr*)(_t30 + 8)) + 4) = _t56;
     *(_t30 + 4) =  *( *4235836 + ( *_t30 & 252) + ( *_t30 & 252) - 8);
     *((intOrPtr*)(_t30 + 8)) = ( *_t30 & 252) + ( *_t30 & 252) +  *4235836 + -12;
     *( *(_t30 + 4) + 8) = _t30;
     *( *4235836 + ( *_t30 & 252) + ( *_t30 & 252) - 8) = _t30;
    return 0;
    return 0;
}

L004019C4(signed int* _a4)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t44;
    signed int _t46;
    intOrPtr* _t48;
    intOrPtr _t50;
    signed int _t53;
    intOrPtr _t56;
    signed int* _t59;
    intOrPtr _t60;
    signed int _t69;
    long _t74;

    _t59 = _a4;
    _t29 = _t59 + ( *_t59 & 252) + 4;
    if( *4235856 <=  *4235860) {
        _t50 =  *4235824;
    } else {
        _t50 =  *4235820;
    }
    _t46 =  *_t59 - 12;
    if(_t50 > _t46) {
        return 0;
    }
    _t53 = _t46 &  !(_t50 - 1);
    _t48 =  *4235828;
    __eflags = _t48;
    if(_t48 == 0) {
        return 0;
    }
    while(1) {
        _t60 =  *_t48;
        __eflags = _t29 - _t60 + _t48 + -4;
        if(_t29 == _t60 + _t48 + -4) {
            break;
        }
        _t48 =  *((intOrPtr*)(_t48 + 140));
        __eflags = _t48;
        if(_t48 == 0) {
            return 0;
        }
    }
    _t69 = _t60 - _t53;
    L00401614(_t48, _t69);
    while(1) {
        __eflags = _t69 + _t48 -  *((intOrPtr*)(_t48 + 8 +  *(_t48 + 8) * 4));
        if(__eflags > 0) {
            break;
        }
         *(_t48 + 8) =  *(_t48 + 8) - 1;
        _t74 =  *_t48 -  *((intOrPtr*)(_t48 + 12 +  *(_t48 + 8) * 4)) - _t48;
        L0040130C( *((intOrPtr*)(_t48 + 12 +  *(_t48 + 8) * 4)), _t74, __eflags);
         *4235860 =  *4235860 - _t74;
        L00401324( *((intOrPtr*)(_t48 + 12 +  *(_t48 + 8) * 4)), __eflags);
        _t56 =  *((intOrPtr*)(_t48 + 12 +  *(_t48 + 8) * 4)) - _t48;
         *((intOrPtr*)(_t48 + 4)) = _t56;
         *_t48 = _t56;
    }
    L0040130C(_t69 + _t48,  *_t48 - _t69, __eflags);
     *4235860 =  *4235860 -  *_t48 - _t69;
     *_t48 = _t69;
    return 1;
}

L00401AE4(signed int* _a4)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int* _t35;
    _unknown_ _t36;
    signed int _t40;
    signed int _t42;
    intOrPtr _t46;
    signed int _t50;
    signed int* _t60;
    signed int _t64;
    signed int _t66;
    signed int* _t72;
    signed int _t73;
    signed int _t74;

    _t35 = _a4;
    if(_t35 == 0) {
        return ;
    }
    _t35 =  &(_t35[0xffffffffffffffff]);
    _t40 =  *_t35;
    if((_t40 & 4294967295 & 2) == 0) {
         *_t35 =  *_t35 | 1;
    } else {
        _t72 = _t35 -  *((intOrPtr*)(_t35 - 4));
         *_t72 =  *_t72 + (_t40 & 252) + 4;
        _t35 = _t72;
        _t73 =  *4235852;
        if(_t35 == _t73) {
             *4235852 =  *(_t73 + 4);
        }
        _t74 = _t35[1];
         *(_t74 + 8) = _t35[2];
         *(_t35[2] + 4) = _t74;
    }
    _t60 = _t35 + ( *_t35 & 252) + 4;
    if(( *_t60 & 1) != 0) {
         *_t35 =  *_t35 + ( *_t60 & 252) + 4;
        if(_t60 ==  *4235852) {
             *4235852 = _t60[1];
        }
        _t50 = _t60[1];
         *(_t50 + 8) = _t60[2];
         *(_t60[2] + 4) = _t50;
    }
     *(_t35 + ( *_t35 & 252) + 4) =  *(_t35 + ( *_t35 & 252) + 4) | 2;
    _t42 =  *_t35 & 252;
    if(_t42 >=  *4235816) {
        _t64 =  *( *4235852 + 4);
    } else {
        _t64 = _t42 + _t42 +  *4235836 + -12;
    }
    _t35[1] =  *(_t64 + 4);
    _t35[2] = _t64;
     *(_t35[1] + 8) = _t35;
     *(_t64 + 4) = _t35;
     *((intOrPtr*)(_t35 + _t42)) = _t42 + 4;
    _t66 =  *_t35;
    if( *((intOrPtr*)(_t35 + (_t66 & 252) + 4)) != 2) {
        return ;
    }
    if( *4235856 <=  *4235860) {
        _t46 =  *4235824;
    } else {
        _t46 =  *4235820;
    }
    if(_t66 <= _t46) {
        return ;
    }
    L004019C4(_t35);
    return;
}

L00401E28(struct _MEMORYSTATUS* __esp)
{
    intOrPtr _v20;
    _unknown_ _t2;

    __esp = __esp;
     *__esp = 32;
    GlobalMemoryStatus(__esp);
    return _v20;
}

L00402134()
{
    return;
}

L00402138()
{
    return;
}

L0040213C(intOrPtr _a4, intOrPtr _a8, signed int _a12)
{
    _unknown_ __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    signed int _t6;
    signed int _t8;
    _unknown_ _t9;
    _unknown_ _t12;
    intOrPtr _t13;
    _unknown_ _t17;

    _t13 = _a4;
    __esi = _a8;
    _t6 = _a12;
    _t8 = _t6 >> 1 >> 1;
    asm("cld ");
    _push(_t8 << 2);
    _push(__esi);
    _push(_t13);
    memcpy();
    __esp = __esp + 12;
    _push((_t6 & 3) << 0);
    _push(__esi);
    _push(__esi + _t8 + _t8);
    memcpy();
    __esp = __esp + 12;
    return _t13;
}

L004021AC(signed int __eax, signed int* _a4, _unknown_ _a8, unsigned int _a12)
{
    signed int* __edi;
    _unknown_ __ebp;
    signed int _t36;
    signed int _t38;
    unsigned int _t41;
    signed int _t42;
    unsigned int _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;

    _t36 = __eax;
    _t41 = _a12;
    __edi = _a4;
    __eflags = _t41 & -4;
    if(__eflags == 0) {
        _t42 = _t41 & 3;
        if(__eflags == 0) {
            return _a4;
        }
         *__edi = _t36 & 4294967295;
        if(__eflags == 0) {
            return _a4;
        }
         *(__edi + _t42 - 1) = _t36 & 4294967295;
        return _a4;
    }
     *__edi = _t36 & 4294967295;
    __ecx = __edi + _t41 - 4;
    (__edi)[0] = _t36 & 4294967295;
    _t38 =  *__edi;
    _t43 = _t41 >> 3;
    if(__eflags == 0) {
         *__ecx = _t38;
        return _a4;
    } else {
        goto L2;
    }
    while(1) {
L2:
         *__edi = _t38;
        (__edi)[1] = _t38;
        _t44 = _t43 - 1;
        if(__eflags == 0) {
            break;
        }
        (__edi)[2] = _t38;
        (__edi)[3] = _t38;
        _t45 = _t44 - 1;
        if(__eflags != 0) {
            (__edi)[4] = _t38;
            (__edi)[5] = _t38;
            _t46 = _t45 - 1;
            if(__eflags != 0) {
                (__edi)[6] = _t38;
                (__edi)[7] = _t38;
                _t47 = _t46 - 1;
                if(__eflags != 0) {
                    (__edi)[8] = _t38;
                    (__edi)[9] = _t38;
                    _t48 = _t47 - 1;
                    if(__eflags != 0) {
                        (__edi)[0xa] = _t38;
                        (__edi)[0xb] = _t38;
                        __edi =  &((__edi)[0xc]);
                        _t43 = _t48 - 1;
                        if(__eflags != 0) {
                            continue;
                        }
                    }
                }
            }
        }
        break;
    }
L8:
     *__ecx = _t38;
     *(__ecx - 4) = _t38;
    return _a4;
    goto L14;
}

L00402238(_unknown_ __eax, intOrPtr _a4, _unknown_ _a8, intOrPtr _a12)
{
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t9;
    _unknown_ _t11;

    asm("cld ");
    _push(_a12);
    _push(__eax);
    _push(_a4);
    memset();
    __esp = __esp + 12;
    return _a4;
}

L00402250(_unknown_ __esp, signed int _a4)
{
    signed int _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    signed int _t27;
    signed int _t29;
    signed int _t31;
    signed int _t32;
    signed int _t33;

    __esp = __esp;
    _t21 = _a4;
    _t33 = _t21 & 4294967295 & 3;
    if(_t33 != 0) {
        _t22 = _t21 + 4;
        if(( *(_t22 - 4) & 255) == 0) {
L11:
            _t22 = _t22 - 1;
            goto L12;
        }
        if(( *(_t22 - 3) & 255) == 0) {
            goto L12;
        }
        if(( *(_t22 - 2) & 255) == 0) {
            goto L13;
        }
        _t21 = _t22 - 1;
        goto L1;
        do {
            while(1) {
L1:
                _t29 =  *_t21;
                _t21 = _t21 + 4;
                _t27 = _t29;
                _t31 = _t29 - 16843009 & -2139062144;
                if(_t33 != 0) {
                    break;
                }
            }
            _t32 = _t31 &  !_t27;
        } while(_t33 == 0);
        if((_t32 & 4294967295) != 0) {
            goto L11;
        }
        if((_t32 & 4294967295) != 0) {
            goto L12;
        }
        if((_t32 & 16711680) == 0) {
            return _t23 - 1 - _a4;
        }
        goto L13;
L13:
        _t23 = _t22 - 1;
        return _t23 - 1 - _a4;
L12:
        _t22 = _t22 - 1;
        goto L13;
    }
    goto L1;
}

L004022AC(signed int __eax, intOrPtr _a4, intOrPtr _a8, signed int _a12)
{
    signed int* __ebx;
    _unknown_ __ebp;
    signed int _t31;
    _unknown_ _t33;
    signed int _t35;
    unsigned int _t37;
    signed int _t38;
    signed int _t42;

    _t31 = __eax;
    asm("cld ");
    asm("repne scasb ");
    __ebx = _a4 - 1;
    _t35 = _a12 & 3;
    __edx = _a8;
    asm("jecxz 0xf");
    while(1) {
         *__ebx = _t31 & 4294967295;
        _t38 = _t31 & 4294967295;
        if(_t38 == 0) {
            break;
        }
        __edx = __edx + 1;
        __ebx =  &((__ebx)[0]);
        _t35 = _t35 - 1;
        if(_t38 != 0) {
            continue;
        }
        _t37 = _a12 >> 2;
        asm("jecxz 0x31");
        while(1) {
             *__ebx = _t31 & 4294967295;
            if((_t31 & 4294967295) == 0) {
                break;
            }
            (__ebx)[0] = _t31 & 4294967295;
            if((_t31 & 4294967295) == 0) {
                return _a4;
            }
            (__ebx)[0] = _t31 & 4294967295;
            if((_t31 & 4294967295) == 0) {
                return _a4;
            }
            __edx = __edx + 4;
            (__ebx)[0] = _t31 & 4294967295;
            __ebx =  &((__ebx)[1]);
            _t42 = _t31 & 4294967295;
            if(_t42 == 0) {
                return _a4;
            }
            _t37 = _t37 - 1;
            if(_t42 != 0) {
                continue;
            }
             *__ebx = 0;
            return _a4;
        }
        break;
    }
    return _a4;
}

L004023BC(short* _a4)
{
    _unknown_ __ebp;
    short* _t2;

    __edx = 0;
    _t2 = _a4;
    while( *_t2 != 0) {
        __edx = __edx + 1;
        _t2 = _t2 + 2;
    }
}

L004023D4(_unknown_ __eax, signed int* _a4, signed int _a8)
{
    signed int __ebx;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t9;
    signed int _t12;
    _unknown_ _t15;
    _unknown_ _t16;

    __esi = _a8;
    __ebx = L004023BC(__esi);
    _t16 = 0;
    __edx = _a4;
    _t12 = __esi;
    if(__ebx > 0) {
        while(1) {
L1:
             *__edx = __esi & 4294967295;
            _t16 = _t16 + 1;
            __edx =  &((__edx)[0]);
            _t12 = _t12 + 2;
            if(__ebx <= _t16) {
                break;
            }
        }
    }
     *((short*)(_a4 + __ebx * 2)) = 0;
    return _a4;
}

L00402414(intOrPtr __eax, _unknown_ __esp, char _a4)
{
    _unknown_ __ebx;
    intOrPtr _t9;
    intOrPtr* _t13;

    __esp = __esp;
    _t9 = __eax;
    _t13 = __ebp +  *((intOrPtr*)(_t9 + 4));
     *((intOrPtr*)(_t13 + 8)) = _t9;
     *((intOrPtr*)(_t13 + 12)) =  &_a4;
     *((intOrPtr*)(_t13 + 4)) = 4203611;
     *((short*)(_t13 + 16)) = 0;
     *((short*)(_t13 + 18)) = 0;
     *((intOrPtr*)(_t13 + 28)) = 0;
     *_t13 =  *fs:0x0];
     *fs:0x0] = _t13;
    return;
}

L00402484(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t40;
    intOrPtr _t42;
    _unknown_ _t51;
    intOrPtr* _t53;
    intOrPtr _t57;
    intOrPtr _t58;
    _unknown_ _t59;
    _unknown_ _t61;
    intOrPtr _t62;

    _push(_t51);
    _push(_t61);
    _push(_t59);
    _t60 = _a8;
    if(( *(_a8 + 4) & 1) == 0) {
        L00406B6C("IS_STRUC(base->tpMask)", "xxtype.cpp", 315);
    }
    if(( *(_a4 + 4) & 1) == 0) {
        L00406B6C("IS_STRUC(derv->tpMask)", "xxtype.cpp", 316);
    }
    if(( *(_a4 + 12) & 4) == 0) {
        L00406B6C("derv->tpClass.tpcFlags & CF_HAS_BASES", "xxtype.cpp", 318);
    }
    __ecx = _a4;
    _t53 = ( *(_a4 + 18) & 65535) + _a4;
    while(1) {
        _t62 =  *_t53;
        if(_t62 == 0) {
            break;
        }
        if(( *(_t53 + 8) & 8) != 0) {
L19:
            _t53 = _t53 + 12;
            continue;
        }
        if(_a16 == 0) {
L11:
            _t58 = 0;
L13:
            _v8 = _t58;
            if(L00402970(_t58, _t60, _t62) == 0 || _v8 == 0) {
                if(( *(_t62 + 12) & 4) == 0 || L00402484(_t47, _t62, _t60, _a12, _v8) == 0) {
                    goto L19;
                } else {
                    _t42 = 1;
L34:
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebx);
                    _pop(__ecx);
                    _pop(__ecx);
                    return _t42;
                }
                break;
            }
            _t42 = 1;
            goto L34;
        }
        if(( *(_t53 + 8) & 3) == 3) {
            _t58 = 1;
            goto L13;
        }
        goto L11;
    }
    _t53 = ( *(_a4 + 16) & 65535) + _a4;
    while(1) {
        _t62 =  *_t53;
        if(_t62 == 0) {
            break;
        }
        if(_a16 == 0 || ( *(_t53 + 8) & 3) != 3) {
            _t57 = 0;
        } else {
            _t57 = 1;
        }
        _v12 = _t57;
        if(L00402970(_t57, _t60, _t62) == 0 || _v12 == 0) {
            if(( *(_t62 + 12) & 4) == 0 || L00402484(_t43, _t62, _t60, _a12, _v12) == 0) {
                _t53 = _t53 + 12;
                continue;
            } else {
                _t42 = 1;
                goto L34;
            }
            break;
        }
        _t42 = 1;
        goto L34;
    }
    _t42 = 0;
    goto L34;
}

L0040262E(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, signed int _a16, intOrPtr _a20, intOrPtr _a24, signed int* _a28, intOrPtr _a32, intOrPtr _a36)
{
    intOrPtr _v8;
    signed int _v12;
    signed int _v16;
    intOrPtr _v20;
    signed int _v24;
    intOrPtr _v28;
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t90;
    _unknown_ _t91;
    signed int _t93;
    signed int _t100;
    intOrPtr* _t106;
    _unknown_ _t109;
    _unknown_ _t111;
    _unknown_ _t116;
    signed int _t118;
    signed int _t121;

    _t114 = 0;
    _push(_t106);
    _push(_t121);
    _push(__edi);
    _v12 = 0;
    _v16 = 0;
    _v20 = 0;
    if(_a8 == 0 || ( *(_a8 + 4) & 1) == 0) {
        L00406B6C("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)", "xxtype.cpp", 847);
    }
    if(_a16 == 0) {
L5:
        L00406B6C("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)", "xxtype.cpp", 848);
        goto L6;
    }
    _t114 = _a16;
    if(( *(_a16 + 4) & 1) != 0) {
        goto L6;
    }
    goto L5;
L6:
    if(_a24 != 0) {
        if(( *(_a24 + 4) & 1) == 0) {
            L00406B6C("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)", "xxtype.cpp", 849);
        }
    }
    if(_a24 == 0) {
L14:
        if(_a16 == 0 || L00402970(_t114, _a8, _a16) != 0) {
            L00406B6C("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 859);
        }
        if(( *(_a8 + 12) & 4) != 0) {
            _v8 = 0;
            _t106 = ( *(_a8 + 18) & 65535) + _a8;
            while(1) {
L20:
                __edi =  *_t106;
                if(__edi == 0) {
                    break;
                }
                if(( *(_t106 + 8) & 8) != 0) {
L43:
                    _t106 = _t106 + 12;
                    continue;
                }
                if(_a32 == 0 || ( *(_t106 + 8) & 3) != 3) {
                    _t118 = 0;
                } else {
                    _t118 = 1;
                }
                _v24 = _t118;
                _t121 = _a4 +  *((intOrPtr*)(_t106 + 4));
                _v28 = _a36;
                if(( *(_t106 + 8) & 4) != 0) {
                    _t121 =  *_t121;
                    _v28 = __edi;
                }
                if(L00402970(_t118, _a16, __edi) != 0) {
                    if(_a12 == 0) {
                        if(_a20 == 0) {
                            goto L39;
                        }
                        goto L36;
                    }
                    goto L33;
L36:
                    if(_a24 == 0) {
                        L00406B6C("srcTypPtr", "xxtype.cpp", 976);
                    }
                    if(L0040262E(_t96, _t121, __edi, _a20, _a24, 0, 0, _a28, 0, 0) == 0) {
                        goto L43;
                    } else {
                        goto L39;
                    }
                    break;
                } else {
                    if(( *(__edi + 12) & 4) == 0) {
                        goto L43;
                    }
                    _t100 = L0040262E(_t96, _t121, __edi, _a12, _a16, _a20, _a24, _a28, _v24, _v28);
                    if(_t100 == 0) {
                        goto L43;
                    }
                    _t121 = _t100;
                    _v24 =  *_a28;
L39:
                    if(_v20 == 0 || _t121 != _v16) {
                        _v20 = _v20 + 1;
                        _v16 = _t121;
                        _v12 = _v24;
                    } else {
                        _v12 = _v12 | _v24;
                    }
                    goto L43;
                }
L33:
                if(_t121 != _a12) {
                    goto L43;
                }
                _t93 = _t121;
                goto L49;
            }
            if(_v8 != 0) {
                 *_a28 = _v12;
                if(_v20 != 1) {
                    _v16 = 0;
                }
                _t93 = _v16;
                goto L49;
            }
            _v8 = _v8 + 1;
            _t106 = ( *(_a8 + 16) & 65535) + _a8;
        } else {
            _t93 = 0;
            goto L49;
        }
        goto L20;
    }
    if(L00402970(_t114, _a24, _a16) != 0) {
        L00406B6C("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 853);
    }
    if(L00402970(_t114, _a24, _a8) == 0) {
        goto L14;
    }
    _t93 = 0;
L49:
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _t93;
}

L00402895(_unknown_ __eax, intOrPtr* _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr* _a16)
{
    char _v8;
    intOrPtr __ebx;
    _unknown_ __ecx;
    intOrPtr* __edi;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t20;
    _unknown_ _t22;
    _unknown_ _t24;
    _unknown_ _t25;

    __edi = _a16;
    __esi = _a4;
    if( *__edi == 0) {
        L00406B6C("addr", "xxtype.cpp", 1301);
    }
    while(1) {
L2:
        __ebx =  *__esi;
        if(__ebx != 0) {
            break;
        } else {
            return 0;
        }
    }
    _t29 =  *__edi +  *((intOrPtr*)(__esi + 4));
    _v8 =  *__edi +  *((intOrPtr*)(__esi + 4));
    if(_a8 != 0) {
        _v8 =  *_v8;
    }
    if(L00402970(_t29, __ebx, _a12) == 0) {
        if(( *(__ebx + 4) & 2) == 0) {
L12:
            __esi = __esi + 12;
            goto L2;
        }
        goto L9;
        return __eax;
    } else {
         *__edi = _v8;
        return 1;
    }
L9:
    _t22 = ( *(__ebx + 16) & 65535) + __ebx;
    if(_t22 == 0 || L00402895(_t22, _t22, 0, _a12,  &_v8) == 0) {
        goto L12;
    }
     *__edi = _v8;
    return 1;
}

L00402938(intOrPtr _a4)
{
    intOrPtr __ebx;
    _unknown_ __ebp;

    __ebx = _a4;
    if(__ebx != 0) {
        if( *(__ebx + 6) != 0) {
            return ( *(__ebx + 6) & 65535) + __ebx;
        }
        L00406B6C("id->tpName", "xxtype.cpp", 34);
        return ( *(__ebx + 6) & 65535) + __ebx;
    } else {
        return "<notype>";
    }
}

L00402970(signed int __edx, intOrPtr* _a4, intOrPtr* _a8)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t19;
    char _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    intOrPtr* _t25;
    char* _t27;
    signed int _t28;
    char* _t31;

    _t28 = __edx;
    __esi = _a8;
    _t25 = _a4;
    if(_t25 == 0) {
        L00406B6C("tp1", "xxtype.cpp", 261);
    }
    if(__esi == 0) {
        L00406B6C("tp2", "xxtype.cpp", 262);
    }
    if(__esi == _t25) {
        return 1;
    }
    if((_t28 & 4294967295) !=  *((intOrPtr*)(__esi + 4))) {
        return 0;
    }
    if( *_t25 !=  *__esi) {
        return 0;
    }
    if((_t28 & 4294967295 & 128) != 0) {
        return 0;
    }
    _t31 = ( *(_t25 + 6) & 65535) + _t25;
    if( *(_t25 + 6) == 0) {
        L00406B6C("tp1->tpName", "xxtype.cpp", 286);
    }
    _t27 = ( *(__esi + 6) & 65535) + __esi;
    if( *(__esi + 6) == 0) {
        L00406B6C("tp2->tpName", "xxtype.cpp", 287);
    }
    while(1) {
        _t20 =  *_t31;
        _t27 = _t27 + 1;
        _t31 = _t31 + 1;
        if( *_t27 != _t20) {
            break;
        }
        if(_t20 == 0) {
            return 1;
        }
    }
    return 0;
}

L00402A4C(intOrPtr* _a4, intOrPtr* _a8, signed int _a12, intOrPtr _a16)
{
    signed int _v8;
    intOrPtr* __ebx;
    _unknown_ __ecx;
    _unknown_ __edi;
    intOrPtr* __esi;
    _unknown_ __ebp;
    signed int _t43;
    signed int _t44;
    _unknown_ _t45;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t51;
    signed int _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    signed int _t61;
    signed int _t65;
    signed int _t68;
    signed int _t69;

    _t43 = _a12;
    __esi = _a8;
    __ebx = _a4;
    while(1) {
L1:
        __eflags = __esi - __ebx;
        if(__esi == __ebx) {
            return 1;
        }
        _t68 =  *(__ebx + 4) & 65535;
        _v8 =  *(__esi + 4) & 65535;
        _t61 = _v8 & _t68;
        __eflags = _t61 & 4294967295 & 16;
        if((_t61 & 4294967295 & 16) != 0) {
            break;
        }
        _t65 = _v8 & _t68;
        __eflags = _t65 & 4294967295 & 4;
        if((_t65 & 4294967295 & 4) == 0) {
            _t44 = L00402970(_t65, __ebx, __esi);
            __eflags = _t44;
            if(_t44 != 0) {
                return 1;
            }
            __eflags = _t68 & 2;
            if((_t68 & 2) == 0) {
                return 0;
            }
            __eflags = _v8 & 1;
            if((_v8 & 1) == 0) {
                return 0;
            }
            __eflags =  *(__ebx + 12) & 4;
            if(( *(__ebx + 12) & 4) == 0) {
                return 0;
            }
            return L00402484(_t44, __ebx, __esi, _a16, 1);
        }
        __eflags =  *(__ebx + 12) -  *((intOrPtr*)(__esi + 12));
        if( *(__ebx + 12) !=  *((intOrPtr*)(__esi + 12))) {
            __eflags = _t43;
            if(__eflags != 0) {
                return 0;
            }
            if(__eflags != 0) {
                return 0;
            }
        }
        _t43 = 1;
        __ebx =  *((intOrPtr*)(__ebx + 8));
        __esi =  *((intOrPtr*)(__esi + 8));
        continue;
        return 1;
    }
    _t69 = _t68 & 768;
    _v8 = _v8 & 768;
    __eflags = _t69 - _v8;
    if(_t69 != _v8) {
        __eflags = _t43;
        if(_t43 != 0) {
            return 0;
        }
        __eflags = (_t69 & 768) - (_v8 & 768);
        if((_t69 & 768) == (_v8 & 768)) {
            return 0;
        }
        _t57 =  !(_v8 & 768) & _t69;
        __eflags = _t57 & 4294967295 & 3;
        if((_t57 & 4294967295 & 3) != 0) {
            return 0;
        }
        _v8 = _v8 | 768;
        __eflags = (_t69 | 768) - _v8;
        if((_t69 | 768) != _v8) {
            return 0;
        }
    }
    _t43 = 1;
    __ebx =  *((intOrPtr*)(__ebx + 8));
    __esi =  *((intOrPtr*)(__esi + 8));
    goto L1;
}

L00402B5C(_unknown_ __eax, char _a4, intOrPtr _a8, intOrPtr _a12)
{
    intOrPtr __ebx;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t18;

    __esi = _a12;
    __ebx = _a8;
    if(_a4 == 0) {
        return _a4;
    }
    if(L00402895(( *(__ebx + 16) & 65535) + __ebx, ( *(__ebx + 16) & 65535) + __ebx, 0, __esi,  &_a4) != 0) {
        return _a4;
    }
    if(L00402895(( *(__ebx + 18) & 65535) + __ebx, ( *(__ebx + 18) & 65535) + __ebx, 1, __esi,  &_a4) != 0) {
        return _a4;
    }
    if("Can't adjust class address (no base class entry found)" == 0) {
        return 0;
    }
    L00406B6C("!"Can't adjust class address (no base class entry found)"", "xxtype.cpp", 1406);
    return 0;
}

L00402BD8()
{
    if( *4236668 == 0) {
         *4236668 =  &M00402C00;
    }
    if( *4236672 != 0) {
        return ;
    }
     *4236672 = 4205648;
    return;
}

L00402CA4(_unknown_ __eax)
{
    short _v24;
    intOrPtr _v40;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t6;
    _unknown_ _t7;

    _push(__ebx);
    _push(__esi);
    _push(__edi);
    L00402414(4236936, __esp);
     *(L00401140() + 4) =  *(_t8 + 4) & 253;
    if( *((intOrPtr*)( *4245684)) == 2) {
        _push( *4236668);
        L00408021(4, 1);
        __esp = __esp + 4;
    }
    L004031A8();
    _v24 = 8;
     *((intOrPtr*)( *4236668))();
    _v24 = 0;
    L00406EC0();
     *fs:0x0] = _v40;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L00402D18(_unknown_ __eax)
{
    _unknown_ _t3;

     *(L00401140() + 4) =  *(_t4 + 4) & 253;
    if( *((intOrPtr*)( *4245684)) == 2) {
        _push( *4236672);
        L00408021(5, 1);
        __esp = __esp + 4;
    }
     *((intOrPtr*)( *4236672))();
    L00406EC0();
    return;
}

L00402D50(intOrPtr _a4)
{
    intOrPtr _v8;
    char _v12;
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t5;
    signed int _t6;
    _unknown_ _t9;
    _unknown_ _t10;
    intOrPtr _t11;

    _push(_t10);
    _t11 = _a4;
    _t6 = _t5 & 1;
    if(_t11 == 0 && _t11 == 0) {
        L00402D9C(_t6,  &_v12);
        _t11 = _v8;
    }
    L0040213C(L00401140(), _t11, 156);
    L00402BD8();
    _pop(__ebx);
    _pop(__ecx);
    _pop(__ecx);
    return;
}

L00402D9C(_unknown_ __eax, intOrPtr* _a4)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;
    _unknown_ _t3;

    __ebx = _a4;
     *4236748 = L00401140() + 28;
     *__ebx = -2106428599;
     *((intOrPtr*)(__ebx + 4)) = 4236728;
    return;
}

L00402EC0(intOrPtr* _a4)
{
    _unknown_ __ebp;

    __eax = _a4;
     *__eax = 0;
     *((intOrPtr*)(__eax + 4)) =  &M00402DD0;
    L00402F4C(__eax);
    return;
}

L00402F38()
{
    __eax =  *4246720;
    if( *4246720 == 0) {
        return ;
    }
    L00402EC0(__eax);
    return;
}

L00402F4C(intOrPtr* _a4)
{
    _unknown_ __ebp;

    __eax = _a4;
     *__eax =  *fs:0x0];
     *fs:0x0] = __eax;
    return;
}

L00402F9A(_unknown_ __eax, _unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;

    __edx = __edx;
    __eax = __eax;
    _push(0);
    _push(__edx);
    _push(4206507);
    _push(__eax);
    RtlUnwind();
    return;
}

L00402FAF(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
     *((intOrPtr*)(__ebx))();
    return;
}

L00403000(signed int _a4, long _a8, _unknown_ _a12)
{
    signed int __ebx;
    long __edi;
    long __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t14;
    _unknown_ _t16;

    __ebx = _a4;
    __eflags = __ebx -  *4238184;
    if(__eflags >= 0) {
        return L0040375C(6);
    }
    if(__eflags < 0) {
        __edi = 0;
    } else {
        if(__eflags == 0) {
            __edi = 1;
        } else {
            if(__eflags != 0) {
                return L0040375C(1);
            }
            __edi = 2;
        }
    }
     *(4238188 + __ebx * 4) =  *(4238188 + __ebx * 4) & -513;
    __esi = SetFilePointer( *(4245896 + __ebx * 4), _a8, 0, __edi);
    if(__eflags != 0) {
        return __esi;
    }
    L004037C0();
    return __esi;
}

L00403078(_unknown_ __eax, signed int _a4, intOrPtr _a8, intOrPtr _a12)
{
    intOrPtr _v8;
    intOrPtr _v12;
    char _v524;
    _unknown_ __ebx;
    intOrPtr __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t38;
    _unknown_ _t41;
    _unknown_ _t45;
    signed int _t48;
    _unknown_ _t52;
    _unknown_ _t53;
    signed int* _t55;
    signed int* _t57;
    _unknown_ _t58;
    _unknown_ _t69;
    signed int _t72;
    signed int _t75;

    __edi = _a8;
    if(_a4 >=  *4238184) {
        return L0040375C(250);
    }
    if(_a12 + 1 < 2) {
        return 0;
    }
    if(( *(4238189 + _a4 * 4) & 8) != 0) {
        L00403000(_a4, 0, 2);
    }
    _t40 = _a4;
    if(( *(4238189 + _a4 * 4) & 64) == 0) {
        return L004031E0(_t40, _a4, __edi, _a12);
    }
    __esi = __edi;
    _v8 = 0;
    _v12 = 0;
L21:
    while(__esi - __edi < _a12) {
        _t55 =  &_v524;
        while(_t55 -  &_v524 < 511) {
            _t48 = __esi - __edi;
            if(_t48 < _a12) {
                __esi = __esi + 1;
                if((_t48 & 4294967295) != 10) {
                     *_t55 = _t48 & 4294967295;
                    _t55 =  &(_t55[0]);
                } else {
                    _v8 = _v8 + 1;
                     *_t55 = 13;
                    _t57 =  &(_t55[0]);
                     *_t57 = 10;
                    _t55 =  &(_t57[0]);
                }
                continue;
            }
            _push(_t55 -  &_v524);
            _push( ?_? ( &_v524));
            _t72 = _a4;
            _push(_t72);
            _t45 = L004031E0( &_v524);
            __esp = __esp + 12;
            if(_t45 == _t55 -  &_v524) {
                _v12 = _v12 + _t45;
                goto L21;
            }
            if(_t45 != 255) {
                _t75 = _v12 - _v8 + _t45;
                return _t75;
            }
            _t75 = _t72 | 255;
            return _t75;
        }
    }
}

L004031A8()
{
    _unknown_ __ebx;
    _unknown_ __edi;
    intOrPtr __esi;
    intOrPtr _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    __edi = 0;
    __esi =  *4238184;
    __ebx = 4236984;
    while(1) {
        _t5 = __esi;
        __esi = __esi + -1;
        if(_t5 == 0) {
            break;
        }
        if(( *(__ebx + 18) & 3) != 0 &&  *((intOrPtr*)(__ebx + 8)) != 0) {
            L004032C4(_t5, __ebx);
            __edi = __edi + 1;
        }
        __ebx = __ebx + 24;
    }
    return;
}

L004031E0(_unknown_ __eax, signed int _a4, void* _a8, long _a12)
{
    intOrPtr _v8;
    _unknown_ __ecx;
    _unknown_ __ebp;
    _unknown_ _t8;
    signed int _t9;
    _unknown_ _t12;
    _unknown_ _t15;

    _t9 = _a4;
    __eflags = _t9 -  *4238184;
    if(__eflags >= 0) {
        return L0040375C(6);
    }
    _t12 = WriteFile( *(4245896 + _t9 * 4), _a8, _a12,  &_v8, 0) - 1;
    if(__eflags == 0) {
        return _v8;
    }
    L004037C0();
    return _t12;
L5:
}

L004032C4(signed int __eax, signed int _a4)
{
    signed int __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t23;
    intOrPtr _t24;
    signed int _t25;
    _unknown_ _t26;
    _unknown_ _t29;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t38;

    _t23 = __eax;
    __ebx = _a4;
    if(__ebx == 0) {
        L00403344(_t23);
        return 0;
    }
    if((__ebx & 4294967295) !=  *((intOrPtr*)(__ebx + 23))) {
        return _t23 | 255;
    }
    if( *((intOrPtr*)(__ebx + 8)) < 0) {
        _t38 =  *((intOrPtr*)(__ebx + 12)) +  *((intOrPtr*)(__ebx + 8)) + 1;
         *((intOrPtr*)(__ebx + 8)) =  *((intOrPtr*)(__ebx + 8)) - _t38;
        _push(_t38);
        _t24 =  *((intOrPtr*)(__ebx + 4));
         *__ebx = _t24;
        _push(_t24);
        _push( *((char*)(__ebx + 22)));
        _t25 = L00403078(_t24);
        __esp = __esp + 12;
        if(_t38 == _t25) {
            return 0;
        }
        if(( *(__ebx + 19) & 2) != 0) {
            return 0;
        }
         *(__ebx + 18) =  *(__ebx + 18) | 16;
        return _t25 | 255;
    } else {
        if(( *(__ebx + 18) & 8) == 0) {
            if(__ebx + 20 !=  *__ebx) {
                return 0;
            }
        }
         *((intOrPtr*)(__ebx + 8)) = 0;
        if(__ebx + 20 !=  *__ebx) {
            return 0;
        }
         *__ebx =  *((intOrPtr*)(__ebx + 4));
        return 0;
    }
}

L00403344(_unknown_ __eax)
{
    intOrPtr* __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t12;
    intOrPtr _t13;
    intOrPtr _t15;
    _unknown_ _t16;
    _unknown_ _t19;

    __ebp = 0;
    __edi =  *4238184;
    __ebx = 4236984;
    while(1) {
        __ecx = __edi;
        __edi = __edi + -1;
        if(__ecx == 0) {
            break;
        }
        _t13 =  *((intOrPtr*)(__ebx + 8));
        if(_t13 < 0) {
            _t19 =  *((intOrPtr*)(__ebx + 12)) + _t13 + 1;
             *((intOrPtr*)(__ebx + 8)) =  *((intOrPtr*)(__ebx + 8)) - _t19;
            _push(_t19);
            _t15 =  *((intOrPtr*)(__ebx + 4));
             *__ebx = _t15;
            _push(_t15);
            _push( *((char*)(__ebx + 22)));
            _t16 = L00403078(_t15);
            __esp = __esp + 12;
            if(_t19 != _t16 && ( *(__ebx + 19) & 2) == 0) {
                 *(__ebx + 18) =  *(__ebx + 18) | 16;
            }
            __ebp = __ebp + 1;
        }
        __ebx = __ebx + 24;
    }
    return __ebp;
}

L004033A0(intOrPtr _a4)
{
    _unknown_ __ebp;

     *4238392 = _a4;
    return;
}

L004033B0(intOrPtr* _a4)
{
    _unknown_ __ebp;
    intOrPtr* _t2;

    _t2 = _a4;
    if(_t2 == 0) {
        return ;
    }
     *4236980 =  *_t2;
    return;
}

L0040375C(signed int _a4)
{
    _unknown_ __ebp;
    signed int _t3;
    signed int _t4;

    _t3 = _a4;
    if(_t3 < 0) {
        _t4 =  ~_t3;
        if(_t4 >=  *4238892) {
            goto L2;
        }
         *4246096 = -1;
    } else {
        if(_t3 > 298) {
L2:
            _t3 = 1;
        }
         *4246096 = _t3;
        _t4 =  *(_t3 + 4238396);
    }
     *4241916 = _t4;
    return _t4 | 255;
}

L004037C0()
{
    _unknown_ _t3;

    L0040375C(GetLastError() & 65535);
    return;
}

L00404434(intOrPtr _a4)
{
    _unknown_ __ebp;
    intOrPtr _t11;
    _unknown_ _t15;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t27;

    _t11 =  *4240796;
    __eflags = _a4 - 16;
    if(__eflags > 0) {
        if(__eflags == 0) {
            return  *((intOrPtr*)( *((intOrPtr*)(_t11 + 24)) + 12));
        }
        if(__eflags == 0) {
            return  *((intOrPtr*)( *((intOrPtr*)(_t11 + 24)) + 16));
        }
        return 0;
    }
    if(__eflags == 0) {
        return  *((intOrPtr*)( *((intOrPtr*)(_t11 + 24)) + 8));
    }
    if(__eflags == 0) {
        return  *((intOrPtr*)( *((intOrPtr*)(_t11 + 24)) + 4));
    }
    if(__eflags == 0) {
        return  *((intOrPtr*)( *((intOrPtr*)(_t11 + 24))));
    }
    return 0;
}

L0040454C(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;

    L00404690(_a4, 8);
    return;
}

L00404650(signed short _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;

    L004046D4(_a4 & 65535, 8);
    return;
}

L00404690(signed int _a4, signed int _a8)
{
    _unknown_ __ebp;
    intOrPtr _t12;
    _unknown_ _t17;
    signed int _t18;
    signed int _t20;

    _t18 = _a8;
    _t20 = _a4;
    if(_t20 <= 255) {
        _t12 =  *4240796;
        if( *((intOrPtr*)(_t12 + 8)) != 0) {
            return  *(4239966 + (_t20 & 4294967295) * 2) & 65535 & _t18;
        }
        if( *((intOrPtr*)(_t12 + 16)) != 0) {
            return _t18 &  *( *((intOrPtr*)(_t12 + 16)) + 2 + _t20 * 2) & 65535;
        }
        return  *(4239966 + (_t20 & 4294967295) * 2) & 65535 & _t18;
    } else {
        return 0;
    }
L6:
}

L004046D4(char _a4, signed int _a8)
{
    signed short _v6;
    signed int __ebx;
    _unknown_ __ecx;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t16;

    __ebx = _a8;
    if(_a4 == 65535) {
        return 0;
    }
    if( *((intOrPtr*)( *4240796 + 8)) != 0) {
        if(_a4 < 256) {
            return  *(4239966 + _a4 * 2) & 65535 & __ebx;
        }
    }
    _push( &_v6);
    _push(1);
    _push( &_a4);
    _push(1);
    GetStringTypeW();
    return _v6 & 65535 & __ebx;
}

L00404C97(signed int __eax, _unknown_ __edx, _unknown_ __esp, _unknown_ __eflags, signed int _a4, intOrPtr _a8)
{
    signed int __ebx;
    _unknown_ __esi;
    signed int _t5;
    signed int _t6;
    intOrPtr _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;

    _t17 = __eflags;
    __esp = __esp;
    _t5 = __eax;
    __ebx = _a4;
    _t9 = _a8;
    if(_t17 == 0) {
        if(_t17 == 0) {
            return _t5 / __ebx;
        }
        __ebx = __ebx;
        if(_t17 == 0) {
            return _t5 / __ebx;
        }
    }
    _t6 = _t5 << 1;
    asm("rcl edx, 1");
    asm("rcl esi, 1");
    asm("rcl edi, 1");
    _t18 = 0 - _t9;
    if(_t18 >= 0 && (_t18 > 0 || 0 >= __ebx)) {
        asm("sbb edi, ebp");
        _t6 = _t6 + 1;
    }
    asm("loop 0xffffffffffffffe9");
    return _t6;
}

L00404D5A(signed int __eax, _unknown_ __edx, _unknown_ __esp, _unknown_ __eflags, signed int _a4, intOrPtr _a8)
{
    signed int __ebx;
    _unknown_ __esi;
    signed int _t5;
    _unknown_ _t6;
    _unknown_ _t8;
    intOrPtr _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;

    _t18 = __eflags;
    __esp = __esp;
    _t5 = __eax;
    __ebx = _a4;
    _t11 = _a8;
    if(_t18 != 0) {
L3:
        __esi = 0;
        asm("rcl edx, 1");
        asm("rcl esi, 1");
        asm("rcl edi, 1");
        _t19 = 0 - _t11;
        if(_t19 >= 0 && (_t19 > 0 || 0 >= __ebx)) {
            __esi = __esi - __ebx;
            asm("sbb edi, ebp");
        }
        asm("loop 0xffffffffffffffe9");
        return __esi;
    }
    if(_t18 == 0) {
L9:
        asm("xchg edx, eax");
        return _t5 / __ebx;
    }
    __ebx = __ebx;
    if(_t18 == 0) {
        goto L9;
    }
    goto L3;
}

L00404DFC(signed int _a4)
{
    signed int _v8;
    signed int _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t44;
    signed int _t45;
    signed int _t46;
    signed int _t47;
    signed int _t48;
    signed int _t49;
    signed int _t50;
    signed int _t51;
    signed int _t52;
    signed int _t53;
    signed int _t54;
    _unknown_ _t56;
    signed int _t58;
    signed int _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t68;

    __edx = _a4;
    if(__edx >= -4932) {
        if(__edx <= 4932) {
            if(__edx != 0) {
                _t45 = __edx;
                if(__edx < 0) {
                    _t45 =  ~__edx;
                }
                _t46 = _t45 >> 3;
                _t61 = (_t45 & 7) + (_t45 & 7) * 4;
                _v16 =  *((intOrPtr*)(4241088 + _t61 * 2));
                _t58 =  *(4241092 + _t61 * 2);
                _v12 = _t58;
                _v8 = _t58 & 4294967295;
                if((_t46 & 4294967295 & 1) != 0) {
                    asm("fld tword [0x40b710]");
                    asm("fld tword [ebp-0xc]");
                    asm("fmulp st1, st0");
                    asm("fstp tword [ebp-0xc]");
                    asm("wait ");
                }
                _t47 = _t46 >> 1;
                if(_t47 != 0) {
                    if((_t47 & 4294967295 & 1) != 0) {
                        asm("fld tword [0x40b71c]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t48 = _t47 >> 1;
                    if((_t48 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t49 = _t48 >> 1;
                    if((_t49 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t50 = _t49 >> 1;
                    if((_t50 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t51 = _t50 >> 1;
                    if((_t51 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t52 = _t51 >> 1;
                    if((_t52 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t53 = _t52 >> 1;
                    if((_t53 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t54 = _t53 >> 1;
                    if((_t54 & 4294967295 & 1) != 0) {
                        asm("fld tword [ecx]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                    _t47 = _t54 >> 1;
                    if((_t47 & 4294967295 & 1) != 0) {
                        _t47 = 4241260;
                        asm("fld tword [eax]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                    }
                }
                if(__edx >= 0) {
                    asm("fld tword [ebp-0xc]");
                    return _t47;
                }
                asm("fld tword [ebp-0xc]");
                asm("fdivr dword [0x404f80]");
                return _t47;
            }
            goto L5;
        }
        goto L3;
L5:
        asm("fld tword [0x404f74]");
        return _t44;
    }
    asm("fld tword [0x404f68]");
    return _t44;
L3:
    asm("fld tword [eax]");
    return 4241270;
}

L00404F84()
{
    signed short _v6;
    _unknown_ __ebp;

    asm("fnstsw word [ebp-0x2]");
    asm("fclex ");
    return _v6 & 65535;
}

L00404F98(signed int _a4, signed int _a8)
{
    signed short _v8;
    _unknown_ __ebp;
    signed int _t7;

    asm("wait ");
    asm("fnstcw word [ebp-0x4]");
    _t7 = _a4;
    asm("jecxz 0x7");
     *4241488 = _t7;
    asm("wait ");
    _v8 = (_t7 & _a8 | _v8 & 65535 &  !_a8) & 4294967295;
    asm("fldcw word [ebp-0x4]");
    return;
}

L00405010()
{
    asm("fninit ");
    L00404F98( *4241488, 8191);
    return;
}

L00405028(intOrPtr* _a4)
{
    short _v6;
    intOrPtr _v10;
    intOrPtr _v14;
    _unknown_ __ebp;

    __eax = _a4;
    if(( *(__eax + 7) & 128) != 0) {
        _v14 =  *__eax;
        _v10 =  *((intOrPtr*)(__eax + 4));
        _v6 = 16446;
        asm("fld tword [ebp-0xa]");
        return;
    } else {
        asm("fild qword [eax]");
        return;
    }
}

L00405058(_unknown_ __esp, intOrPtr* _a4, intOrPtr* _a8)
{
    __esp = __esp;
    __eax = _a4;
    __edx = _a8;
    if( *((short*)(__edx + 8)) == 16446) {
         *__eax =  *__edx;
         *((intOrPtr*)(__eax + 4)) =  *((intOrPtr*)(__edx + 4));
        return;
    } else {
        asm("fld tword [edx]");
        asm("fistp qword [eax]");
        asm("wait ");
        return;
    }
}

L0040507C(_unknown_ __esp, _unknown_ _a4)
{
    _unknown_ _t2;
    _unknown_ _t3;

    __esp = __esp;
    asm("fld tword [eax]");
    asm("fxam ");
    asm("wait ");
    asm("fnstsw ax");
    asm("fstp st0");
    asm("wait ");
    return 0;
}

L00405144(signed int __ecx, signed int __edx, signed int _a4, char _a8, intOrPtr _a20, intOrPtr _a24)
{
    char* _v8;
    signed int _v10;
    intOrPtr _v16;
    intOrPtr _v20;
    signed int __ebx;
    signed int __esi;
    _unknown_ __ebp;
    signed int _t47;

    _t47 = __edx;
    __ecx = __ecx;
    __esi = _a4;
    if(__esi != 0) {
    }
    _v10 = _t47 & 4294967295;
    if((_t47 & 4294967295) != 32767) {
        __eflags = (__ecx & 4294967295) - (_t47 & 4294967295);
        if((__ecx & 4294967295) >= (_t47 & 4294967295)) {
            __eflags = (__ecx & 4294967295) - (_t47 & 4294967295);
            if(__eflags != 0) {
                if(__eflags != 0) {
                    __eflags = (__ebx & 4294967295) - (_t47 & 4294967295);
                    if((__ebx & 4294967295) <= (_t47 & 4294967295)) {
                        asm("fld tword [ebp+0xc]");
                        asm("fstp qword [ebp-0x1c]");
                        asm("wait ");
                        asm("fld qword [ebp-0x1c]");
                        return;
                    }
                    goto L15;
                    return;
                }
                goto L13;
L15:
                _v20 = 0;
                _v16 = 0;
L16:
                 *4241916 = 34;
                __eflags = _v10;
                if(_v10 == 0) {
                    asm("fld qword [ebp-0x10]");
                    return;
                }
                asm("fld qword [ebp-0x10]");
                asm("fchs ");
                return;
            }
            goto L8;
L13:
            asm("fld tword [ebp+0xc]");
            asm("fstp qword [ebp-0x1c]");
            asm("wait ");
            asm("fld qword [ebp-0x1c]");
            return;
        }
        goto L6;
L8:
        L00404F98(0, 0);
        _v8 =  &_a8;
        L00404F98(3072, 3072);
        __eflags = __esi;
        if(__esi != 0) {
            asm("fld tword [ebp+0xc]");
            asm("fstp qword [ebp-0x10]");
            asm("wait ");
        } else {
            asm("fld tword [ebp+0xc]");
            asm("fstp dword [ebp-0x14]");
            asm("wait ");
            asm("fld dword [ebp-0x14]");
            asm("fstp qword [ebp-0x10]");
            asm("wait ");
        }
        _push(3072);
        _push(_v8);
        L00404F98();
        asm("fld qword [ebp-0x10]");
        __esp = __esp + 8;
        return;
    } else {
        asm("fld tword [ebp+0xc]");
        asm("fstp qword [ebp-0x1c]");
        asm("wait ");
        asm("fld qword [ebp-0x1c]");
        return;
    }
L6:
    _v20 = _a20;
    _v16 = _a24;
    goto L16;
}

L0040525C(signed int _a4, signed int* _a8, signed int _a12, char _a16, _unknown_ _a20)
{
    char _v40;
    signed int* __ebx;
    signed int __edi;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t28;
    signed int _t30;
    _unknown_ _t31;
    _unknown_ _t33;
    _unknown_ _t34;

    __edi = _a12;
    __esi = _a4;
    __ebx = _a8;
    if(__edi < 2 || __edi > 36) {
         *__ebx = 0;
        return _a8;
    } else {
        if(__esi < 0 && _a16 != 0) {
             *__ebx = 45;
            __ebx =  &((__ebx)[0]);
            __esi =  ~__esi;
        }
        __ecx =  &_v40;
        while(1) {
L6:
             *__ecx = __esi % __edi & 4294967295;
            __ecx =  &((__ecx)[0]);
            _t30 = __esi / __edi;
            __esi = _t30;
            if(_t30 == 0) {
                break;
            }
        }
        while(__ecx !=  &_v40) {
            __ecx = __ecx - 1;
            if((_t30 & 4294967295) >= 10) {
                 *__ebx = _t30 & 4294967295;
                __ebx =  &((__ebx)[0]);
            } else {
                _t30 = _t30 + 48;
                 *__ebx = _t30 & 4294967295;
                __ebx =  &((__ebx)[0]);
            }
        }
    }
}

L004052D0(signed int _a4, signed int* _a8)
{
    _unknown_ __ebp;
    _unknown_ _t4;

    L0040525C(_a4, _a8, 10, 0, 97);
    return;
}

L00405348(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebp;

     *4241624 = _a4;
     *4241628 = _a8;
    return;
}

L00405360(_unknown_ __eflags, signed int* _a4)
{
    signed int* __esi;
    _unknown_ __ebp;
    signed int _t11;
    signed int _t12;
    _unknown_ _t16;
    _unknown_ _t18;

    __eflags = __eflags;
    __esi = _a4;
    __ecx = 10;
    _t11 = (__esi)[1];
    if(__eflags != 0) {
        (__esi)[1] = _t11 / __ecx;
    }
    _t12 =  *__esi;
     *__esi = _t12 / __ecx;
    return _t12 % __ecx;
}

L00405388(signed int* _a4, intOrPtr _a8)
{
    signed int* __esi;
    _unknown_ __ebp;
    signed int _t13;
    signed int _t16;

    __esi = _a4;
    __ecx = 10;
    _t13 =  *__esi;
    asm("adc edx, 0x0");
     *__esi = _t13 * __ecx + _a8;
    _t16 = (__esi)[1];
    asm("adc edx, 0x0");
    (__esi)[1] = _t16 * __ecx + (_t13 * __ecx >> 32);
    return _t16 * __ecx >> 32;
}

L004053B8(_unknown_ __eax, signed int __edx, signed int _a4, intOrPtr _a8, intOrPtr _a12)
{
    signed int __ebx;
    intOrPtr __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t11;

    __edx = __edx;
    __edi = _a12;
    __esi = _a8;
    __ebx = _a4;
    L00404434(14);
    if((__ebx & 4294967295) == 71 || (__ebx & 4294967295) == 103) {
        while( *((char*)(__edi - 1)) == 48) {
        }
    }
    if((__edx & 4294967295) !=  *((intOrPtr*)(__edi - 1))) {
        return __edi;
    }
    __edi = __edi - 1;
    return __edi;
}

L004056B4(_unknown_ __eax, signed int __edx, signed int _a4, intOrPtr _a8, intOrPtr _a12)
{
    intOrPtr __ebx;
    signed int __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t11;

    __edx = __edx;
    __ebx = _a12;
    __esi = _a8;
    __edi = _a4;
    L00404434(14);
    if((__edi & 4294967295) == 71 || (__edi & 4294967295) == 103) {
        while( *((short*)(__ebx - 2)) == 48) {
        }
    }
    if((__edx & 4294967295) !=  *((intOrPtr*)(__ebx - 2))) {
        return __ebx;
    }
    __ebx = __ebx - 2;
    return __ebx;
}

L004063AC(_unknown_ __eflags, intOrPtr* _a4, signed int _a8, signed int* _a12, signed int _a16, _unknown_ _a20)
{
    short _v6;
    signed int _v8;
    signed int _v12;
    char _v16;
    signed char* _v20;
    signed int _v24;
    signed int* _v40;
    short _v44;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t94;
    signed int _t95;
    signed int _t98;
    signed int _t103;
    _unknown_ _t104;
    _unknown_ _t105;
    _unknown_ _t107;
    _unknown_ _t108;
    signed int _t111;
    _unknown_ _t115;
    _unknown_ _t118;
    _unknown_ _t119;
    _unknown_ _t120;
    _unknown_ _t121;
    _unknown_ _t122;
    intOrPtr* _t123;
    signed int _t124;
    signed int _t125;
    char* _t127;
    signed int* _t128;
    signed int _t129;
    signed int _t130;
    signed int _t132;
    _unknown_ _t135;
    _unknown_ _t142;
    _unknown_ _t143;
    signed int _t145;
    _unknown_ _t147;
    signed int _t149;
    char* _t157;
    signed int _t165;
    signed int _t166;
    signed int _t169;
    signed int _t170;
    _unknown_ _t173;

    _t173 = __eflags;
    _v6 = 10;
    if(_t173 == 0) {
        asm("fld dword [edx]");
        asm("fstp tword [ebp-0xc]");
        asm("wait ");
    } else {
        if(_t173 == 0) {
            asm("fld qword [ecx]");
            asm("fstp tword [ebp-0xc]");
            asm("wait ");
        } else {
            if(_t173 == 0) {
                _t123 = _a4;
                _v16 =  *_t123;
                _t165 =  *(_t123 + 4);
                _v12 = _t165;
                _v8 = _t165 & 4294967295;
            }
        }
    }
    _t95 =  &_v16;
    _v20 =  &_v16;
    _t145 = _t124;
     *(_t95 + 8) = _t145 & 4294967295;
     *_a12 = _t95 & 1;
    _push( &_v16);
    _t98 = L0040507C(__esp);
    _pop(__ecx);
    if((_t98 & 4294967295) != 16384) {
        __eflags = (_t98 & 4294967295) - 1280;
        if((_t98 & 4294967295) == 1280) {
            return 32767;
        }
        __eflags = (_t98 & 4294967295) - 256;
        if((_t98 & 4294967295) == 256) {
            return 32766;
        }
        _t149 = 0;
        _t103 = _t145 * ((_t124 & 4294967295 &  & 32767) + -16383) + (_t149 + (_t149 + (_t136 + _t149 * 8) * 2) * 4 & 4294967295 & 65535);
        __eflags = _t103 & 65535;
        _v24 = _t103 >> 16;
        if((_t103 & 65535) != 0) {
            _v24 = _v24 + 1;
        }
        _t166 = _a8;
        __eflags = _t166;
        if(_t166 > 0) {
L21:
            __eflags = _t166 - 19;
            if(_t166 > 19) {
                _t166 = 19;
            }
            _t169 = _t166 - _v24;
            __eflags = _t169;
            if(_t169 == 0) {
L32:
                L00404DFC(_t166);
                asm("fstp tword [ebp-0x20]");
                asm("wait ");
                asm("fld tword [ebp-0xc]");
                asm("fld tword [ebp-0x20]");
                asm("fcompp ");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags >= 0) {
                    L00404DFC(_t166 - 1);
                    asm("fstp tword [ebp-0x20]");
                    asm("wait ");
                    asm("fld tword [ebp-0xc]");
                    asm("fld tword [ebp-0x20]");
                    asm("fcompp ");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags > 0) {
                        _v24 = _v24 - 1;
                        _t166 = _t166 - 1;
                        __eflags = _a8;
                        if(_a8 > 0) {
                            _v44 = _v6;
                            asm("fild dword [ebp-0x28]");
                            asm("fld tword [ebp-0xc]");
                            asm("fmulp st1, st0");
                            asm("fstp tword [ebp-0xc]");
                            asm("wait ");
                            _t166 = _t166 + 1;
                        }
                    }
                } else {
                    _v24 = _v24 + 1;
                    _t166 = _t166 + 1;
                    __eflags = _t166 - 19;
                    if(_t166 <= 19) {
                        __eflags = _a8;
                        if(_a8 > 0) {
                            _v44 = _v6;
                            asm("fild dword [ebp-0x28]");
                            asm("fld tword [ebp-0xc]");
                            asm("fdivrp st1, st0");
                            asm("fstp tword [ebp-0xc]");
                            asm("wait ");
                            _t166 = _t166 - 1;
                        }
                    }
                }
                __eflags = _t166;
                if(_t166 < 0) {
                    goto L8;
                } else {
                    _push( &_v16);
                    _push( &_v16);
                    L00405058(__esp);
                    __esp = __esp + 8;
                    _t157 = _a16 + _t166;
                    _t170 = 0;
                    _t127 = _t157;
                    _v40 = _t157;
                     *_t127 = 0;
                    _t128 = _t127 - 1;
                    __eflags = _t166;
                    if(__eflags != 0) {
                        while(1) {
L43:
                            _t111 = L00405360(__eflags,  &_v16);
                            _t170 = _t170 | _t111 & 4294967295;
                             *_t128 = _t111 + 48 & 4294967295;
                            _t128 = _t128 - 1;
                            _t166 = _t166 - 1;
                            if(__eflags == 0) {
                                break;
                            }
                            goto L44;
                        }
                        goto L45;
                    }
                    _t170 =  *_v20 & 255 & 255 ^ 1;
                    __eflags = _t170;
                    if(_t170 != 0) {
                        goto L8;
                    }
L45:
                    __eflags = _t170;
                    if(_t170 == 0) {
                        _v24 = _v24 + 1;
                        __eflags = _a8;
                        if(_a8 <= 0) {
                             *_v40 = 48;
                        }
                        _v40 = _v40 + 1;
                        _t128[0] = 49;
                    }
                    _t129 = _a8;
                    __eflags = _t129;
                    if(_t129 <= 0) {
                        _t129 = _v24 - _a8;
                    }
                    __eflags = _t129 - 40;
                    if(_t129 > 40) {
                        _t129 = 40;
                    }
                    _t113 = _v40;
                     *_v40 = 0;
                    _t130 = _t129 - _v40 - _a16;
                    __eflags = _t130;
                    if(_t130 <= 0) {
                        return _v24;
                    }
                    L004021AC(_t113, _v40, 48, _t130);
                     *((char*)(_v40 + _t130)) = 0;
                    return _v24;
L44:
                    goto L43;
                }
            } else {
                while(1) {
L24:
                    _t132 = _t169;
                    __eflags = _t169;
                    if(_t169 < 0) {
                        _t132 =  ~_t169;
                    }
                    __eflags = _t132 - 4932;
                    if(_t132 > 4932) {
                        _t132 = 4932;
                    }
                    L00404DFC(_t132);
                    asm("fstp tword [ebp-0x20]");
                    asm("wait ");
                    __eflags = _t169;
                    if(_t169 >= 0) {
                        asm("fld tword [ebp-0x20]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                        _t169 = _t169 - _t132;
                    } else {
                        asm("fld tword [ebp-0x20]");
                        asm("fld tword [ebp-0xc]");
                        asm("fdivrp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                        _t169 = _t169 + _t132;
                    }
                    __eflags = _t169;
                    if(_t169 == 0) {
                        break;
                    }
                }
                goto L32;
            }
        }
        _t166 = _v24 - _a8;
        __eflags = _t166;
        if(_t166 < 0) {
            goto L8;
        }
        goto L21;
    }
L8:
    _t125 = _a8;
    if(_t125 <= 0) {
        _t125 =  ~_t125 + 1;
    }
    if(_t125 > 40) {
        _t125 = 40;
    }
    L004021AC(_a16, _a16, 48, _t125);
     *((char*)(_a16 + _t125)) = 0;
    return 1;
}

L00406680(intOrPtr* _a4, signed int _a8, signed int* _a12, intOrPtr _a16, _unknown_ _a20)
{
    short _v6;
    signed int _v8;
    signed int _v12;
    char _v16;
    signed char* _v20;
    signed int _v24;
    short* _v40;
    short _v44;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t99;
    signed int _t100;
    signed int _t103;
    signed int _t108;
    _unknown_ _t109;
    _unknown_ _t110;
    _unknown_ _t112;
    _unknown_ _t113;
    signed int _t116;
    _unknown_ _t119;
    _unknown_ _t123;
    _unknown_ _t124;
    _unknown_ _t125;
    _unknown_ _t126;
    _unknown_ _t127;
    intOrPtr* _t128;
    signed int _t129;
    signed int _t130;
    short* _t132;
    signed int* _t133;
    signed int _t134;
    signed int _t135;
    signed int _t137;
    _unknown_ _t140;
    _unknown_ _t147;
    _unknown_ _t148;
    signed int _t150;
    _unknown_ _t152;
    signed int _t154;
    short* _t163;
    signed int _t167;
    signed int _t171;
    signed int _t172;
    signed int _t175;
    signed int _t176;
    _unknown_ _t179;

    _v6 = 10;
    if(_t179 == 0) {
        asm("fld dword [edx]");
        asm("fstp tword [ebp-0xc]");
        asm("wait ");
    } else {
        if(_t179 == 0) {
            asm("fld qword [ecx]");
            asm("fstp tword [ebp-0xc]");
            asm("wait ");
        } else {
            if(_t179 == 0) {
                _t128 = _a4;
                _v16 =  *_t128;
                _t171 =  *(_t128 + 4);
                _v12 = _t171;
                _v8 = _t171 & 4294967295;
            }
        }
    }
    _t100 =  &_v16;
    _v20 =  &_v16;
    _t150 = _t129;
     *(_t100 + 8) = _t150 & 4294967295;
     *_a12 = _t100 & 1;
    _push( &_v16);
    _t103 = L0040507C(__esp);
    _pop(__ecx);
    if((_t103 & 4294967295) != 16384) {
        __eflags = (_t103 & 4294967295) - 1280;
        if((_t103 & 4294967295) == 1280) {
            return 32767;
        }
        __eflags = (_t103 & 4294967295) - 256;
        if((_t103 & 4294967295) == 256) {
            return 32766;
        }
        _t154 = 0;
        _t108 = _t150 * ((_t129 & 4294967295 &  & 32767) + -16383) + (_t154 + (_t154 + (_t154 + _t154 * 8) * 2) * 4 & 4294967295 & 65535);
        __eflags = _t108 & 65535;
        _v24 = _t108 >> 16;
        if((_t108 & 65535) != 0) {
            _v24 = _v24 + 1;
        }
        _t172 = _a8;
        __eflags = _t172;
        if(_t172 > 0) {
L21:
            __eflags = _t172 - 19;
            if(_t172 > 19) {
                _t172 = 19;
            }
            _t175 = _t172 - _v24;
            __eflags = _t175;
            if(_t175 == 0) {
L32:
                L00404DFC(_t172);
                asm("fstp tword [ebp-0x20]");
                asm("wait ");
                asm("fld tword [ebp-0xc]");
                asm("fld tword [ebp-0x20]");
                asm("fcompp ");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags >= 0) {
                    L00404DFC(_t172 - 1);
                    asm("fstp tword [ebp-0x20]");
                    asm("wait ");
                    asm("fld tword [ebp-0xc]");
                    asm("fld tword [ebp-0x20]");
                    asm("fcompp ");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags > 0) {
                        _v24 = _v24 - 1;
                        _t172 = _t172 - 1;
                        __eflags = _a8;
                        if(_a8 > 0) {
                            _v44 = _v6;
                            asm("fild dword [ebp-0x28]");
                            asm("fld tword [ebp-0xc]");
                            asm("fmulp st1, st0");
                            asm("fstp tword [ebp-0xc]");
                            asm("wait ");
                            _t172 = _t172 + 1;
                        }
                    }
                } else {
                    _v24 = _v24 + 1;
                    _t172 = _t172 + 1;
                    __eflags = _t172 - 19;
                    if(_t172 <= 19) {
                        __eflags = _a8;
                        if(_a8 > 0) {
                            _v44 = _v6;
                            asm("fild dword [ebp-0x28]");
                            asm("fld tword [ebp-0xc]");
                            asm("fdivrp st1, st0");
                            asm("fstp tword [ebp-0xc]");
                            asm("wait ");
                            _t172 = _t172 - 1;
                        }
                    }
                }
                __eflags = _t172;
                if(_t172 < 0) {
                    goto L8;
                } else {
                    _push( &_v16);
                    _push( &_v16);
                    L00405058(__esp);
                    __esp = __esp + 8;
                    _t176 = 0;
                    _t163 = _t172 + _t172 + _a16;
                    _t132 = _t163;
                    _v40 = _t163;
                     *_t132 = 0;
                    _t133 = _t132 - 2;
                    __eflags = _t172;
                    if(__eflags != 0) {
                        while(1) {
L43:
                            _t116 = L00405360(__eflags,  &_v16);
                            _t176 = _t176 | _t116 & 4294967295;
                             *_t133 = _t116 & 4294967295 & 4294967295;
                            _t133 = _t133 - 2;
                            _t172 = _t172 - 1;
                            if(__eflags == 0) {
                                break;
                            }
                            goto L44;
                        }
                        goto L45;
                    }
                    _t176 =  *_v20 & 255 & 255 ^ 1;
                    __eflags = _t176;
                    if(_t176 != 0) {
                        goto L8;
                    }
L45:
                    __eflags = _t176;
                    if(_t176 == 0) {
                        _v24 = _v24 + 1;
                        __eflags = _a8;
                        if(_a8 <= 0) {
                             *_v40 = 48;
                        }
                        _v40 = _v40 + 2;
                        _t133[0] = 49;
                    }
                    _t134 = _a8;
                    __eflags = _t134;
                    if(_t134 <= 0) {
                        _t134 = _v24 - _a8;
                    }
                    __eflags = _t134 - 40;
                    if(__eflags > 0) {
                        _t134 = 40;
                    }
                    _t117 = _v40;
                     *_v40 = 0;
                    _t167 = _v40 - _a16 >> 1;
                    if(__eflags < 0) {
                        asm("adc edx, 0x0");
                    }
                    _t135 = _t134 - _t167;
                    __eflags = _t135;
                    if(_t135 <= 0) {
                        return _v24;
                    }
                    L00402238(_t117, _v40, 48, _t135);
                     *((short*)(_v40 + _t135 * 2)) = 0;
                    return _v24;
L44:
                    goto L43;
                }
            } else {
                while(1) {
L24:
                    _t137 = _t175;
                    __eflags = _t175;
                    if(_t175 < 0) {
                        _t137 =  ~_t175;
                    }
                    __eflags = _t137 - 4932;
                    if(_t137 > 4932) {
                        _t137 = 4932;
                    }
                    L00404DFC(_t137);
                    asm("fstp tword [ebp-0x20]");
                    asm("wait ");
                    __eflags = _t175;
                    if(_t175 >= 0) {
                        asm("fld tword [ebp-0x20]");
                        asm("fld tword [ebp-0xc]");
                        asm("fmulp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                        _t175 = _t175 - _t137;
                    } else {
                        asm("fld tword [ebp-0x20]");
                        asm("fld tword [ebp-0xc]");
                        asm("fdivrp st1, st0");
                        asm("fstp tword [ebp-0xc]");
                        asm("wait ");
                        _t175 = _t175 + _t137;
                    }
                    __eflags = _t175;
                    if(_t175 == 0) {
                        break;
                    }
                }
                goto L32;
            }
        }
        _t172 = _v24 - _a8;
        __eflags = _t172;
        if(_t172 < 0) {
            goto L8;
        }
        goto L21;
    }
L8:
    _t130 = _a8;
    if(_t130 <= 0) {
        _t130 =  ~_t130 + 1;
    }
    if(_t130 > 40) {
        _t130 = 40;
    }
    _push(_t130);
    _push(48);
    _push(_a16);
    L00402238(_a16);
    __esp = __esp + 12;
     *((short*)(_a16 + _t130 * 2)) = 0;
    return 1;
}

L00406AB0(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;

    _t2 = _a4;
    if(_a4 > 255) {
        return ;
    }
    L0040454C(_t2);
    return;
}

L00406ACC(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    intOrPtr _t13;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;

    __ecx = _a8;
    _t13 = _a4;
    __edx = 0;
    while(1) {
    }
}

L00406B24(char* _a4, intOrPtr _a8, char _a12)
{
    signed int _v8;
    char* __ebx;
    _unknown_ __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t11;

    __ebx = _a4;
     *__ebx = 0;
    _v8 =  &_a12;
    while(1) {
        _v8 = _v8 + 4;
        _t10 = _v8;
        __esi =  *((intOrPtr*)(_v8 - 4));
        if( *((intOrPtr*)(_v8 - 4)) == 0) {
            break;
        }
        _push(__ebx);
        _t10 = L00402250(__esp);
        _pop(__ecx);
        _t14 = _a8 - _t10 - 1;
        if(_a8 - _t10 - 1 <= 0) {
            return ;
        }
        L004022AC(_t10, __ebx, __esi, _t14);
    }
    return;
}

L00406B6C(char* _a4, char _a8, signed int _a12)
{
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t7;

    _push(0);
    _push(", line ");
    L00406B24(_a4, ", file ", _a8);
    __esp = __esp + 8;
    _push(4246364);
    _t5 = L00402250(__esp);
    _pop(__ecx);
    L004052D0(_a12, _t5 + 4246364);
    L00406CDC(4246364);
    L00406EC0();
    return;
}

L00406BCC(struct _SYSTEMTIME* __esp)
{
    signed short _v2;
    signed short _v4;
    signed short _v6;
    signed short _v8;
    signed short _v10;
    signed short _v14;
    signed short _v16;
    _unknown_ _t8;
    _unknown_ _t12;
    _unknown_ _t13;

    __esp = __esp;
    GetLocalTime(__esp);
    _push(_v2 & 65535);
    _push(_v4 & 65535);
    _push(_v6 & 65535);
    _push(_v8 & 65535);
    _push(_v16 & 65535);
    _push(_v10 & 65535);
    _push(_v14 & 65535);
    _push("%02d/%02d/%04d %02d:%02d:%02d.%03d ");
    _push(4246620);
    wsprintfA();
    __esp = __esp + 36;
    return 4246620;
}

L00406C1C(_unknown_ __eax, CHAR* _a4, intOrPtr _a8)
{
    char _v8;
    void* __ebx;
    _unknown_ __ecx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t5;
    void* _t7;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    __edi = _a8;
    _t7 = CreateFileA(_a4, -1073741824, 0, 0, 2, 128, 0);
    __ebx = _t7;
    if(_t7 == 0) {
        return ;
    }
    __esi = L00406BCC(__esp);
    _push(0);
    _push( &_v8);
    _push(__esi);
    _t10 = L00402250(__esp);
    _pop(__ecx);
    _push(_t10);
    _push(__esi);
    _push(__ebx);
    WriteFile();
    _push(0);
    _push( &_v8);
    _push(__edi);
    _t12 = L00402250(__esp);
    _pop(__ecx);
    _push(_t12);
    _push(__edi);
    _push(__ebx);
    WriteFile();
    CloseHandle(__ebx);
    return;
}

L00406C98(_unknown_ __ecx)
{
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;

    __ecx = __ecx;
    _push(__ecx);
     *__esp = 0;
    GetVersion();
    if((0 >> 16 & 4294967295 &  & 4294967295 & 128) != 0) {
        _push(__esp);
        _push(4222084);
        _push(GetCurrentThreadId());
        EnumThreadWindows();
        if( *__esp == 0) {
            _t9 = 4096;
        } else {
            _t9 = 8192;
        }
        _pop(__edx);
        return _t9;
    } else {
        _pop(__edx);
        return 8192;
    }
}

L00406CDC(CHAR* _a4)
{
    long _v8;
    char _v136;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t9;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t20;
    CHAR* _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t28;
    CHAR* _t29;

    _push(_t21);
    _push(_t28);
    _t29 = _a4;
    if( *4241924 != 0 ||  *4241920 != 0) {
        if( *4241920 == 0) {
L12:
            _t9 =  *4241924;
            if(_t9 != 0 &&  *4241924 != 255 &&  *_t9 != 0) {
                L00406C1C(_t9, _t9, _t29);
            }
            goto L16;
        }
    } else {
        if( *4242420 == 0) {
            _t21 = GetStdHandle(244);
            WriteFile(_t21, "
            _push(0);
            _push( &_v8);
            _push(_t29);
            _t13 = L00402250(__esp);
            _pop(__ecx);
            _push(_t13);
            _push(_t29);
            _push(_t21);
            WriteFile();
            _t9 = WriteFile(_t21, "
L16:
            _pop(__esi);
            _pop(__ebx);
            return;
L17:
        }
        GetModuleFileNameA(0,  &_v136, 128);
        _t17 = L00406ACC( &_v136, 92);
        _t22 = _t17;
        if(_t17 != 0) {
L6:
            _t21 = _t22 + 1;
            goto L7;
        }
        _t20 = L00406ACC( &_v136, 58);
        _t22 = _t20;
        if(_t20 != 0) {
            goto L6;
        } else {
            _t21 =  &_v136;
        }
L7:
        _t9 = MessageBoxA(0, _t29, _t21, L00406C98(_t23) | 65552);
        goto L16;
    }
L10:
    if( *4241920 == 255) {
        goto L16;
    } else {
        _push(_t29);
         *4241920();
        _pop(__ecx);
        goto L12;
    }
    goto L17;
}

L00406E08(CHAR* _a4)
{
    _unknown_ __ebp;

    L00406CDC(_a4);
    L00406F40(1);
    return;
}

L00406EAC()
{
    L00406CDC("Abnormal program termination");
    L00406F40(3);
    return;
}

L00406EC0()
{
    _unknown_ _t1;
    _unknown_ _t2;

    L004079D0(_t1, __eflags, 22);
    L00406EAC();
    return;
}

L00406ED4(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    intOrPtr __ebx;
    _unknown_ __ebp;

    __ebx = _a4;
    if(__ebx != 0) {
        __eax = 0;
         *4242008 = 0;
    } else {
        if( *4242008 != 0) {
             *4242008();
        }
        L00407B2C(__eax);
         *4242012();
    }
    if(_a8 != 0) {
        return ;
    }
    if(__ebx == 0) {
         *4242016();
         *4242020();
    }
    L00407A40(_a12);
    return;
}

L00406F28(intOrPtr _a4)
{
    _unknown_ __ebp;

    L00406ED4(0, 0, _a4);
    return;
}

L00406F40(intOrPtr _a4)
{
    _unknown_ __ebp;

    L00406ED4(1, 0, _a4);
    return;
}

L00406F78(intOrPtr* _a4, intOrPtr* _a8)
{
    _unknown_ __ebp;

     *4242200 =  *_a4;
     *4242204 =  *_a8;
    return;
}

L00406FBC(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    _unknown_ __ebp;

     *4242024 = _a4;
     *4242028 = _a8;
     *4242032 = _a12;
     *4242036 = _a16;
    return;
}

L004072C4(signed int** _a4, signed int* _a8)
{
    _unknown_ __ebx;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t15;
    signed int _t18;

    __eax = _a8;
    __edx = _a4;
    _t18 =  *__eax;
    if( *_t18 != 92) {
L3:
        if( *4242124 == 0) {
L7:
            __esi =  *__eax;
            if(( *0x0040CA55 & 4) != 0 &&  *((char*)(__esi + 1)) != 0) {
                 *( *__edx) = _t18 & 4294967295;
                 *__eax =  *__eax + 1;
                 *__edx =  &(( *__edx)[0]);
            }
             *( *__edx) =  *__eax & 4294967295;
             *__eax =  *__eax + 1;
            goto L11;
        }
        goto L4;
    }
    if( *((char*)(_t18 + 1)) != 34) {
        goto L3;
    } else {
         *( *__edx) = 34;
         *__eax =  *__eax + 2;
    }
L11:
     *__edx =  &(( *__edx)[0]);
    return;
L4:
    _t18 =  *__eax;
    if( *_t18 != 92 ||  *((char*)(_t18 + 1)) != 92) {
        goto L7;
    }
     *( *__edx) = 92;
     *__eax =  *__eax + 2;
    goto L11;
}

L004074E8(signed int** _a4, signed int* _a8)
{
    _unknown_ __ebp;
    signed int _t7;
    signed int _t9;

    __eax = _a8;
    __edx = _a4;
    _t7 =  *__eax;
    if( *_t7 != 92 ||  *((short*)(_t7 + 2)) != 34) {
        if( *4242124 == 0) {
L7:
             *( *__edx) =  *__eax & 4294967295;
             *__eax =  *__eax + 2;
            goto L8;
        }
        _t9 =  *__eax;
        if( *_t9 != 92 ||  *((short*)(_t9 + 2)) != 92) {
            goto L7;
        } else {
             *( *__edx) = 92;
             *__eax =  *__eax + 4;
        }
    } else {
         *( *__edx) = 34;
         *__eax =  *__eax + 4;
    }
L8:
     *__edx =  &(( *__edx)[0]);
    return;
}

L00407748(intOrPtr _a4)
{
    _unknown_ __ebp;
    signed int _t2;

    _t2 = 0;
    __edx = 4242368;
    __ecx = _a4;
    while(__ecx !=  *__edx) {
        _t2 = _t2 + 1;
        __edx = __edx + 4;
        if(_t2 >= 10) {
            return _t2 | 255;
        }
    }
}

L004079D0(_unknown_ __eax, intOrPtr* __eflags, intOrPtr _a4)
{
    signed int __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t10;
    intOrPtr* _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    intOrPtr _t16;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;

    __eflags = __eflags;
    _t16 = _a4;
    __ebx = L00407748(_t16);
    if(__eflags == 0) {
        return;
    }
    _t11 =  *((intOrPtr*)(4242328 + __ebx * 4));
    __eflags = _t11 - 1;
    if(_t11 == 1) {
        return ;
    }
    __eflags = _t11;
    if(__eflags != 0) {
         *((intOrPtr*)(4242328 + __ebx * 4)) = 0;
        _push(0);
        _push(0);
        _push(_t16);
         *_t11();
        __esp = __esp + 12;
        return ;
    } else {
        if(__eflags < 0) {
            return ;
        }
        if(__eflags == 0) {
            return ;
        }
        if(__eflags == 0) {
            L00406EAC();
            return ;
        }
        L00406F40(3);
        return ;
    }
    return;
}

L00407A40(int _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;

    ExitProcess(_a4);
    return;
}

L00407A50()
{
    return 0;
}

L00407A54()
{
    return 0;
}

L00407A58(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    intOrPtr _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t45;

    if(_a8 == 0) {
        _v16 = 256;
        _v20 = 1;
        _t36 = 0;
    } else {
        _v16 = -1;
        _v20 = -1;
        _t36 = 255;
    }
    __esi = _t36;
    if(__esi == _v16) {
        return ;
    }
    while(1) {
        _t36 = 0;
        _v12 = 0;
        _v24 = _a4 + 4;
        goto L22;
    }
}

L00407B2C(intOrPtr* __eax)
{
    intOrPtr* __ebx;
    intOrPtr* __edi;
    _unknown_ __esi;

    __eax = __eax;
    if( *4242424 != 0) {
        return ;
    }
     *4242424 = 1;
    L00407A58(4246740, 1);
    L00407A58(4246712, 1);
    __eax = L00407A54();
    __edi = __eax;
    if(__eax == 0) {
        return ;
    }
    L00407A58(__edi, 1);
    __esi = 0;
    __ebx = __edi + 4;
    while(__esi <  *__edi) {
        __eax =  *__ebx;
        _push( *((intOrPtr*)(__eax + 20)));
        _push(1);
         *((intOrPtr*)(__eax + 24))();
        __esp = __esp + 8;
        __esi = __esi + 1;
        __ebx = __ebx + 4;
    }
}

L00407D1C(struct _STARTUPINFOA* __esp)
{
    signed short _v20;
    signed char _v24;
    _unknown_ _t5;
    _unknown_ _t6;

    __esp = __esp;
    GetStartupInfoA(__esp);
    if((_v24 & 1) == 0) {
        return 10;
    }
    return _v20 & 65535;
}

L00407DB7()
{
    goto __eax;
}

L00407DBE(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr __ebx;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t11;

    _t8 = __eax;
    __ebx = _a4;
    L004013E0(__ebx);
    if(_t8 != 0) {
        return ;
    }
    if(__ebx > 128 || ( *(L00401140() + 4) & 1) != 0) {
        L00406EC0();
    }
     *(L00401140() + 4) =  *(_t9 + 4) | 1;
    L00401140();
    return;
}

L00407E35(_unknown_ __eax, intOrPtr* _a4, intOrPtr _a8, intOrPtr* _a12, signed char _a16)
{
    signed int _v7;
    signed char _v8;
    signed int __ebx;
    _unknown_ __ecx;
    intOrPtr* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t41;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;
    intOrPtr* _t53;

    _t53 = _a12;
    __edi = _a4;
    if(L00402A4C(__edi, _t53, 0, _a8) != 0) {
        return 1;
    }
    _v8 =  *(__edi + 4) & 65535;
    __ebx =  *(_t53 + 4) & 65535;
    if((__ebx & 4294967295 & 32) != 0) {
        if(L00402A4C(__edi,  *((intOrPtr*)(_t53 + 8)), 1, _a8) != 0) {
            return 1;
        }
        _t54 =  *((intOrPtr*)(_t53 + 8));
        __ebx =  *( *((intOrPtr*)(_t53 + 8)) + 4) & 65535;
        if((__ebx & 4294967295 & 16) == 0) {
            return 0;
        }
        if(L00402A4C(__edi, _t54, 0, _a8) != 0) {
            return 1;
        }
    }
    if((__ebx & 4294967295 & 16) == 0) {
        return 0;
    }
    if((_a16 & 1) != 0) {
        return 1;
    }
    if((_v8 & 16) == 0) {
        return 0;
    }
    if((__ebx & 4294967295 & 64) == 0) {
        return 0;
    }
    if((__ebx & 4294967295 & 1) == 0) {
        if((_v7 & 1) != 0) {
            return 0;
        }
    }
    if((__ebx & 4294967295 & 2) != 0) {
        return 1;
    }
    if((_v7 & 2) != 0) {
        return 0;
    }
    return 1;
}

L00407EFB(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, signed int _a16)
{
    _unknown_ __ebx;
    intOrPtr __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t26;
    signed int _t27;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t40;
    signed int _t44;

    _t27 = _a16;
    __edi = _a8;
    __esi = _a4;
    if((_t27 & 4294967295 & 1) == 0 && (_t27 & 4294967295 & 32) != 0) {
        L00406B6C("(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0", "xx.cpp", 517);
    }
    if((_t27 & 4294967295 & 128) != 0) {
        L00406B6C("(ctorMask & 0x0080) == 0", "xx.cpp", 519);
    }
    _t44 = _t27 & 4294967295 & 16;
    if(_t44 == 0) {
        if(__eflags == 0) {
            _push(__edi);
            _push(__esi);
            _a12();
            __esp = __esp + 8;
            return;
        }
        goto L18;
L23:
        _push(__esi);
        _push(__edi);
        _a12();
        return;
    } else {
        if(_t44 == 0) {
            _push(__edi);
            _push(0);
            _push(__esi);
            _a12();
            __esp = __esp + 12;
            return;
        }
        if(_t44 == 0) {
            goto L12;
        }
        if(_t44 == 0) {
            goto L13;
        }
        if(_t44 == 0) {
            goto L14;
        }
        if("what?" == 0) {
            return ;
        }
        L00406B6C("!"what?"", "xx.cpp", 562);
        return;
L14:
        _push(__edi);
        _push(0);
        _push(__esi);
        _a12();
        return;
L13:
        _a12();
        return;
L12:
        _push(0);
        _push(__edi);
        _push(__esi);
        _a12();
        return;
    }
L18:
    if(__eflags == 0) {
        goto L23;
    }
    if(__eflags == 0) {
        goto L24;
    }
    if(__eflags == 0) {
        goto L25;
    }
    __eflags =  ?_? ("what?");
    if("what?" == 0) {
        return ;
    }
    L00406B6C("!"what?"", "xx.cpp", 606);
    return;
L25:
    _push(__edi);
    _push(__esi);
    _a12();
    return;
L24:
    _a12();
    return;
}

L00408009(signed int __ecx, intOrPtr _a4)
{
    _unknown_ __ebp;

    __ecx = __ecx;
    __edx = _a4;
    __eax = 0;
    if(__edx == 0) {
        return __eax;
    }
    while(1) {
        __edx = __edx + 1;
        if((__ecx & 4294967295) == 0) {
            break;
        }
        __eax = __eax + 1;
    }
    return __eax;
}

L00408021(long _a4, intOrPtr _a8)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t7;

    RaiseException(250477286, 0, _a8 + 1 + 1,  &_a4);
    return;
}

L0040803E(intOrPtr _a4, intOrPtr _a8, signed char _a12, long _a16, signed int _a20, intOrPtr _a24)
{
    signed int __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t19;
    signed int _t21;
    signed int _t23;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    signed int _t32;

    _t23 = _a20;
    if(_a24 == 0) {
        __ebx = 0;
    } else {
        __ebx = 2;
    }
    if((_a12 & 2) != 0) {
        __ebx = __ebx | 128;
    }
    _t18 =  *4246756;
    if( *((intOrPtr*)( *4246756)) == 2) {
        __edi = L00402938(_a8);
        _push(L00408009(_t21, __edi));
        L00408021(_a16, __edi);
        __esp = __esp + 4;
    }
    _t32 = _t23 & 128;
    if(_t32 != 0) {
        L00406B6C("(dtorMask & 0x0080) == 0", "xx.cpp", 717);
    }
    if(_t32 == 0) {
        _push(__ebx);
        _push(_a4);
        _a16();
        __esp = __esp + 8;
        return;
    } else {
        if(_t32 == 0) {
            goto L15;
        }
        if(_t32 == 0) {
            goto L16;
        }
        if(_t32 == 0) {
            goto L17;
        }
        if("what?" == 0) {
            return ;
        }
        L00406B6C("!"what?"", "xx.cpp", 756);
        return;
L17:
        _push(__ebx);
        _push(_a4);
        _a16();
        return;
L16:
        _a16();
        return;
    }
L15:
    _push(__ebx);
    _push(_a4);
    _a16();
    return;
}

L0040810E(intOrPtr _a4, intOrPtr _a8, signed int _a12)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    signed int _t21;

    _t21 = _a12 & 4294967295 & 128;
    if(_t21 != 0) {
        L00406B6C("(mfnMask & 0x0080) == 0", "xx.cpp", 764);
    }
    if(_t21 == 0) {
        _push(_a4);
        _a8();
        _pop(__ecx);
        return;
    } else {
        if(_t21 == 0) {
            _push(_a4);
            _a8();
            return;
        } else {
            if(_t21 == 0) {
                _a8();
                return;
            } else {
                if(_t21 != 0) {
                    if("what?" == 0) {
                        return ;
                    }
                    L00406B6C("!"what?"", "xx.cpp", 803);
                    return;
                }
                _push(_a4);
                _a8();
                return;
            }
        }
    }
    goto L14;
}

L0040847C(intOrPtr _a4, char* _a8)
{
    intOrPtr _v68;
    intOrPtr _v80;
    char _v84;
    _unknown_ __ebp;
    _unknown_ _t9;
    _unknown_ _t11;
    _unknown_ _t12;

    __ecx = _a8;
    if(__ecx == 0) {
        _v84 = 38;
        _v80 = 2;
        __ecx =  &_v84;
        _v68 = 0;
    }
     *(__ecx + 4) =  *(__ecx + 4) | 2;
    L00402F9A(_a4, __ecx);
    return;
}

L004084BB(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    short _v24;
    intOrPtr _v40;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t8;
    intOrPtr _t9;

    __eax = 4242516;
    _push(_t8);
    _push(__esi);
    _push(__edi);
    _t9 = _a12;
    L00402414(4242516, __esp);
    if(_t9 == 0) {
        L00406B6C("dtorAddr", "xx.cpp", 1465);
    }
    _v24 = 8;
    _push(1);
    _push(_a16);
    _push(_t9);
    _push(0);
    _push(_a8);
    _push(_a4);
    L0040803E();
    _v24 = 0;
    __esp = __esp + 24;
     *fs:0x0] = _v40;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L00408530(intOrPtr _a4)
{
    intOrPtr __ebx;
    _unknown_ __esi;
    intOrPtr _t23;

    __ebx = _a4;
    if( *((char*)(__ebx + 68)) != 0) {
        if(( *(__ebx + 26) & 2) != 0) {
            L004084BB(__ebx + 82,  *((intOrPtr*)(__ebx + 20)),  *((intOrPtr*)(__eax + 40)),  *(__eax + 44) & 65535);
             *4246752 =  *4246752;
        }
         *((char*)(__ebx + 68)) = 0;
    }
    if( *((char*)(__ebx + 69)) == 0) {
        return ;
    }
    _t23 =  *((intOrPtr*)(__ebx + 60));
    if(_t23 == 0) {
        L00406B6C("argType", "xx.cpp", 1534);
    }
    if(( *(_t23 + 4) & 2) != 0 && ( *(_t23 + 12) & 2) != 0) {
        __eax =  *(_t23 + 44) & 65535;
        L004084BB( *((intOrPtr*)(__ebx + 64)), _t23,  *((intOrPtr*)(_t23 + 40)),  *(_t23 + 44) & 65535);
    }
     *((char*)(__ebx + 69)) = 0;
    return;
}

L004086A9(signed int _a4, intOrPtr _a8, intOrPtr _a12, signed int _a16, intOrPtr _a20)
{
    signed int _v8;
    char _v12;
    signed int _v16;
    char _v20;
    intOrPtr __ebx;
    signed int __edi;
    signed int __esi;
    signed int _t120;
    _unknown_ _t128;
    signed int _t137;

    __ebx = _a12;
    if( *((intOrPtr*)(__ebx + 40)) != _a8) {
        L00406B6C("dscPtr->xdERRaddr == errPtr", "xx.cpp", 1826);
    }
    if( *((intOrPtr*)(__ebx + 44)) != _a4) {
        L00406B6C("dscPtr->xdHtabAdr == hdtPtr", "xx.cpp", 1827);
    }
    if( *(__ebx + 69) != 0) {
        L00406B6C("dscPtr->xdArgCopy == 0", "xx.cpp", 1829);
    }
    _t119 =  *(_a4 + 4);
     *(__ebx + 60) = _t119;
    if(_t119 == 0) {
        return ;
    }
    _t137 = _a4;
    if(( *(_t137 + 8) & 128) != 0) {
        return ;
    }
    __esi = _t119;
    _v16 = _t137 & 1;
    _v12 = __ebx + 82;
     *(__ebx + 69) = 1;
    _t139 = _a16;
     *((intOrPtr*)(__ebx + 64)) =  *_a16 + _a20;
    _t120 =  *(__esi + 4) & 65535;
    __edi =  *__esi;
    _v8 = _t120;
    if((_t120 & 4294967295 & 48) != 0) {
        __esi =  *(__esi + 8);
        _t139 =  *(__esi + 4) & 65535;
        _v8 =  *(__esi + 4) & 65535;
    }
    if((_t120 & 4294967295 & 16) == 0 || ( *(__ebx + 12) & 1) == 0) {
        if((_v8 & 1) == 0 || (_t120 & 4294967295 & 48) == 0) {
            if(( *(__ebx + 24) & 1) == 0) {
                if((_t120 & 4294967295 & 32) == 0) {
                    if(__edi !=  *((intOrPtr*)(__ebx + 16))) {
                        L00406B6C("dscPtr->xdSize == size", "xx.cpp", 2040);
                    }
                    _t119 = L0040213C( *((intOrPtr*)(__ebx + 64)), _v12, __edi);
                } else {
                    _push(__edi);
                    _push( &_v12);
                    _push( *((intOrPtr*)(__ebx + 64)));
                    _t119 = L0040213C();
                    _v16 = 1;
                    __esp = __esp + 12;
                }
            } else {
                _t140 =  *((intOrPtr*)(__ebx + 4));
                if( *((intOrPtr*)(__ebx + 4)) !=  *((intOrPtr*)(__ebx + 20))) {
                    L00406B6C("dscPtr->xdTypeID == dscPtr->xdBase", "xx.cpp", 1974);
                }
                if(L00402970(_t140,  *((intOrPtr*)(__ebx + 20)), __esi) == 0) {
                    _v12 = L00402B5C(_t121, _v12,  *((intOrPtr*)(__ebx + 20)), __esi);
                    _v16 = 1;
                }
                if(( *(__esi + 12) & 1) == 0) {
                    _t119 = L0040213C( *((intOrPtr*)(__ebx + 64)), _v12, __edi);
                } else {
                    if( *((intOrPtr*)(_a4 + 12)) == 0) {
                        L00406B6C("hdtPtr->HDcctrAddr", "xx.cpp", 2000);
                    }
                    _t119 = _a4;
                    _push( *((intOrPtr*)(_a4 + 16)));
                    _push( *((intOrPtr*)(_a4 + 12)));
                    _push(_v12);
                    _push( *((intOrPtr*)(__ebx + 64)));
                    L00407EFB();
                    _v16 = 1;
                    __esp = __esp + 16;
                }
            }
        } else {
            if((_t120 & 4294967295 & 32) == 0) {
                if((_t120 & 4294967295 & 16) == 0) {
                    L00406B6C("mask & TM_IS_PTR", "xx.cpp", 1941);
                }
                if(( *(__ebx + 24) & 16) == 0) {
                    L00406B6C("dscPtr->xdMask & TM_IS_PTR", "xx.cpp", 1942);
                }
                _v12 =  *_v12;
            } else {
                if(( *(__ebx + 24) & 16) != 0) {
                    L00406B6C("(dscPtr->xdMask & TM_IS_PTR) == 0", "xx.cpp", 1922);
                }
                _v16 = 1;
            }
            if(L00402970(_t139,  *((intOrPtr*)(__ebx + 20)), __esi) == 0) {
                _v20 = _v12;
                _v12 = L00402B5C(_t124, _v12,  *((intOrPtr*)(__ebx + 20)), __esi);
                if(_v12 != _v20) {
                    _v16 = 1;
                }
            }
            _t119 = L0040213C( *((intOrPtr*)(__ebx + 64)),  &_v12, __edi);
        }
    } else {
        _push(__edi);
        _push(0);
        _push( *((intOrPtr*)(__ebx + 64)));
        _t119 = L004021AC(_t120);
        _v16 = 1;
        __esp = __esp + 12;
    }
    if(_v16 != 0) {
        return ;
    }
    if((_v8 & 3) == 0) {
        return ;
    }
    if(( *(__esi + 12) & 2) != 0) {
        _t119 =  *(__esi + 44) & 65535;
        L004084BB(_v12, __esi,  *((intOrPtr*)(__esi + 40)),  *(__esi + 44) & 65535);
    }
     *((char*)(__ebx + 68)) = 0;
    return;
}

L0040897D(char* _a4, intOrPtr _a8)
{
    char* _v8;
    intOrPtr _v12;
    char* _v16;
    _unknown_ _v20;
    signed int __edi;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t44;
    signed int _t46;
    intOrPtr _t49;
    signed int _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t58;
    _unknown_ _t67;
    _unknown_ _t69;
    _unknown_ _t71;
    _unknown_ _t74;

    _v16 = 0;
    _v8 =  *((intOrPtr*)(_a4 + 8));
    _t45 = _v8;
    _v12 = _a4 -  *((intOrPtr*)(_v8 + 4));
    _t51 =  *(_a4 + 16) & 65535;
    while(_t51 != 0) {
        if(_t51 == _a8) {
            return ;
        }
        _t46 = _t51;
        __edi =  *(_v8 + _t46) & 65535;
         *(_a4 + 16) = __edi & 4294967295;
        _t45 = _t46 + 2 + 2;
        if(__eflags < 0) {
             *4246760 =  *((intOrPtr*)(_v8 + _t45 + 4));
             *((short*)(_a4 + 18)) = 1;
            _push(_t51);
            _push(__ebp);
            _push(__esi);
            _push(__edi);
            L00402FAF(4246760, _v12);
            _pop(__edi);
            _pop(__esi);
            _pop(__ebp);
            _pop(__ebx);
            _t45 = _a4;
             *((short*)(_a4 + 18)) = 0;
            goto L19;
        } else {
            if(__eflags < 0) {
L19:
                _t51 = __edi;
                continue;
            }
            if(__eflags == 0) {
                goto L7;
            }
            if(__eflags == 0) {
                _t45 =  *((intOrPtr*)(_v8 + _t45 + 4));
                L00409456(_t45, _t45,  *((intOrPtr*)(_v8 + _t45)) + _v16, _a4, _v12);
                _v16 = _t45;
            } else {
                _t45 =  ?_? ("bogus context in Local_unwind()");
                __eflags = "bogus context in Local_unwind()";
                if(__eflags != 0) {
                    L00406B6C("!"bogus context in Local_unwind()"", "xx.cpp", 2281);
                }
            }
            goto L19;
L8:
            __eflags =  *((intOrPtr*)(__esi + 40)) - _a4;
            if( *((intOrPtr*)(__esi + 40)) != _a4) {
L10:
                _v20 = __esi;
                while(1) {
L11:
                    __esi =  *_v20;
                    __eflags = __esi;
                    if(__esi == 0) {
                        break;
                    }
                    goto L8;
                }
L12:
                __eflags = __esi;
                if(__eflags == 0) {
L14:
                    L00406B6C("xdrPtr && xdrPtr == *xdrLPP", "xx.cpp", 2234);
                    goto L15;
                }
                _t45 = _v20;
                __eflags = __esi -  *_v20;
                if(__eflags == 0) {
                    goto L15;
                }
                goto L14;
L15:
                 *_v20 =  *__esi;
                L00408530(__esi);
                _push(__esi);
                 *((intOrPtr*)(__esi + 28))();
                _pop(__ecx);
                goto L19;
            }
            __eflags = _t51 -  *((intOrPtr*)(__esi + 48));
            if(_t51 ==  *((intOrPtr*)(__esi + 48))) {
                goto L12;
            }
            goto L10;
        }
L7:
        _t49 = L00401140();
        _t45 = _t49;
        _v20 = _t49;
        goto L11;
    }
}

L00408B17(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebx;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t7;
    intOrPtr _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    intOrPtr* _t14;

    __esi = _a8;
    _t14 = _a4 + 8;
    while( *_t14 != 0) {
        _t8 =  *((intOrPtr*)(_t14 + 4));
        if(_t8 == 0) {
            return _t14;
        }
        _push(0);
        _t9 = L00407E35(_t8,  *((intOrPtr*)(__esi + 4)),  *((intOrPtr*)(__esi + 8)), _t8,  *((intOrPtr*)(__esi + 12)));
        __esp = __esp + 4;
        if(_t9 != 0) {
            return _t14;
        }
        _t14 = _t14 + 20;
    }
}

L00408EB9(intOrPtr _a4, intOrPtr _a8, signed int _a12, intOrPtr _a16, intOrPtr _a20)
{
    short _v24;
    intOrPtr _v40;
    intOrPtr __ebx;
    intOrPtr __edi;
    signed int __esi;
    _unknown_ _t26;
    intOrPtr _t28;

    __edi = _a16;
    __esi = _a12;
    __ebx = _a8;
    L00402414(4242600, __esp);
    if(( *(__ebx + 12) & 2) == 0) {
        L00406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3100);
    }
    if( *((intOrPtr*)(__ebx + 40)) == 0) {
        L00406B6C("varType->tpClass.tpcDtorAddr", "xx.cpp", 3101);
    }
    _v24 = 8;
    _v24 = 20;
    if( *((intOrPtr*)(_a20 + 28)) <  *((intOrPtr*)(__ebx + 32)) && __esi == 0) {
        L00406B6C("(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags", "xx.cpp", 3112);
    }
    if((__esi & 2) == 0) {
        if(__edi == 0) {
            _t28 =  *((intOrPtr*)(__ebx + 36));
        } else {
            _t28 =  *((intOrPtr*)(__ebx + 32));
        }
         *((intOrPtr*)(_a20 + 28)) =  *((intOrPtr*)(_a20 + 28)) - _t28;
    }
    _push(__edi);
    _push( *(__ebx + 44) & 65535);
    _push( *((intOrPtr*)(__ebx + 40)));
    _push(__esi);
    _push(__ebx);
    _push(_a4);
    L0040803E();
    _v24 = 8;
    __esp = __esp + 24;
    _v24 = 0;
     *fs:0x0] = _v40;
    return;
}

L00408FB0(intOrPtr _a4, intOrPtr _a8, intOrPtr* _a12, intOrPtr _a16, intOrPtr _a20, intOrPtr _a24, intOrPtr _a28, intOrPtr _a32)
{
    intOrPtr* __ebx;
    intOrPtr __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    intOrPtr* _t13;

    __esi = _a20;
    __ebx = _a12;
    __edi = _a4;
    while(1) {
        __ebx = __ebx - 12;
        if(__ebx < _a16) {
            break;
        }
        _t13 =  *((intOrPtr*)(__ebx + 4)) + __edi;
        if(_a24 != 0) {
            _t13 =  *_t13;
        }
        __edx =  *__ebx;
        if(( *(__edx + 12) & 2) != 0) {
            L00408FFB(_t13, __edx, _a8, __esi, 0, _a28, _a32);
            __esi = 0;
        }
    }
    return;
}

L00408FFB(intOrPtr _a4, intOrPtr _a8, signed int _a12, intOrPtr _a16, intOrPtr _a20, intOrPtr _a24, intOrPtr _a28)
{
    intOrPtr _v8;
    intOrPtr* _v12;
    intOrPtr _v16;
    intOrPtr* _v20;
    intOrPtr* _v24;
    signed int _v28;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    intOrPtr* _t118;
    signed int _t120;
    intOrPtr _t121;
    intOrPtr _t124;
    intOrPtr _t125;
    intOrPtr _t126;
    intOrPtr* _t131;
    _unknown_ _t133;
    _unknown_ _t135;
    intOrPtr* _t142;
    intOrPtr _t143;
    intOrPtr _t144;
    intOrPtr _t145;
    intOrPtr _t146;

    _t143 = _a16;
    if(( *(_a8 + 12) & 2) == 0) {
        L00406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3251);
    }
    if(_a20 == 0) {
        _t125 =  *((intOrPtr*)(_a8 + 36));
    } else {
        _t125 =  *((intOrPtr*)(_a8 + 32));
    }
    if(_t143 == 0 || _t125 <= _t143) {
        L00408EB9(_a4, _a8, _a12, _a20, _a28);
        return;
    }
    if(_t125 <= _t143) {
        L00406B6C("dtorCnt < varCount", "xx.cpp", 3309);
    }
    _t126 = _t143;
    _t131 = ( *(_a8 + 18) & 65535) + _a8;
    _v20 = _t131;
    _v16 = _t131;
    if(_a20 == 0) {
L19:
        _t118 = ( *(_a8 + 16) & 65535) + _a8;
        _v12 = _t118;
        _v8 = _t118;
        while(1) {
L20:
            _t144 =  *_v12;
            if(_t144 == 0) {
                break;
            }
            if(( *(_t144 + 4) & 1) == 0) {
                L00406B6C("IS_STRUC(blType->tpMask)", "xx.cpp", 3391);
            }
            if(( *(_t144 + 12) & 2) == 0) {
L28:
                _v12 = _v12 + 12;
                continue;
            } else {
                _t121 =  *((intOrPtr*)(_t144 + 36));
                if(_t126 > _t121) {
                    _t126 = _t126 - _t121;
                    goto L28;
                }
                L00408FB0(_a4, _a12, _v12 + 12, _v8, _t126, 0, _a24, _a28);
                if(_a20 == 0) {
                    return ;
                }
                L00408FB0(_a4, _a12, _v20, _v16, 0, 1, _a24, _a28);
                return;
                goto L28;
            }
            break;
        }
        _t142 = ( *(_a8 + 46) & 65535) + _a8;
        _v24 = _t142;
        while(1) {
            _t145 =  *_t142;
            if(_t145 == 0) {
                L00406B6C("memType", "xx.cpp", 3429);
            }
            _v28 = 1;
            if(( *(_t145 + 5) & 4) != 0) {
                _v28 =  *(_t145 + 12);
                _t145 =  *((intOrPtr*)(_t145 + 8));
            }
            if(( *(_t145 + 12) & 2) == 0) {
                L00406B6C("memType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3443);
            }
            _t120 = _v28 *  *(_t145 + 32);
            if(_t126 <= _t120) {
                break;
            }
            _t126 = _t126 - _t120;
            _t142 = _t142 + 8;
        }
        while(1) {
L38:
            _t135 =  *((intOrPtr*)(_t142 + 4)) + _a4;
            _t121 =  *_t142;
            _v28 = 1;
            if(( *(_t121 + 5) & 4) != 0) {
                _v28 =  *(_t121 + 12);
                _t121 =  *((intOrPtr*)(_t121 + 8));
            }
            if(_v28 <= 1) {
                L00408FFB(_t135, _t121, 0, _t126, 1, _a24, _a28);
            } else {
                L004092AB(_t135,  *_t142, _t126, _a24, _a28);
            }
            _t126 = 0;
            _t142 = _t142 - 8;
            if(_t142 < _v24) {
                break;
            }
        }
        L00408FB0(_a4, _a12, _v12, _v8, 0, 0, _a24, _a28);
        if(_a20 == 0) {
            return ;
        }
        L00408FB0(_a4, _a12, _v20, _v16, 0, 1, _a24, _a28);
        return;
    } else {
        while(1) {
            _t146 =  *_v20;
            if(_t146 == 0) {
                break;
            }
            if(( *(_t146 + 4) & 1) == 0) {
                L00406B6C("IS_STRUC(blType->tpMask)", "xx.cpp", 3352);
            }
            if(( *(_t146 + 12) & 2) == 0) {
L18:
                _v20 = _v20 + 12;
                continue;
            } else {
                _t124 =  *((intOrPtr*)(_t146 + 36));
                if(_t126 > _t124) {
                    _t126 = _t126 - _t124;
                    goto L18;
                }
                L00408FB0(_a4, _a12, _v20 + 12, _v16, _t126, 1, _a24, _a28);
                return;
                goto L18;
            }
            goto L19;
        }
        goto L19;
    }
    goto L20;
}

L004092AB(intOrPtr _a4, intOrPtr _a8, signed int _a12, intOrPtr _a16, intOrPtr _a20)
{
    signed int _v8;
    signed int _v12;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t56;
    intOrPtr _t57;
    signed int* _t58;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    _unknown_ _t67;
    _unknown_ _t68;
    signed int _t69;
    _unknown_ _t70;
    intOrPtr _t71;
    intOrPtr _t72;

    _push(_t56);
    _push(_t70);
    _push(_t68);
    _t57 = _a8;
    _t71 = _a4;
    if(( *(_t57 + 5) & 4) == 0) {
        L00406B6C("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 3532);
    }
    if((( *(_t57 + 8))[3] & 2) == 0) {
        L00406B6C("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3533);
    }
    _v8 =  *(_t57 + 12);
    _t58 =  *(_t57 + 8);
    _t69 = _t58[8];
    if(_t69 == 0) {
        L00406B6C("vdtCount", "xx.cpp", 3542);
    }
    if(_a12 == 0) {
        _a12 = _t69 * _v8;
    }
    _v12 = _a12 / _t69;
    if(_v12 > _v8 && _v8 != 0) {
        L00406B6C("etdCount <= elemCount || elemCount == 0", "xx.cpp", 3551);
    }
    _a12 = _a12 - _v12 * _t69;
    if(_t69 < _a12) {
        L00406B6C("dtrCount <= vdtCount", "xx.cpp", 3552);
    }
    _t72 = _t71 + _v12 *  *_t58;
    if(_a12 != 0) {
        L00408FFB(_t72, _t58, 0, _a12, 1, _a16, _a20);
    }
    while(1) {
        _v12 = _v12 + -1;
        if(_v12 == 0) {
            break;
        }
        _t72 = _t72 -  *_t58;
        L00408FFB(_t72, _t58, 0, _t69, 1, _a16, _a20);
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    _pop(__ecx);
    _pop(__ecx);
    return;
}

L004093CF(intOrPtr _a4, intOrPtr* _a8, intOrPtr _a12)
{
    _unknown_ __ebx;
    intOrPtr* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t21;
    intOrPtr _t22;
    _unknown_ _t23;
    intOrPtr _t27;
    _unknown_ _t28;

    __edi = _a8;
    _t27 = _a4;
    _t21 =  *__edi;
    if(( *(_t21 + 4) & 2) == 0) {
        L00406B6C("IS_CLASS(varType->tpMask)", "xx.cpp", 3603);
    }
    if(( *(_t21 + 12) & 80) != 80) {
        return _t27;
    }
    if( *((intOrPtr*)(_t21 + 8)) == 255) {
        return _t27;
    }
    if(_a12 != 0) {
        _t22 = _a12;
    } else {
        _t22 =  *((intOrPtr*)( *((intOrPtr*)(_t21 + 8)) + _t27));
    }
    _t28 = _t27 -  *((intOrPtr*)(_t22 - 8));
    _t23 = _t22 -  *((intOrPtr*)(_t22 - 4));
    if( *((intOrPtr*)(_t23 - 4)) != 0) {
        L00406B6C("((unsigned __far *)vftAddr)[-1] == 0", "xx.cpp", 3641);
    }
     *__edi =  *((intOrPtr*)(_t23 - 12));
    return _t28;
}

L00409456(_unknown_ __eax, intOrPtr* _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    signed int _v8;
    signed int _v12;
    char _v16;
    intOrPtr* _v20;
    char _v24;
    intOrPtr* _v28;
    intOrPtr _v32;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t235;
    _unknown_ _t236;
    _unknown_ _t241;
    signed int _t246;
    intOrPtr _t248;
    _unknown_ _t250;
    intOrPtr _t252;
    intOrPtr* _t255;
    intOrPtr* _t265;
    _unknown_ _t276;
    intOrPtr* _t277;
    _unknown_ _t303;
    _unknown_ _t328;
    signed int _t329;
    signed int _t332;
    char _t333;
    intOrPtr _t334;

    _push(_t276);
    _push(_t332);
    _push(_t328);
    _v12 = 0;
    if(_a4 != 0) {
        _v8 =  *((intOrPtr*)(_a12 + 28));
        _v8 = _v8 - _a8;
        if(( *(_a4 + 4) & 32) != 0) {
            if(( *(_a4 + 4) & 17) == 0) {
                L00406B6C("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)", "xx.cpp", 3704);
            }
            if(( *( *_a4 + 4) & 16) == 0) {
                L00406B6C("dttPtr->dttType->tpMask & TM_IS_PTR", "xx.cpp", 3708);
            }
            if(( *( *((intOrPtr*)( *_a4 + 8)) + 12) & 2) == 0) {
                L00406B6C("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3709);
            }
            _v8 =  *((intOrPtr*)( *((intOrPtr*)( *_a4 + 8)) + 32));
        }
        if(( *(_a4 + 5) & 1) == 0) {
            if(_v8 > 0 || ( *(_a4 + 5) & 4) != 0) {
                _t277 = _a4;
L21:
                while( *_t277 != 0) {
                    if(( *(_t277 + 5) & 16) == 0) {
                        _t333 =  *_t277;
                        _v16 = _t333;
                    } else {
                        if(( *( *_t277 + 5) & 4) == 0) {
                            L00406B6C("dtvtPtr->dttType->tpMask & TM_IS_ARRAY", "xx.cpp", 3799);
                        }
                        _t333 =  *((intOrPtr*)( *_t277 + 8));
                        _v16 = _t333;
                    }
                    _t329 = 1;
                    if(( *(_v16 + 4) & 16) != 0) {
                        _t333 =  *((intOrPtr*)(_v16 + 8));
                        _v16 = _t333;
                        if(( *(_v16 + 4) & 2) != 0 && ( *(_v16 + 12) & 32) != 0 && ( *(_t277 + 4) & 8) != 0) {
                            _t334 = 0;
                            if(( *(_v16 + 12) & 2) == 0) {
                                L00406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3831);
                            }
                            if(( *(_t277 + 4) & 4) == 0) {
                                _v20 =  *((intOrPtr*)(_t277 + 8));
                            } else {
                                _v20 = _a16 +  *((intOrPtr*)(_t277 + 8));
                            }
                            _t265 = _v20;
                            _v20 =  *_t265;
                            if(( *(_t277 + 5) & 16) != 0) {
                                _t334 =  *((intOrPtr*)(_t265 + 4));
                            }
                            if(( *(_t277 + 4) & 64) != 0) {
                                _v20 = _v20 + 4;
                            }
                            _v20 = L004093CF(_v20,  &_v16, _t334);
                            _t333 = _v16;
                        }
                    }
                    if(( *(_v16 + 5) & 4) != 0) {
                        _t329 =  *(_t333 + 12);
                        _t333 =  *((intOrPtr*)(_t333 + 8));
                    }
                    if(( *(_t333 + 12) & 2) == 0) {
                        L00406B6C("elemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3874);
                    }
                    _t330 = _t329 *  *(_t333 + 32);
                    if(_t330 >= _v8) {
                        goto L48;
                    }
                    _v8 = _v8 - _t330;
                    _t277 = _t277 + 12;
                }
            } else {
                if(( *(_a4 + 4) & 3) == 3) {
                    _t277 = _a4;
                    _v12 = _v12 + 1;
                    while(1) {
L48:
                        _v24 =  *_t277;
                        _t332 =  *(_t277 + 4);
                        if((_t332 & 4) == 0) {
                            _v28 =  *((intOrPtr*)(_t277 + 8));
                        } else {
                            _v28 = _a16 +  *((intOrPtr*)(_t277 + 8));
                        }
                        if((_t332 & 4096) != 0) {
                            if(( *(_v24 + 5) & 4) == 0) {
                                L00406B6C("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 3922);
                            }
                            _v24 =  *((intOrPtr*)(_v24 + 8));
                        }
                        if((_t332 & 17) != 0) {
                            _t330 = 0;
                            if(( *(_v24 + 4) & 16) == 0) {
                                L00406B6C("varType->tpMask & TM_IS_PTR", "xx.cpp", 3932);
                            }
                            _v24 =  *((intOrPtr*)(_v24 + 8));
                            _t255 = _v28;
                            _v28 =  *_t255;
                            if((_t332 & 4096) != 0) {
                                _t330 =  *(_t255 + 4);
                            }
                            _v32 = _v28;
                            if((_t332 & 72) == 64) {
                                _v28 = _v28 + 4;
                            }
                            if(( *(_v24 + 4) & 2) != 0 && ( *(_v24 + 12) & 32) != 0 && (_t332 & 8) != 0) {
                                _v28 = L004093CF(_v28,  &_v24, _t330);
                                _v32 = _v28;
                            }
                        }
                        if(_v12 == 0) {
                            if((_t332 & 1024) == 0) {
                                _t246 = 0;
                            } else {
                                if( *(_v24 + 16) == 0) {
                                    _t252 = 0;
                                } else {
                                    _t330 = ( *(_v24 + 16) & 65535) + _v24;
                                    if(_t330 == 0) {
                                        L00406B6C("bl", "xx.cpp", 3986);
                                    }
                                    _t252 =  *((intOrPtr*)( *_t330 + 32));
                                }
                                if(_v8 < _t252) {
                                    _t246 = 2;
                                } else {
                                    _t246 = 1;
                                }
                            }
                            if(( *(_v24 + 5) & 4) == 0) {
                                L00408FFB(_v28, _v24, _t246, _v8, 1, _a16, _a12);
                            } else {
                                L004092AB(_v28, _v24, _v8, _a16, _a12);
                            }
                            if((_t332 & 1024) != 0 && ( *(_a12 + 32) & 1) != 0 &&  *(_a12 + 32) != 255) {
                                _t248 =  *_v28;
                                _t330 =  *(_t248 - 8);
                                 *( *(_t248 - 8))();
                            }
                        }
                        if((_t332 & 3) == 3) {
                            if(_t332 == 72) {
                                _v32 = _v32 - 4;
                            }
                            if(( *(_v24 + 5) & 4) == 0) {
                                if( *((intOrPtr*)(_v24 + 20)) == 0) {
                                    L0040120C(_v32);
                                } else {
                                    L0040810E(_v32,  *((intOrPtr*)(_v24 + 20)),  *(_v24 + 24) & 65535);
                                }
                            } else {
                                _v24 =  *((intOrPtr*)(_v24 + 8));
                                if( *((intOrPtr*)(_v24 + 28)) == 0) {
                                    L0040121C(_v32);
                                } else {
                                    L0040810E(_v32,  *((intOrPtr*)(_v24 + 28)),  *(_v24 + 26) & 65535);
                                }
                            }
                        }
                        _v8 = 0;
                        _t277 = _t277 + -12;
                        if(_t277 <= _a4) {
                            break;
                        }
                    }
                }
                goto L96;
            }
            goto L21;
        } else {
            if(( *( *_a4 + 4) & 2) == 0 || ( *( *_a4 + 12) & 2) == 0) {
                L00406B6C("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)", "xx.cpp", 3723);
            }
        }
    }
L96:
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

BOOL CloseHandle(HANDLE a)
{// addr = 0x00409930
    goto __imp__CloseHandle;
}

HANDLE CreateFileA(LPCSTR a, DWORD b, DWORD c, LPSECURITY_ATTRIBUTES d, DWORD e, DWORD f, HANDLE g)
{// addr = 0x00409936
    goto __imp__CreateFileA;
}

void ExitProcess(UINT a)
{// addr = 0x0040993C
    goto __imp__ExitProcess;
}

int GetACP()
{// addr = 0x00409942
    goto __imp__GetACP;
}

int GetCPInfo(int v, struct _cpinfo* info)
{// addr = 0x00409948
    goto __imp__GetCPInfo;
}

LPSTR GetCommandLineA()
{// addr = 0x0040994E
    goto __imp__GetCommandLineA;
}

DWORD GetCurrentThreadId()
{// addr = 0x00409954
    goto __imp__GetCurrentThreadId;
}

LPSTR GetEnvironmentStrings()
{// addr = 0x0040995A
    goto __imp__GetEnvironmentStrings;
}

DWORD GetLastError()
{// addr = 0x00409966
    goto __imp__GetLastError;
}

void GetLocalTime(LPSYSTEMTIME a)
{// addr = 0x0040996C
    goto __imp__GetLocalTime;
}

DWORD GetModuleFileNameA(HINSTANCE a, LPSTR b, DWORD c)
{// addr = 0x00409972
    goto __imp__GetModuleFileNameA;
}

HMODULE GetModuleHandleA(LPCSTR a)
{// addr = 0x00409978
    goto __imp__GetModuleHandleA;
}

int GetOEMCP()
{// addr = 0x0040997E
    goto __imp__GetOEMCP;
}

void GetStartupInfoA(LPSTARTUPINFOA a)
{// addr = 0x00409990
    goto __imp__GetStartupInfoA;
}

HANDLE GetStdHandle(DWORD a)
{// addr = 0x00409996
    goto __imp__GetStdHandle;
}

int GetStringTypeW(int dwInfoType, short* lpSrcStr, int cchSrc, short* lpCharType)
{// addr = 0x0040999C
    goto __imp__GetStringTypeW;
}

DWORD GetVersion()
{// addr = 0x004099A2
    goto __imp__GetVersion;
}

void GlobalMemoryStatus(LPMEMORYSTATUS a)
{// addr = 0x004099AE
    goto __imp__GlobalMemoryStatus;
}

void RaiseException(DWORD a, DWORD b, DWORD c, DWORD* d)
{// addr = 0x004099CC
    goto __imp__RaiseException;
}

RtlUnwind()
{// addr = 0x004099D2
    goto __imp__RtlUnwind;
}

DWORD SetFilePointer(HANDLE a, LONG b, PLONG c, DWORD d)
{// addr = 0x004099DE
    goto __imp__SetFilePointer;
}

LONG UnhandledExceptionFilter(LPEXCEPTION_POINTERS a)
{// addr = 0x00409A02
    goto __imp__UnhandledExceptionFilter;
}

PVOID VirtualAlloc(PVOID a, DWORD b, DWORD c, DWORD d)
{// addr = 0x00409A08
    goto __imp__VirtualAlloc;
}

BOOL VirtualFree(PVOID a, DWORD b, DWORD c)
{// addr = 0x00409A0E
    goto __imp__VirtualFree;
}

int WideCharToMultiByte(int CodePage, int dwFlags, short* lpWideCharStr, int cchWideChar, char* lpMultiByteStr, int cchMultiByte, char* lpDefaultChar, int* lpUsedDefaultChar)
{// addr = 0x00409A14
    goto __imp__WideCharToMultiByte;
}

BOOL WriteFile(HANDLE a, PCVOID b, DWORD c, PDWORD d, LPOVERLAPPED e)
{// addr = 0x00409A1A
    goto __imp__WriteFile;
}

BOOL EnumThreadWindows(DWORD a, WNDENUMPROC b, LPARAM c)
{// addr = 0x00409A20
    goto __imp__EnumThreadWindows;
}

int MessageBoxA(HWND a, LPCSTR b, LPCSTR c, UINT d)
{// addr = 0x00409A26
    goto __imp__MessageBoxA;
}

int wsprintfA(LPSTR a, LPCSTR b)
{// addr = 0x00409A2C
    goto __imp__wsprintfA;
}

int wsprintfA(@type-tree LPSTR@LPSTR@ a, @type-tree LPCSTR@LPCSTR@ b)
{// addr = 0x00409A2C
    goto __imp__wsprintfA;
}

// Statistics:
//     987 Register nodes
//    1449 Temporaries nodes
//     200 Casts
//    2863 Statements
//     178 Labels
//     114 Gotos
//     154 Blocks
//   11443 Nodes
//     204 Assembly nodes
//     522 Unknown Types

