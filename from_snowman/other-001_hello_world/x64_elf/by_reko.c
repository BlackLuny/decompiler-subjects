// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000004003B8: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 0000000000400400: void _start(Register word64 rax, Register (ptr Eq_12) rdx, Stack word64 qwArg00, Stack word32 dwArg04)
void _start(word64 rax,  * rdx, word64 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	word64 rax_22 = DPB(rax, __libc_start_main(&globals->t4004E4, qwArg00, fp + 0x08, &globals->t400510, &globals->t400500, rdx, DPB(qwArg00, fp + 0x04, 0)), 0);
	__hlt();
}

// 000000000040042C: void call_gmon_start()
void call_gmon_start()
{
	word64 rax_4 = globals->qw600868;
	if (rax_4 != 0x00)
	{
		word64 rsp_17;
		byte SCZO_18;
		word64 rax_19;
		byte SZO_20;
		byte C_21;
		byte Z_22;
		word32 eax_23;
		eax();
	}
	return;
}

// 0000000000400450: Register ptr64 __do_global_dtors_aux()
ptr64 __do_global_dtors_aux()
{
	if (globals->b6008A8 == 0x00)
	{
		uint64 rax_26 = globals->qw6008B0;
		if (rax_26 < 0x00)
			globals->qw6008B0 = rax_26 + 0x01;
		globals->b6008A8 = 0x01;
	}
	return fp + 0x04;
}

// 00000000004004C0: void frame_dummy()
void frame_dummy()
{
	if (globals->qw6006C0 == 0x00 || 0x00 == 0x00)
		return;
	else
	{
		word64 rsp_41;
		word64 rbp_42;
		byte SCZO_43;
		byte Z_44;
		word32 eax_45;
		word64 rax_46;
		byte SZO_47;
		byte C_48;
		word32 edi_49;
		word64 rdi_50;
		eax();
		return;
	}
}

// 00000000004004E4: void main(Register word64 rax)
void main(word64 rax)
{
	word64 rax_10 = DPB(rax, puts("Hello, World!"), 0);
	return;
}

// 0000000000400500: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 0000000000400510: void __libc_csu_init(Register word32 edi)
void __libc_csu_init(word32 edi)
{
	_init();
	if (0x000000000060069C - 0x000000000060069C >> 0x03 != 0x00)
	{
		do
		{
			word64 rsp_61;
			uint64 rbp_62;
			word64 r12_63;
			word64 r13_64;
			word64 r14_65;
			word64 r15_66;
			uint64 rbx_67;
			byte SCZO_68;
			word32 r13d_69;
			word32 edi_70;
			word64 rsi_71;
			word64 rdx_72;
			byte SZO_73;
			byte C_74;
			byte Z_75;
			word32 ebx_76;
			word64 rdi_77;
			(*(union Eq_144 *) 0x0060069C)();
		} while (rbx_67 + 0x01 < rbp_62);
	}
	return;
}

// 00000000004005A0: Register ptr64 __do_global_ctors_aux()
ptr64 __do_global_ctors_aux()
{
	word64 rax_11 = globals->qw6006A0;
	if (rax_11 != ~0x00)
	{
		do
		{
			word64 rsp_34;
			word64 rbp_35;
			word64 * rbx_36;
			byte SCZO_37;
			word64 rax_38;
			byte Z_39;
			word32 ebx_40;
			word32 eax_41;
			eax();
		} while (*rbx_36 != ~0x00);
	}
	return fp + 0x04;
}

// 00000000004005D8: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}

