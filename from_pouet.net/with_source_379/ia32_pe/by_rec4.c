// Generated by Rec Studio 4 - build Apr 15 2012

L00401000(
    signed int __eax,                      // r0
    signed int __ebx                       // r1
)
{
    signed int* _t22;                      // _t22
    signed int* _t23;                      // _t23
    signed int* _t24;                      // _t24

    __ebx = __ebx;
    __eax = __eax;
    _t22 =  *4202756;
    while(1) {
        __eflags = (__ebx & 255) - 128;
        if(__eflags >= 0) {
             *_t22 = __eax & 255;
        }
        _t23 =  &(_t22[0]);
         *_t23 = __eax & 255;
        _t24 =  &(_t23[0]);
         *_t24 = __eax & 255;
        _t22 =  &(_t24[0]);
        if(__eflags == 0) {
            break;
        }
    }
    return;
}

L00401020()
{
    _unknown_ _t26;                        // _t26
    signed int* _t27;                      // _t27
    _unknown_ _t28;                        // _t28

    asm("pushad ");
    __eax = 0;
    __ecx = 0;
    _t27 =  *4202788;
    while(1) {
         *_t27 = __eax & 255;
        _t27 =  &(_t27[0]);
        if((__ecx & 65535) == 2816) {
            break;
        }
    }
    asm("popad ");
    return;
}

L00401052(
    _unknown_ __eflags                     // r9
)
{
    signed int _t265;                      // _t265
    signed int _t266;                      // _t266
    _unknown_ _t270;                       // _t270
    _unknown_ _t271;                       // _t271
    signed int _t272;                      // _t272
    signed int _t273;                      // _t273
    _unknown_ _t274;                       // _t274
    _unknown_ _t275;                       // _t275
    _unknown_ _t276;                       // _t276
    _unknown_ _t279;                       // _t279
    _unknown_ _t280;                       // _t280
    _unknown_ _t282;                       // _t282
    _unknown_ _t283;                       // _t283
    _unknown_ _t289;                       // _t289
    signed int _t290;                      // _t290

    _t283 = __eflags;
    asm("pushad ");
    _t265 = 0;
    __ebx = 0;
    __ecx = 0;
    _t272 = 0;
    __esi = 0;
     *4202816 =  *4202816 + 1;
    goto L1;
    do {
L1:
        while(1) {
            asm("cbw ");
             *4202820 = _t265 & 65535;
            _t272 = _t265 * (_t265 & 255L) >> 32;
            _t265 = _t265 * (_t265 & 255);
            asm("fild word [0x402144]");
            if(_t283 != 0) {
                continue;
            } else {
                asm("fpatan ");
                asm("fimul word [0x40213e]");
                asm("fistp word [0x402144]");
                 *4202820 = _t272 & 65535;
                asm("xchg al, dh");
                if((_t265 & 255) > 236 || (_t265 & 255) < 235) {
                }
                break;
            }
        }
        if((_t265 & 255) <= 230) {
            if((__ecx & 255) <= 3) {
                if((_t265 & 255) >= 229) {
                    asm("ror dh, 0x3");
                }
            }
            _t289 = (_t265 & 255) - 178;
            if(_t289 <= 0) {
            }
        }
         *(__ebx +  *4202780) = __ecx & 255;
         *(__ebx +  *4202784) = _t272 & 255;
    } while(_t289 != 0);
    _t275 = 256000;
    goto L15;
    do {
L15:
         *4202818 = 65376;
        goto L16;
        do {
L16:
            _push(_t275);
            asm("cbw ");
            asm("cwd ");
            _t273 = _t265 * (_t265 & 255L) >> 32;
            _t266 = _t265 * (_t265 & 255);
            while(1) {
                _t290 = _t266 & 255;
                if(_t290 >= 0) {
                    break;
                }
                if(_t290 == 0 || (_t266 & 255) == 0) {
                    __eflags = (_t273 & 255) - 70;
                    if((_t273 & 255) <= 70) {
                        continue;
                    }
                } else {
                }
                goto L22;
            }
L22:
            _pop(__edi);
            _t265 =  *(((_t266 & 255) << 2) +  *4202756);
             *(_t275 +  *4202752) = _t265;
            _t275 = _t275 - 4;
             *4202818 =  *4202818 + 1;
        } while( *4202818 != 160);
    } while((__esi & 65535) != 156);
    asm("popad ");
    GetClientRect( *4202700, 4202736);
    StretchDIBits( *4202704, 0, 0,  *4202744,  *4202748, 0, 0, 320, 200,  *4202752, 4202604, 0, 13369376);
    return;
}

L00401052(
    _unknown_ __eflags                     // r9
)
{
    signed int _t265;                      // _t265
    signed int _t266;                      // _t266
    _unknown_ _t270;                       // _t270
    _unknown_ _t271;                       // _t271
    signed int _t272;                      // _t272
    signed int _t273;                      // _t273
    _unknown_ _t274;                       // _t274
    _unknown_ _t275;                       // _t275
    _unknown_ _t276;                       // _t276
    _unknown_ _t279;                       // _t279
    _unknown_ _t280;                       // _t280
    _unknown_ _t282;                       // _t282
    _unknown_ _t283;                       // _t283
    _unknown_ _t289;                       // _t289
    signed int _t290;                      // _t290

    _t283 = __eflags;
    asm("pushad ");
    _t265 = 0;
    __ebx = 0;
    __ecx = 0;
    _t272 = 0;
    __esi = 0;
     *4202816 =  *4202816 + 1;
    goto L1;
    do {
L1:
        while(1) {
            asm("cbw ");
             *4202820 = _t265 & 65535;
            _t272 = _t265 * (_t265 & 255L) >> 32;
            _t265 = _t265 * (_t265 & 255);
            asm("fild word [0x402144]");
            if(_t283 != 0) {
                continue;
            } else {
                asm("fpatan ");
                asm("fimul word [0x40213e]");
                asm("fistp word [0x402144]");
                 *4202820 = _t272 & 65535;
                asm("xchg al, dh");
                if((_t265 & 255) > 236 || (_t265 & 255) < 235) {
                }
                break;
            }
        }
        if((_t265 & 255) <= 230) {
            if((__ecx & 255) <= 3) {
                if((_t265 & 255) >= 229) {
                    asm("ror dh, 0x3");
                }
            }
            _t289 = (_t265 & 255) - 178;
            if(_t289 <= 0) {
            }
        }
         *(__ebx +  *4202780) = __ecx & 255;
         *(__ebx +  *4202784) = _t272 & 255;
    } while(_t289 != 0);
    _t275 = 256000;
    goto L15;
    do {
L15:
         *4202818 = 65376;
        goto L16;
        do {
L16:
            _push(_t275);
            asm("cbw ");
            asm("cwd ");
            _t273 = _t265 * (_t265 & 255L) >> 32;
            _t266 = _t265 * (_t265 & 255);
            while(1) {
                _t290 = _t266 & 255;
                if(_t290 >= 0) {
                    break;
                }
                if(_t290 == 0 || (_t266 & 255) == 0) {
                    __eflags = (_t273 & 255) - 70;
                    if((_t273 & 255) <= 70) {
                        continue;
                    }
                } else {
                }
                goto L22;
            }
L22:
            _pop(__edi);
            _t265 =  *(((_t266 & 255) << 2) +  *4202756);
             *(_t275 +  *4202752) = _t265;
            _t275 = _t275 - 4;
             *4202818 =  *4202818 + 1;
        } while( *4202818 != 160);
    } while((__esi & 65535) != 156);
    asm("popad ");
    @rec 0x00000000@GetClientRect@( *4202700, 4202736);
    @rec 0x00000000@StretchDIBits@( *4202704, 0, 0,  *4202744,  *4202748, 0, 0, 320, 200,  *4202752, 4202604, 0, 13369376);
    return;
}

// Statistics:
//      26 Register nodes
//      56 Temporaries nodes
//       0 Casts
//      71 Statements
//       8 Labels
//       4 Gotos
//       3 Blocks
//     353 Nodes
//      13 Assembly nodes
//      13 Unknown Types


Total time: 0 seconds.