/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/condcodexform/ppc_elf_by_boomerang/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x10000298 - 0x100002BF
 *	Argument size: 0
 *	Local size: 32
 *	Save regs size: 32
 */

_init()
{



    call_gmon_start();
    frame_dummy();
    return(__do_global_ctors_aux());
}

/* DEST BLOCK NOT FOUND: 100002e0 -> 10010c2c */
/* DEST BLOCK NOT FOUND: 100002e0 -> 10010c2c */
/*	Procedure: 0x100002C0 - 0x100002E3
 *	Argument size: -16
 *	Local size: 16
 *	Save regs size: 0
 */

_start()
{



    asm("rlwinm r1,r1,0,0,27");
    lr = 0;
    *r1 = 0;
    r8 = 268435456;
    asm("lwzu r13,0xab0(r8)");
    goto __libc_start_main;
}

stack space not deallocated on return
/*	Procedure: 0x100002E4 - 0x10000323
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

call_gmon_start(R3)
/* unknown */ void  R3;
{



    r3 = L10010BD0(R3);
    r0 = *(lr + 12);
    if(r0 != 0) {
        lr = r0;
        asm("bllr ");
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000324 - 0x1000039B
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__do_global_dtors_aux(R3)
/* unknown */ void  R3;
{



    r30 = 268500992;
    r0 = *completed.1;
    if(r0 == 0) {
        r31 = 268500992;
        r11 = *p.0;
        r9 = *r11;
        do {
            r0 = r11 + 4;
            lr = r9;
            *(r31 + 3020) = r0;
            asm("bllr ");
            r11 = *(r31 + 3020);
            r9 = *r11;
        } while(r9 != 0);
        *(r30 + 3140) = 1;
    }
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x1000039C - 0x100003B7
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_dtors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x100003B8 - 0x100003FB
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

frame_dummy()
{



    r3 = __JCR_LIST__;
    0 :: 0;
    if(*__JCR_LIST__ != 0) {
        == ? L100003ec : ;
        r3 = L10000000();
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x100003FC - 0x10000417
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call_frame_dummy()
{



    return(r3);
}

/*	Procedure: 0x10000418 - 0x10000433
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func1()
{



    return(r3);
}

/*	Procedure: 0x10000434 - 0x1000044F
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func2()
{



    return(r3);
}

/*	Procedure: 0x10000450 - 0x1000046B
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func3()
{



    return(r3);
}

/*	Procedure: 0x1000046C - 0x10000487
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func4()
{



    return(r3);
}

/*	Procedure: 0x10000488 - 0x100004A3
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func5()
{



    return(r3);
}

/*	Procedure: 0x100004A4 - 0x100004BF
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func6()
{



    return(r3);
}

/*	Procedure: 0x100004C0 - 0x100004DB
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func7()
{



    return(r3);
}

/*	Procedure: 0x100004DC - 0x100004F7
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

func8()
{



    return(r3);
}

/*	Procedure: 0x100004F8 - 0x10000727
 *	Argument size: -80
 *	Local size: 80
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  V8;
	/* unknown */ void  Vc;
	/* unknown */ void  V10;
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;
	/* unknown */ void  V20;
	/* unknown */ void  V24;
	/* unknown */ void  V28;
	/* unknown */ void  V2c;
	/* unknown */ void  V30;
	/* unknown */ void  V34;
	/* unknown */ void  V38;



    V8 = r3;
    Vc = r4;
    V20 = 0;
    V28 = 1;
    if(V8 <= 1) {
        V28 = 0;
    }
    V24 = V28;
    V2c = V24 != 0 ? func1 : func2;
    V10 = V2c;
    V30 = V24 != 0 ? func3 : func4;
    V14 = V30;
    V34 = V24 != 0 ? func5 : func6;
    V18 = V34;
    V38 = V24 != 0 ? func7 : func8;
    V1c = V38;
    if(V8 > 1) {
        V20 = 0;
        if(V10 == func1 && V14 == func3 && V18 == func5 && V1c == func7) {
            V20 = 1;
        }
    } else {
        V20 = 0;
        if(V10 == func2 && V14 == func4 && V18 == func6 && V1c == func8) {
            V20 = 1;
        }
    }
    if(V20 != 0) {
        printf(0x10000ac4);
    } else {
        printf(0x10000acc);
    }
    r0 = V20;
    r0 :: 0;
    asm("mfcr r0");
    asm("rlwinm r0,r0,31,31,31");
    return(r0);
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x10000728 - 0x100007B7
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__libc_csu_fini(A24)
/* unknown */ void  A24;
{
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;



    r6 = lr;
    L10000734();
    V18 = r30;
    r30 = lr;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    r0 = *(r30 + -32768) - *(r30 + -32764);
    0 :: ;
    r31 = (r2 >> 2) + -1;
    asm("bc ne,0x10000774");
    goto L10000794;
    r11 = *(r30 + -32764);
    asm("rlwinm r8,r31,2,0,29");
    r29 = r31;
    r31 = r31 + -1;
    lr = *(r8 + r11);
    asm("blctr ");
    0 :: ;
    asm("bc ne,0x10000770");
L10000794:
    r29 = V14;
    r30 = V18;
    r31 = V1c;
    lr = A24;
    return(_fini());
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x100007B8 - 0x10000843
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__libc_csu_init(A24)
/* unknown */ void  A24;
{
	/* unknown */ void  V10;
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;



    r6 = lr;
    L100007c4();
    V18 = r30;
    r30 = lr;
    V10 = r28;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    _init();
    r28 = *(r30 + -32756);
    r31 = 0;
    r3 = *(r30 + -32760) - r28;
    r0 = r2 >> 2;
    r0 :: ;
    asm("bc ge,0x10000824");
    r29 = r0;
    asm("rlwinm r7,r31,2,0,29");
    r31 = r31 + 1;
    lr = *(r7 + r28);
    asm("blctr ");
    r29 :: ;
    asm("bc lt,0x10000808");
    r28 = V10;
    r29 = V14;
    r30 = V18;
    lr = A24;
    r31 = V1c;
    return(r3);
}

/*	Procedure: 0x10000844 - 0x10000847
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_14()
{



    asm("stfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000848 - 0x1000084B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_15()
{



    asm("stfd fr15,-0x88(r11)");
}

/*	Procedure: 0x1000084C - 0x1000084F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_16()
{



    asm("stfd fr16,-0x80(r11)");
}

/*	Procedure: 0x10000850 - 0x10000853
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_17()
{



    asm("stfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000854 - 0x10000857
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_18()
{



    asm("stfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000858 - 0x1000085B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_19()
{



    asm("stfd fr19,-0x68(r11)");
}

/*	Procedure: 0x1000085C - 0x1000085F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_20()
{



    asm("stfd fr20,-0x60(r11)");
}

/*	Procedure: 0x10000860 - 0x10000863
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_21()
{



    asm("stfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000864 - 0x10000867
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_22()
{



    asm("stfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000868 - 0x1000086B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_23()
{



    asm("stfd fr23,-0x48(r11)");
}

/*	Procedure: 0x1000086C - 0x1000086F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_24()
{



    asm("stfd fr24,-0x40(r11)");
}

/*	Procedure: 0x10000870 - 0x10000873
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_25()
{



    asm("stfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000874 - 0x10000877
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_26()
{



    asm("stfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000878 - 0x1000087B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_27()
{



    asm("stfd fr27,-0x28(r11)");
}

/*	Procedure: 0x1000087C - 0x1000087F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_28()
{



    asm("stfd fr28,-0x20(r11)");
}

/*	Procedure: 0x10000880 - 0x10000883
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_29()
{



    asm("stfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000884 - 0x10000887
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_30()
{



    asm("stfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000888 - 0x1000088F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_31(R3)
/* unknown */ void  R3;
{



    asm("stfd fr31,-8(r11)");
    return(R3);
}

/*	Procedure: 0x10000890 - 0x10000893
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_14()
{



    *(r11 + -72) = r14;
}

/*	Procedure: 0x10000894 - 0x10000897
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_15()
{



    *(r11 + -68) = r15;
}

/*	Procedure: 0x10000898 - 0x1000089B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_16()
{



    *(r11 + -64) = r16;
}

/*	Procedure: 0x1000089C - 0x1000089F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_17()
{



    *(r11 + -60) = r17;
}

/*	Procedure: 0x100008A0 - 0x100008A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_18()
{



    *(r11 + -56) = r18;
}

/*	Procedure: 0x100008A4 - 0x100008A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_19()
{



    *(r11 + -52) = r19;
}

/*	Procedure: 0x100008A8 - 0x100008AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_20()
{



    *(r11 + -48) = r20;
}

/*	Procedure: 0x100008AC - 0x100008AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_21()
{



    *(r11 + -44) = r21;
}

/*	Procedure: 0x100008B0 - 0x100008B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_22()
{



    *(r11 + -40) = r22;
}

/*	Procedure: 0x100008B4 - 0x100008B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_23()
{



    *(r11 + -36) = r23;
}

/*	Procedure: 0x100008B8 - 0x100008BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_24()
{



    *(r11 + -32) = r24;
}

/*	Procedure: 0x100008BC - 0x100008BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_25()
{



    *(r11 + -28) = r25;
}

/*	Procedure: 0x100008C0 - 0x100008C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_26()
{



    *(r11 + -24) = r26;
}

/*	Procedure: 0x100008C4 - 0x100008C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_27()
{



    *(r11 + -20) = r27;
}

/*	Procedure: 0x100008C8 - 0x100008CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_28()
{



    *(r11 + -16) = r28;
}

/*	Procedure: 0x100008CC - 0x100008CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_29()
{



    *(r11 + -12) = r29;
}

/*	Procedure: 0x100008D0 - 0x100008D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_30()
{



    *(r11 + -8) = r30;
}

/*	Procedure: 0x100008D4 - 0x100008DB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_31(R3)
/* unknown */ void  R3;
{



    *(r11 + -4) = r31;
    return(R3);
}

/*	Procedure: 0x100008DC - 0x100008DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x100008E0 - 0x100008E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x100008E4 - 0x100008E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x100008E8 - 0x100008EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x100008EC - 0x100008EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x100008F0 - 0x100008F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x100008F4 - 0x100008F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x100008F8 - 0x100008FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x100008FC - 0x100008FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000900 - 0x10000903
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x10000904 - 0x10000907
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x10000908 - 0x1000090B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x1000090C - 0x1000090F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000910 - 0x10000913
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x10000914 - 0x10000917
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x10000918 - 0x1000091B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x1000091C - 0x1000091F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000920 - 0x10000927
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_31(R3)
/* unknown */ void  R3;
{



    asm("lfd fr31,-8(r11)");
    return(R3);
}

/*	Procedure: 0x10000928 - 0x1000092B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x1000092C - 0x1000092F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x10000930 - 0x10000933
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x10000934 - 0x10000937
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x10000938 - 0x1000093B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x1000093C - 0x1000093F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x10000940 - 0x10000943
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x10000944 - 0x10000947
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x10000948 - 0x1000094B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x1000094C - 0x1000094F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x10000950 - 0x10000953
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x10000954 - 0x10000957
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x10000958 - 0x1000095B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x1000095C - 0x1000095F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x10000960 - 0x10000963
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x10000964 - 0x10000967
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x10000968 - 0x1000096B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x1000096C - 0x10000973
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_31(R3)
/* unknown */ void  R3;
{



    r31 = *(r11 + -4);
    return(R3);
}

/*	Procedure: 0x10000974 - 0x10000977
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14_x()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000978 - 0x1000097B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15_x()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x1000097C - 0x1000097F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16_x()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x10000980 - 0x10000983
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17_x()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000984 - 0x10000987
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18_x()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000988 - 0x1000098B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19_x()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x1000098C - 0x1000098F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20_x()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x10000990 - 0x10000993
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21_x()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000994 - 0x10000997
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22_x()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000998 - 0x1000099B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23_x()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x1000099C - 0x1000099F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24_x()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x100009A0 - 0x100009A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25_x()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x100009A4 - 0x100009A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26_x()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x100009A8 - 0x100009AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27_x()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x100009AC - 0x100009AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28_x()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x100009B0 - 0x100009B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29_x()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x100009B4 - 0x100009B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30_x()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x100009B8 - 0x100009CB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_31_x(R3)
/* unknown */ void  R3;
{



    r0 = *(r11 + 4);
    asm("lfd fr31,-8(r11)");
    lr = r0;
    r1 = r11;
    return(R3);
}

/*	Procedure: 0x100009CC - 0x100009CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14_x()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x100009D0 - 0x100009D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15_x()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x100009D4 - 0x100009D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16_x()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x100009D8 - 0x100009DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17_x()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x100009DC - 0x100009DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18_x()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x100009E0 - 0x100009E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19_x()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x100009E4 - 0x100009E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20_x()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x100009E8 - 0x100009EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21_x()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x100009EC - 0x100009EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22_x()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x100009F0 - 0x100009F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23_x()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x100009F4 - 0x100009F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24_x()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x100009F8 - 0x100009FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25_x()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x100009FC - 0x100009FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26_x()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x10000A00 - 0x10000A03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27_x()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x10000A04 - 0x10000A07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28_x()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x10000A08 - 0x10000A0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29_x()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x10000A0C - 0x10000A0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30_x()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x10000A10 - 0x10000A23
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_31_x(R3)
/* unknown */ void  R3;
{



    r31 = *(r11 + -4);
    lr = *(r11 + 4);
    r1 = r11;
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x10000A24 - 0x10000A73
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__do_global_ctors_aux(R3)
/* unknown */ void  R3;
{



    r31 = __CTOR_END__ + -4;
    r0 = *(__CTOR_END__ + -4);
    do {
        lr = r0;
        asm("bllr ");
        asm("lwzu r0,-4(r31)");
    } while(r0 != -1);
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x10000A74 - 0x10000A8F
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_ctors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000A90 - 0x10000AAF
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

_fini(R3)
/* unknown */ void  R3;
{



    return(__do_global_dtors_aux());
}

/*	Procedure: 0x10010BD0 - 0x10010BE3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L10010BD0()
{



    asm("bllr ");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
}

/*	Procedure: 0x10010C2C - 0x10010C33
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_start_main()
{



    asm("?");
    asm("andis. r15,r3,0x6f200000");
}

/*	Procedure: 0x10010C34 - 0x10010C43
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    asm("?");
    asm("rldimi r0,r1,13,25");
    r25 = r14 + 13151;
    asm("andi. r18,r3,0x6532");
}

/* address  size  */
/* 0x10000298      40 */ /* unknown */ void 	_init;
/* 0x100002c0      36 */ /* unknown */ void 	_start;
/* 0x100002e4      64 */ /* unknown */ void 	call_gmon_start;
/* 0x10000324     120 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x1000039c      28 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x100003b8      68 */ /* unknown */ void 	frame_dummy;
/* 0x100003fc      28 */ /* unknown */ void 	call_frame_dummy;
/* 0x10000418      28 */ /* unknown */ void 	func1;
/* 0x10000434      28 */ /* unknown */ void 	func2;
/* 0x10000450      28 */ /* unknown */ void 	func3;
/* 0x1000046c      28 */ /* unknown */ void 	func4;
/* 0x10000488      28 */ /* unknown */ void 	func5;
/* 0x100004a4      28 */ /* unknown */ void 	func6;
/* 0x100004c0      28 */ /* unknown */ void 	func7;
/* 0x100004dc      28 */ /* unknown */ void 	func8;
/* 0x100004f8     560 */ /* unknown */ void 	main;
/* 0x10000728     144 */ /* unknown */ void 	__libc_csu_fini;
/* 0x100007b8     140 */ /* unknown */ void 	__libc_csu_init;
/* 0x10000844       4 */ /* unknown */ void 	_savefpr_14;
/* 0x10000848       4 */ /* unknown */ void 	_savefpr_15;
/* 0x1000084c       4 */ /* unknown */ void 	_savefpr_16;
/* 0x10000850       4 */ /* unknown */ void 	_savefpr_17;
/* 0x10000854       4 */ /* unknown */ void 	_savefpr_18;
/* 0x10000858       4 */ /* unknown */ void 	_savefpr_19;
/* 0x1000085c       4 */ /* unknown */ void 	_savefpr_20;
/* 0x10000860       4 */ /* unknown */ void 	_savefpr_21;
/* 0x10000864       4 */ /* unknown */ void 	_savefpr_22;
/* 0x10000868       4 */ /* unknown */ void 	_savefpr_23;
/* 0x1000086c       4 */ /* unknown */ void 	_savefpr_24;
/* 0x10000870       4 */ /* unknown */ void 	_savefpr_25;
/* 0x10000874       4 */ /* unknown */ void 	_savefpr_26;
/* 0x10000878       4 */ /* unknown */ void 	_savefpr_27;
/* 0x1000087c       4 */ /* unknown */ void 	_savefpr_28;
/* 0x10000880       4 */ /* unknown */ void 	_savefpr_29;
/* 0x10000884       4 */ /* unknown */ void 	_savefpr_30;
/* 0x10000888       8 */ /* unknown */ void 	_savefpr_31;
/* 0x10000890       4 */ /* unknown */ void 	_savegpr_14;
/* 0x10000894       4 */ /* unknown */ void 	_savegpr_15;
/* 0x10000898       4 */ /* unknown */ void 	_savegpr_16;
/* 0x1000089c       4 */ /* unknown */ void 	_savegpr_17;
/* 0x100008a0       4 */ /* unknown */ void 	_savegpr_18;
/* 0x100008a4       4 */ /* unknown */ void 	_savegpr_19;
/* 0x100008a8       4 */ /* unknown */ void 	_savegpr_20;
/* 0x100008ac       4 */ /* unknown */ void 	_savegpr_21;
/* 0x100008b0       4 */ /* unknown */ void 	_savegpr_22;
/* 0x100008b4       4 */ /* unknown */ void 	_savegpr_23;
/* 0x100008b8       4 */ /* unknown */ void 	_savegpr_24;
/* 0x100008bc       4 */ /* unknown */ void 	_savegpr_25;
/* 0x100008c0       4 */ /* unknown */ void 	_savegpr_26;
/* 0x100008c4       4 */ /* unknown */ void 	_savegpr_27;
/* 0x100008c8       4 */ /* unknown */ void 	_savegpr_28;
/* 0x100008cc       4 */ /* unknown */ void 	_savegpr_29;
/* 0x100008d0       4 */ /* unknown */ void 	_savegpr_30;
/* 0x100008d4       8 */ /* unknown */ void 	_savegpr_31;
/* 0x100008dc       4 */ /* unknown */ void 	_restfpr_14;
/* 0x100008e0       4 */ /* unknown */ void 	_restfpr_15;
/* 0x100008e4       4 */ /* unknown */ void 	_restfpr_16;
/* 0x100008e8       4 */ /* unknown */ void 	_restfpr_17;
/* 0x100008ec       4 */ /* unknown */ void 	_restfpr_18;
/* 0x100008f0       4 */ /* unknown */ void 	_restfpr_19;
/* 0x100008f4       4 */ /* unknown */ void 	_restfpr_20;
/* 0x100008f8       4 */ /* unknown */ void 	_restfpr_21;
/* 0x100008fc       4 */ /* unknown */ void 	_restfpr_22;
/* 0x10000900       4 */ /* unknown */ void 	_restfpr_23;
/* 0x10000904       4 */ /* unknown */ void 	_restfpr_24;
/* 0x10000908       4 */ /* unknown */ void 	_restfpr_25;
/* 0x1000090c       4 */ /* unknown */ void 	_restfpr_26;
/* 0x10000910       4 */ /* unknown */ void 	_restfpr_27;
/* 0x10000914       4 */ /* unknown */ void 	_restfpr_28;
/* 0x10000918       4 */ /* unknown */ void 	_restfpr_29;
/* 0x1000091c       4 */ /* unknown */ void 	_restfpr_30;
/* 0x10000920       8 */ /* unknown */ void 	_restfpr_31;
/* 0x10000928       4 */ /* unknown */ void 	_restgpr_14;
/* 0x1000092c       4 */ /* unknown */ void 	_restgpr_15;
/* 0x10000930       4 */ /* unknown */ void 	_restgpr_16;
/* 0x10000934       4 */ /* unknown */ void 	_restgpr_17;
/* 0x10000938       4 */ /* unknown */ void 	_restgpr_18;
/* 0x1000093c       4 */ /* unknown */ void 	_restgpr_19;
/* 0x10000940       4 */ /* unknown */ void 	_restgpr_20;
/* 0x10000944       4 */ /* unknown */ void 	_restgpr_21;
/* 0x10000948       4 */ /* unknown */ void 	_restgpr_22;
/* 0x1000094c       4 */ /* unknown */ void 	_restgpr_23;
/* 0x10000950       4 */ /* unknown */ void 	_restgpr_24;
/* 0x10000954       4 */ /* unknown */ void 	_restgpr_25;
/* 0x10000958       4 */ /* unknown */ void 	_restgpr_26;
/* 0x1000095c       4 */ /* unknown */ void 	_restgpr_27;
/* 0x10000960       4 */ /* unknown */ void 	_restgpr_28;
/* 0x10000964       4 */ /* unknown */ void 	_restgpr_29;
/* 0x10000968       4 */ /* unknown */ void 	_restgpr_30;
/* 0x1000096c       8 */ /* unknown */ void 	_restgpr_31;
/* 0x10000974       4 */ /* unknown */ void 	_restfpr_14_x;
/* 0x10000978       4 */ /* unknown */ void 	_restfpr_15_x;
/* 0x1000097c       4 */ /* unknown */ void 	_restfpr_16_x;
/* 0x10000980       4 */ /* unknown */ void 	_restfpr_17_x;
/* 0x10000984       4 */ /* unknown */ void 	_restfpr_18_x;
/* 0x10000988       4 */ /* unknown */ void 	_restfpr_19_x;
/* 0x1000098c       4 */ /* unknown */ void 	_restfpr_20_x;
/* 0x10000990       4 */ /* unknown */ void 	_restfpr_21_x;
/* 0x10000994       4 */ /* unknown */ void 	_restfpr_22_x;
/* 0x10000998       4 */ /* unknown */ void 	_restfpr_23_x;
/* 0x1000099c       4 */ /* unknown */ void 	_restfpr_24_x;
/* 0x100009a0       4 */ /* unknown */ void 	_restfpr_25_x;
/* 0x100009a4       4 */ /* unknown */ void 	_restfpr_26_x;
/* 0x100009a8       4 */ /* unknown */ void 	_restfpr_27_x;
/* 0x100009ac       4 */ /* unknown */ void 	_restfpr_28_x;
/* 0x100009b0       4 */ /* unknown */ void 	_restfpr_29_x;
/* 0x100009b4       4 */ /* unknown */ void 	_restfpr_30_x;
/* 0x100009b8      20 */ /* unknown */ void 	_restfpr_31_x;
/* 0x100009cc       4 */ /* unknown */ void 	_restgpr_14_x;
/* 0x100009d0       4 */ /* unknown */ void 	_restgpr_15_x;
/* 0x100009d4       4 */ /* unknown */ void 	_restgpr_16_x;
/* 0x100009d8       4 */ /* unknown */ void 	_restgpr_17_x;
/* 0x100009dc       4 */ /* unknown */ void 	_restgpr_18_x;
/* 0x100009e0       4 */ /* unknown */ void 	_restgpr_19_x;
/* 0x100009e4       4 */ /* unknown */ void 	_restgpr_20_x;
/* 0x100009e8       4 */ /* unknown */ void 	_restgpr_21_x;
/* 0x100009ec       4 */ /* unknown */ void 	_restgpr_22_x;
/* 0x100009f0       4 */ /* unknown */ void 	_restgpr_23_x;
/* 0x100009f4       4 */ /* unknown */ void 	_restgpr_24_x;
/* 0x100009f8       4 */ /* unknown */ void 	_restgpr_25_x;
/* 0x100009fc       4 */ /* unknown */ void 	_restgpr_26_x;
/* 0x10000a00       4 */ /* unknown */ void 	_restgpr_27_x;
/* 0x10000a04       4 */ /* unknown */ void 	_restgpr_28_x;
/* 0x10000a08       4 */ /* unknown */ void 	_restgpr_29_x;
/* 0x10000a0c       4 */ /* unknown */ void 	_restgpr_30_x;
/* 0x10000a10      20 */ /* unknown */ void 	_restgpr_31_x;
/* 0x10000a24      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x10000a74      28 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x10000a90       0 */ /* unknown */ void 	_fini;
/* 0x10000ac0       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x10000ad8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x10008ad8       0 */ /* unknown */ void 	_SDA2_BASE_;
/* 0x10010adc       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x10010ae0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x10010ae4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x10010ae8       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x10010aec       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x10010aec       0 */ /* unknown */ void 	__JCR_END__;
/* 0x10010b00       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x10010bc8       0 */ /* unknown */ void 	__dso_handle;
/* 0x10010bc8       0 */ /* unknown */ void 	data_start;
/* 0x10010bc8       0 */ /* unknown */ void 	__data_start;
/* 0x10010bcc       0 */ /* unknown */ void 	p.0;
/* 0x10010bd4       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x10010c2c       8 */ /* unknown */ void 	__libc_start_main;
/* 0x10010c34       1 */ /* unknown */ void 	printf;
/* 0x10010c44       1 */ /* unknown */ void 	completed.1;
/* 0x10018be4       0 */ /* unknown */ void 	_SDA_BASE_;
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