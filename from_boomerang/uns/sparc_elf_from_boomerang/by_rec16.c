/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/uns/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104B4 - 0x0001052F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    esp = -536862704;
    esp = esp + *(eax + -1610374592);
    esp = esp + 1;
    asm("pushf");
    esp = esp & *(eax + 9469984);
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    eax = eax + 1;
    asm("rep add [eax],eax");
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    asm("enter 0x40,0x40");
    asm("out dx,eax");
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    cl = 1;
    *eax = *eax + al;
    *(eax + -1844445168) = *(eax + -1844445168) + dl;
    asm("adc [eax],al");
    asm("adc [ebp+0x9402202c],edx");
    ah = ah + *(eax + 1074041860);
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    asm("lock aam 0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    (restore)ebp;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 28) = *(eax + 1 - 28) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 27) = *(eax + 1 - 27) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010531 -> 000104f2 */
/*	Procedure: 0x00010530 - 0x00010587
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x104f2");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 344983779;
    asm("pusha");
    eax = (al | 210) + 181668032 + 1;
    *(eax + 302031010) = *(eax + 302031010) + al;
    *eax = *eax + 32;
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,dl");
    eax = eax + 47319232;
    *eax = *eax + al;
    asm("rol byte [edx],cl");
    eax = eax + 1;
    *(eax + 570450082) = *(eax + 570450082) + al;
    *eax = *eax + 13;
    asm("adc [eax],eax");
    *eax = *eax + al;
    al = *LD0080010;
    *(eax + -1627119614) = *(eax + -1627119614) + dl;
}

/*	Procedure: 0x00010588 - 0x000105DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010588()
{



    *(eax + eax) = *(eax + eax) << 1;
    al = al + dl;
    dl = dl + dl;
    al = al + *eax;
    *(eax + 302014626) = *(eax + 302014626) + al;
    edi = 43056127;
    *(ecx + edx) = *(ecx + edx) & al;
    *eax = *eax + al;
    *(eax + -769384430) = *(eax + -769384430) + dl;
    eax = eax + -1568667456;
    asm("pusha");
    *edx = *edx + al;
    *eax = *eax + 5;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc ah,[eax+0x4]");
    eax = eax + 1;
    *(eax - 63) = *(eax - 63) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e05e2();
}

/*	Procedure: 0x000105E0 - 0x000105EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105a2");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000105F0 - 0x00010673
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105b2");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311576802;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x1062c");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    eax & 197133778;
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 - 98) = *(eax + 1 - 98) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010675 -> 00010636 */
/*	Procedure: 0x00010674 - 0x00010683
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10636");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010685 -> 00010646 */
/*	Procedure: 0x00010684 - 0x0001074B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10646");
    al = dh;
    asm("daa");
    al = *LA007D044;
    esp = esp + 1;
    asm("adc edi,[ebx]");
    eax = L000080ff();
    *L80080900 = al;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    eax = Lca9b41c3() + 1;
    *(eax - 115) = *(eax - 115) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],1");
    al = *LFF3B1344;
    eax = *(edx + -2130746606)();
    *L80180900 = al;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    *ebx = *ebx + dl;
    al :: 0;
    *eax = *eax + al;
    eax = eax + 1;
    asm("Unknown opcode 0x82");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],1");
    al = *LBF27D044;
    asm("in al,dx");
    asm("rol byte [edi],1");
    edi = 547520748;
    *eax = *eax + ecx;
    *eax = *eax + 6;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    asm("adc [eax+0x0],al");
    if(!(eax = eax + 1)) {
        *eax = *eax + al;
    }
    al = al + dl;
    (restore)es;
    al = *L00209044;
    *(eax + 385761186) = *(eax + 385761186) | al;
    *eax = *eax + 6;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    *eax = *eax - al;
    eax = eax + 1;
    asm("outsd");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc3820746();
    asm("loopne 0x10750");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 0001074d -> 0001070e */
/*	Procedure: 0x0001074C - 0x0001079B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1070e");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311487712;
    asm("rol byte [0x2d008c0],cl");
    do {
    } while(*eax = *eax & bl);
    *(edx + -2147287233) = 0;
    *(eax + -1610842366) = *(eax + -1610842366) | ah;
    return;
    *( *LD0FC3F04 + 318717858) = *( *LD0FC3F04 + 318717858) + al;
    edi = 130303;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001079d -> 0001075e */
/*	Procedure: 0x0001079C - 0x000107AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1075e");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107ad -> 0001076e */
/*	Procedure: 0x000107AC - 0x000107C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1076e");
    al = *L90FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107c9 -> 0001078a */
/*	Procedure: 0x000107C8 - 0x000107DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1078a");
    al = *L59FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0002089C - 0x000208A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

atexit()
{



    *eax = *eax + dh;
    *(edi + 127999) = *(edi + 127999) ^ bh;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x000208A8 - 0x000208B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

exit()
{



    eax = eax + *eax;
    *(eax + esi) = *(eax + esi) + bh;
    edi = 127231;
    *eax = *eax + al;
}

/*	Procedure: 0x000208B4 - 0x000208E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_exit()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + cl;
    edi = 126463;
    *eax = *eax + al;
    eax = eax + *eax;
    *(eax + esi - 65) = *(eax + esi - 65) + dl;
    asm("Unknown opcode 0xff");
    goto L00000003;
    *(eax + 48) = *(eax + 48) + ah;
    edi = 124927;
    *eax = *eax + al;
    *(eax + esi - 65) = *(eax + esi - 65) + ch;
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x000208E4 - 0x000208F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x000104b4     124 */ /* unknown */ void 	_start;
/* 0x00010530     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105e0      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x000105f0     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010674      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x00010684     200 */ /* unknown */ void 	main;
/* 0x0001074c      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0001079c      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107ac      28 */ /* unknown */ void 	_init;
/* 0x000107c8       1 */ /* unknown */ void 	_fini;
/* 0x000107e0       4 */ /* unknown */ void 	_lib_version;
/* 0x00010841       0 */ /* unknown */ void 	_etext;
/* 0x00020844       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0002086c       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x0002089c      12 */ /* unknown */ void 	atexit;
/* 0x000208a8      12 */ /* unknown */ void 	exit;
/* 0x000208b4      48 */ /* unknown */ void 	_exit;
/* 0x000208e4       1 */ /* unknown */ void 	printf;
/* 0x000208f4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209b0       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209b4       0 */ /* unknown */ void 	force_to_data;
/* 0x000209b8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209bc       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209c0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209c4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209c8       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209c8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209cc       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209cc       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209d0       0 */ /* unknown */ void 	p.0;
/* 0x000209d4       0 */ /* unknown */ void 	_edata;
/* 0x000209d4       1 */ /* unknown */ void 	completed.1;
/* 0x000209d8      24 */ /* unknown */ void 	object.2;
/* 0x000209f0       4 */ /* unknown */ void 	_environ;
/* 0x000209f0       4 */ /* unknown */ void 	environ;
/* 0x000209f4       0 */ /* unknown */ void 	_end;
/* 0x000209f4       0 */ /* unknown */ void 	_END_;
#if 0 /* auxiliary information */
# Current option values:
option: +asmflush
option: -compactcalls
option: +compactexprs
option: +compactifs
option: +compset
option: -dfoproc
option: -disasmonly
option: -displaylabels
option: +doblocks
option: +docase
option: +dofor
option: +doifs
option: +dointrinsics
option: +doloops
option: +donullgotos
option: +dopackloops
option: +dopackstmt
option: +doremlabs
option: +dosimplify
option: -dosort
option: +dostmts
option: +doswitch
option: +dowhile
option: -dumpaddrs
option: -dumpcall
option: -dumpcomments
option: -dumpdfo
option: +dumpdoms
option: -dumpsblocks
option: -dumpsets
option: -dumpsizes
option: -dumpstmtid
option: +fatcase
option: -flag16
option: +fullscreen
option: -genpattern
option: -help
option: -hexconst
option: -html
option: +insertlabels
option: -int16
option: +int32
option: -interactive
option: -isvb5
option: +locals
option: -nohtmltabs
option: -nostackoffs
option: -objdump
option: -okclone
option: -outprocs
option: -outrefs
option: -overrule
option: +rdonly
option: -showblocks
option: -showjump
option: -showlabel
option: -showprotosym
option: -showreg
option: -showstring
option: -silent
option: +simplifyexprs
option: -stackalign16
option: -stackalign4
option: -stackalign8
option: -strallregions
option: -traceall
option: -tracesets
option: +types
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif