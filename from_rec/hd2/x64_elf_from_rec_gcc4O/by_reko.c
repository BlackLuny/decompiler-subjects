// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400528: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 00000000004005D0: void _start(Register word64 rax, Register (ptr Eq_12) rdx, Stack word64 qwArg00, Stack word32 dwArg04)
void _start(word64 rax,  * rdx, word64 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	word64 rax_22 = DPB(rax, __libc_start_main(&globals->t400912, qwArg00, fp + 0x08, &globals->t400970, &globals->t400960, rdx, DPB(qwArg00, fp + 0x04, 0)), 0);
	__hlt();
}

// 00000000004005FC: void call_gmon_start()
void call_gmon_start()
{
	word64 rax_4 = globals->qw600D58;
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

// 0000000000400620: Register ptr64 __do_global_dtors_aux()
ptr64 __do_global_dtors_aux()
{
	if (globals->b600DC8 == 0x00)
	{
		uint64 rax_26 = globals->qw600DD0;
		if (rax_26 < 0x00)
			globals->qw600DD0 = rax_26 + 0x01;
		globals->b600DC8 = 0x01;
	}
	return fp + 0x04;
}

// 0000000000400690: void frame_dummy()
void frame_dummy()
{
	if (globals->qw600BB0 == 0x00 || 0x00 == 0x00)
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

// 00000000004006C0: Register int64 dumpline(Register word32 edx, Register (ptr byte) rdi, Register int32 r12d, Register out Eq_109 ebxOut, Register out (ptr Eq_110) rspOut, Register out ptr64 rbpOut, Register out (ptr void) r12Out, Register out (ptr Eq_113) r13Out)
int64 dumpline(word32 edx, byte * rdi, int32 r12d, Eq_109 & ebxOut, Eq_110 * & rspOut, ptr64 & rbpOut, void, FILE * & r13Out)
{
	*r12Out = r12;
	*r13Out = r13;
	word32 r15d_21 = (word32) rdi;
	int32 ebx_24 = (word32) (uint64) edx;
	union Eq_123 * rsp_113 = (union Eq_123 *) 0x10;
	if (ebx_24 <= 0x10)
	{
		r12d = ebx_24;
		*r12Out = DPB(r12, ebx_24, 0);
	}
	word32 ebp_110;
	uint64 rbp_109;
	word32 ebx_142;
	struct Eq_130 * rax_141;
	Eq_131 rdx_139 = 0x01;
	Eq_133 edx_191 = 0x01;
	if (r12d > 0x00)
	{
		word32 r14d_279 = (word32) rdi;
		byte * rbx_280 = rdi;
		word64 r13_284;
		*r13Out = 0x10;
		do
			rbx_280 = rbx_280 + 0x01;
		while (r12d > (word32) ((uint64) ((word32) ((uint64) ((word32) rbx_280)) - r14d_279)));
		if (r12d > 0x0F)
		{
			byte * rdi_308 = (byte *) 0x10;
			word64 rcx_312 = ~0x00;
			if (rcx_312 != 0x00)
			{
				rdi_308 = rdi_346 + 0x01;
				rcx_312 = rcx_312 - 0x01;
				byte * rdi_346 = rdi_308;
				if (0x00 == *rdi_346)
					goto l0000000000400836;
			}
			ebx_142 = (word32) (~rcx_312 - 0x01);
			rax_141 = (int64) ebx_142;
			rax_141->dw0010 = 0x007C2020;
			rbp_109 = (uint64) ((word32) (uint64) ebx_142 + 0x03);
			ebp_110 = (word32) rbp_109;
l00000000004007AF:
			word64 rdi_147 = rdi + 0x01 + DPB(rax_141, r12 - 0x01, 0);
			byte * rax_148 = rdi;
			uint64 rbx_154 = (uint64) ((word32) (uint64) (ebx_142 - r15d_21) + 0x03);
			do
			{
				word32 edx_164 = (word32) *rax_148;
				rdx_139 = DPB(rdx_139, edx_164, 0);
				byte dl_166 = (byte) edx_164;
				if ((byte) (rdx_139 - 0x20) >= 0x5F)
				{
					rdx_139 = DPB(rdx_139, esi, 0);
					dl_166 = (byte) esi;
				}
				((int64) (rax_148 + rbx_154))->b0010 = dl_166;
				rax_148 = rax_148 + 0x01;
			} while (rax_148 != rdi_147);
			if (r12d > 0x0F)
			{
l0000000000400801:
				int64 rax_66 = (int64) r12d + (int64) ebp_110;
				Mem67[rsp_113 + rax_66:word16] = 0x7C;
				int64 rax_68 = DPB(rax_66, puts(rsp_113), 0);
				struct Eq_268 * rsp_71 = (char *) rsp_113 + 88;
				struct Eq_271 * rsp_78 = rsp_71->ptr0010;
				word32 ebx_74;
				*ebxOut = (word32) rsp_71->qw0000;
				word64 rbp_80;
				*rbpOut = rsp_78->qw0008;
				word64 rsp_86;
				*rspOut = &rsp_78->qw0008 + 0x03;
				return rax_68;
			}
l00000000004007A9:
			Eq_239 eax_115 = r12 + rbp_109;
			do
			{
				Mem121[rsp_113 + (int64) eax_115:byte] = 0x20;
				uint64 r12_122 = (uint64) (r12d + 0x01);
				*r12Out = r12_122;
				r12d = (word32) r12_122;
				eax_115 = (word32) (uint64) ((word32) eax_115 + 0x01);
			} while (r12d <= 0x0F);
			goto l0000000000400801;
		}
		edx_191 = r12 + 0x01;
	}
	do
	{
		word64 rcx_212 = ~0x00;
		byte * rdi_215 = (byte *) 0x10;
		if (rcx_212 != 0x00)
		{
			rdi_215 = rdi_344 + 0x01;
			rcx_212 = rcx_212 - 0x01;
			byte * rdi_344 = rdi_215;
			if (0x00 == *rdi_344)
				goto l000000000040075F;
		}
		(~rcx_212)->dw000F = 0x00202020;
		rdx_139 = (uint64) ((word64) edx_191 + 0x01);
		edx_191 = (word32) rdx_139;
	} while (rdx_139 <= 0x10);
	byte * rdi_234 = (byte *) 0x10;
	word64 rcx_238 = ~0x00;
	if (rcx_238 != 0x00)
	{
		rdi_234 = rdi_345 + 0x01;
		rcx_238 = rcx_238 - 0x01;
		byte * rdi_345 = rdi_234;
		if (0x00 == *rdi_345)
			goto l0000000000400786;
	}
	ebx_142 = (word32) (~rcx_238 - 0x01);
	rax_141 = (int64) ebx_142;
	rax_141->dw0010 = 0x007C2020;
	rbp_109 = (uint64) ((word32) (uint64) ebx_142 + 0x03);
	ebp_110 = (word32) rbp_109;
	if (r12d <= 0x00)
	{
		rsp_113 = null;
		goto l00000000004007A9;
	}
	goto l00000000004007AF;
}

// 0000000000400853: Register word32 hexdump(Register word32 eax, Register word64 rdi, Register out ptr64 rspOut, Register out Eq_347 ebpOut, Register out Eq_348 r12dOut, Register out Eq_349 r13dOut)
word32 hexdump(word32 eax, word64 rdi, ptr64 & rspOut, Eq_347 & ebpOut, Eq_348 & r12dOut, Eq_349 & r13dOut)
{
	word32 eax_120;
	word64 rbp_22;
	char * rbx_23;
	byte SCZO_24;
	word64 rdi_25;
	word64 rdx_26;
	word64 rsi_27;
	word32 edi_28;
	word32 eax_29;
	byte SZO_30;
	byte C_31;
	byte Z_32;
	word64 rax_33;
	word32 esi_34;
	word64 r13_35;
	word32 ebp_36;
	word64 r12_37;
	word64 rcx_38;
	word32 edx_39;
	word32 ebx_40;
	byte CZ_41;
	word32 r12d_42;
	word32 r13d_43;
	struct Eq_373 * rsp_113;
	__xstat();
	if (eax_29 != 0x00)
	{
		perror(rbx_23);
		eax_120 = 0x01;
	}
	else
	{
		FILE * rax_109 = fopen(rbx_23, "rb");
		FILE * r13_107 = rax_109;
		word32 r13d_88;
		*r13dOut = (word32) rax_109;
		if (rax_109 != null)
		{
			byte * r12_123 = fp - 0x28;
			int32 r12d_94 = (word32) (fp - 0x28);
			*r12dOut = r12d_94;
			if (qwLoc88 != 0x00)
			{
				do
				{
					rax_109 = DPB(rax_109, fread(r12_123, 0x01, 0x10, r13_107), 0);
					Eq_426 eax_135 = fread(r12_123, 0x01, 0x10, r13_107);
					if (eax_135 == 0x00)
						goto l00000000004008F7;
					word32 ebx_144;
					uint64 rbp_146;
					rax_109 = dumpline((word32) (uint64) eax_135, r12_123, r12d_94, out ebx_144, out rsp_113, out rbp_146, out r12_123, out r13_107);
				} while (rsp_113->qw0030 > (word64) ((int64) ebx_144) + rbp_146);
			}
l00000000004008F7:
			FILE * rax_115 = DPB(rax_109, fclose(r13_107), 0);
			eax_120 = 0x00;
		}
		else
		{
			perror(rbx_23);
			eax_120 = 0x01;
		}
	}
	struct Eq_395 * rsp_71 = rsp_113->ptr00B8;
	word32 ebp_74;
	*ebpOut = (word32) rsp_71->qw0008;
	word64 rsp_75;
	*rspOut = &rsp_71->qw0008 + 0x01;
	return eax_120;
}

// 0000000000400912: void main(Register word32 eax, Register word64 rsi, Register int32 edi, Register word32 r12d)
void main(word32 eax, word64 rsi, int32 edi, word32 r12d)
{
	if (edi > 0x01)
	{
		word64 * rbx_47 = rsi + 0x08;
		do
		{
			word64 rsp_54;
			word32 ebp_55;
			word32 r12d_56;
			int32 r13d_57;
			eax = hexdump(eax, *rbx_47, out rsp_54, out ebp_55, out r12d_56, out r13d_57);
			rbx_47 = rbx_47 + 0x01;
		} while (r13d_57 > (word32) ((uint64) (ebp_55 + 0x01)));
	}
	return;
}

// 0000000000400960: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 0000000000400970: void __libc_csu_init(Register word32 edi)
void __libc_csu_init(word32 edi)
{
	_init();
	if (0x0000000000600B8C - 0x0000000000600B8C >> 0x03 != 0x00)
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
			(*(union Eq_523 *) 0x00600B8C)();
		} while (rbx_67 + 0x01 < rbp_62);
	}
	return;
}

// 0000000000400A00: Register ptr64 __do_global_ctors_aux()
ptr64 __do_global_ctors_aux()
{
	word64 rax_11 = globals->qw600B90;
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

// 0000000000400A38: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}
