// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_378/ia32_elf/subject.exe
// using Decompiler version VERSION

#include "subject.h"

word32 fn08048714()
{
	word32 esp_111 = fp - 0x00000020;
	word32 esi_26 = 0x0804A6B8;
	word32 edi_27 = 0x0804A6A0;
	word32 ecx_28 = 0x0000003C;
	do
	{
		Mem37[edi_27 + 0x00000000:word16] = Mem0[esi_26 + 0x00000000:word16] >>u 0x0001;
		esi_26 = esi_26 - 0x00000002;
		edi_27 = edi_27 - 0x00000002;
		ecx_28 = ecx_28 - 0x00000001;
	} while (ecx_28 != 0x00000000);
	word32 edi_41 = 0x0804AB70;
	word32 ebx_104 = 0x00000000;
	word32 ecx_106 = 0x00010000;
	do
	{
		word32 eax_56 = ebx_104 * 0x00000002;
		word32 eax_134 = 0x00007FFF;
		if (((byte) (SEQ((int64) eax_56 % 0x000000A8, eax_56) /u 0x000000A8) & 0x01) != 0x00)
			eax_134 = -0x00007FFF;
		Mem74[edi_41 + 0x00000000:word32] = eax_134;
		word32 edx_81 = (int64) ebx_104 % 0x000000A8 << 0x00000010;
		edi_41 = edi_41 + 0x00000004;
		Mem89[edi_41 + 0x0007FFFC:word32] = SEQ((int64) edx_81 % 0x000000A8, edx_81) /u 0x000000A8 - 0x00008000;
		Mem94[edi_41 + 0x000BFFFC:word32] = (fn0804890C() & 0x0000FFFF) - 0x00008000;
		real64 rLoc1_95 = Mem94[0x0804A71E:real64];
		rLoc2 = sin(rLoc2) * Mem94[0x0804A726:real64];
		Mem99[0x0804A712:int32] = (int32) rLoc2;
		Mem101[0x0804A71E:real64] = rLoc1_95 + Mem99[0x0804A716:real64];
		Mem103[edi_41 + 0x0003FFFC:word32] = Mem101[0x0804A712:word32];
		ebx_104 = ebx_104 + 0x00000001;
		ecx_106 = ecx_106 - 0x00000001;
	} while (ecx_106 != 0x00000000);
	word32 ebp_107 = 0x0804A200;
	word32 ecx_108 = 0x00000009;
	do
	{
		word32 esp_112 = esp_111 - 0x00000004;
		Mem113[esp_112 + 0x00000000:word32] = ecx_108;
		fn080487CB(ebp_107);
		word32 ecx_116 = Mem113[esp_112 + 0x00000000:word32];
		ebp_107 = ebp_107 + 0x00000020;
		esp_111 = esp_112 + 0x00000004;
		ecx_108 = ecx_116 - 0x00000001;
	} while (ecx_116 != 0x00000001);
	return Mem113[esp_112 + 0x0000000C:word32];
}

void fn080487CB(word32 ebp)
{
	Mem4[0x0804AB40:word32] = 0x00000000;
	Mem5[0x0804AB44:word32] = 0x00000000;
	Mem6[0x0804AB48:word32] = 0x00000000;
	Mem7[0x0804AB4C:word32] = 0x00000000;
	Mem8[0x0804AB50:word32] = 0x00000000;
	Mem9[0x0804AB60:word32] = 0x00000000;
	Mem13[0x0804AB64:word32] = 0x00010000;
	word32 eax_15 = Mem13[ebp + 0x0000001C:word32];
	Mem22[0x0804AB68:word32] = SEQ((int64) (eax_15 << 0x00000010) % 0x00029040, eax_15 << 0x00000010) / 0x00029040;
	word32 eax_24 = Mem22[ebp + 0x00000018:word32];
	if (eax_24 != 0x00000000)
	{
		int64 edx_eax_67 = (int64) eax_24;
		Mem71[0x0804AB40:word32] = SEQ(edx_eax_67 % 0x00000067, eax_24) /u 0x00000067;
		Mem77[0x0804AB44:word32] = (word32) (edx_eax_67 % 0x00000067 *u 0x027C4597);
	}
	else
		Mem78[0x0804AB48:word32] = 0x0000002A;
	word32 ecx_37 = Mem22[ebp + 0x00000008:word32];
	word32 esi_35 = (Mem22[ebp + 0x00000004:word32] << 0x00000012) + 0x0804AB70;
	word32 edi_43 = fn0804888C(SEQ(2097152 % ecx_37, 0x00200000) /u ecx_37, ecx_37, esi_35, (Mem22[ebp + 0x00000000:word32] << 0x00000012) + 0x082CAB70);
	Mem45[0x0804AB54:word32] = -Mem22[0x0804AB54:word32];
	word32 edi_55 = fn0804888C(0x00000000, Mem45[ebp + 0x00000010:word32], esi_35, fn08048891(Mem45[ebp + 0x0000000C:word32], esi_35, edi_43));
	word32 eax_57 = Mem45[0x0804AB50:word32];
	word32 ecx_56 = Mem45[ebp + 0x00000014:word32];
	fn0804888C(-(SEQ((int64) eax_57 % ecx_56, eax_57) / ecx_56), ecx_56, esi_35, edi_55);
	return;
}

word32 fn0804888C(word32 eax, word32 ecx, word32 esi, word32 edi)
{
	Mem3[0x0804AB54:word32] = eax;
	return fn08048891(ecx, esi, edi);
}

word32 fn08048891(word32 ecx, word32 esi, word32 edi)
{
	do
	{
		if (ecx == 0x00000000)
			return edi;
		Mem31[0x0804AB60:word32] = Mem0[0x0804AB60:word32] + Mem0[0x0804AB64:word32];
		Mem34[0x0804AB64:word32] = Mem31[0x0804AB64:word32] + Mem31[0x0804AB68:word32];
		Mem54[edi + 0x00000000:word32] = (word32) (((word32) ((Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004]) >> 0x0000000B) *s (0x0808AB70[(Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004] >> 0x00000004)) >> 0x0000000C;
		Mem58[0x0804AB50:word32] = Mem54[0x0804AB50:word32] + Mem54[0x0804AB54:word32];
		word32 v17_60 = Mem58[0x0804AB4C:word32] + Mem58[0x0804AB44:word32];
		Mem61[0x0804AB4C:word32] = v17_60;
		Mem66[0x0804AB48:word32] = Mem61[0x0804AB48:word32] + Mem61[0x0804AB40:word32] + (v17_60 <u 0x00000000);
		edi = edi + 0x00000004;
		ecx = ecx - 0x00000001;
	} while (ecx != 0x00000000);
	return edi;
}

word32 fn0804890C()
{
	word32 eax_8 = __ror(Mem0[0x0804A626:word32] + 0xF31782CE ^ 0xF31782CE, 0x01);
	Mem10[0x0804A626:word32] = eax_8;
	return eax_8;
}

void fn08048930()
{
	word32 ebp_2 = fn08048714();
	Mem9[fp - 0x00000004:word32] = 0x00000031;
	SDL_Init();
	Mem14[fp - 0x00000008:word32] = 0x00000000;
	Mem17[fp - 0x0000000C:word32] = 0x0804A734;
	SDL_OpenAudio();
	Mem20[fp - 0x00000010:word32] = 0x80000003;
	Mem27[fp - 0x00000014:word32] = 0x00000020;
	Mem29[fp - 0x00000018:word32] = 0x00000020;
	Mem33[fp - 0x0000001C:word32] = 0x00000280;
	SDL_SetVideoMode();
	fn080491C0();
	Mem40[fp - 0x00000020:word32] = 0x00000000;
	SDL_ShowCursor();
	SDL_PauseAudio();
	SDL_GetTicks();
	Mem41[0x087CABE8:word32] = 0x00000000;
	do
	{
		SDL_GetTicks();
		Mem45[fp - 0x00000024:word32] = 0x00000000 - Mem41[0x087CABE8:word32];
		SDL_GL_SwapBuffers();
		word32 ebp_47;
		word32 edi_48;
		word32 ecx_49 = fn08048E99(ebp_2, dwArg00, out ebp_47, out edi_48);
		word32 esp_52 = fp - 0x00000020;
		if (Mem45[0x0804A74C:byte] != 0x00)
			break;
		Mem109[fp - 0x00000024:word32] = 0x087CABEC;
		SDL_PollEvent();
	} while (Mem109[0x087CABEC:byte] != 0x02);
	SDL_Quit();
	__syscall(0x80);
	word32 esi_103 = 0x00000000;
	word32 ebx_59 = 0x00000000;
	do
	{
		word16 cx_69 = edi_48[ebx_59 * 0x0002];
		ecx_49 = DPB(ecx_49, cx_69, 0, 16);
		word32 esp_71 = esp_52 - 0x00000004;
		Mem72[esp_71 + 0x00000000:word32] = ecx_49;
		0x087D55E0[ebx_59 * 4F] = (real64) Mem72[esp_71 + 0x00000000:int16] * Mem72[0x0804A8C8:real32];
		esp_52 = esp_71 + 0x00000004;
		word32 edx_104 = (int32) cx_69;
		if (edx_104 < 0x00000000)
			edx_104 = -edx_104;
		if (edx_104 >= esi_103)
			esi_103 = edx_104;
		ebx_59 = ebx_59 + 0x00000001;
	} while (ebx_59 <= 0x000003FF);
	Mem90[esp_71 + 0x00000000:word32] = esi_103;
	Mem97[0x087D55C0:real32] = (real64) Mem90[esp_71 + 0x00000000:int16] * Mem90[0x0804A8CC:real32] + Mem90[0x0804A8D0:real32] * Mem90[0x087D55C0:real32];
	if (Mem97[0x087D55C4:word32] > 0x0000002F)
		Mem102[0x087D55C0:word32] = 0x00000000;
	return;
}

word32 fn08048A31(real32 rArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_109 = 0x00000000;
	do
	{
		real64 rLoc1_21 = (rArg04 + rArg04) * rArg04;
		real64 rLoc6_69 = Mem0[0x087D4848:real32] + 1;
		real64 rLoc3_25 = rArg04 * rArg04;
		real64 rLoc3_58 = Mem0[0x087D484C:real32] + 1;
		real64 rLoc4_60 = 1 - Mem0[0x087D4848:real32];
		real64 rLoc7_71 = rLoc6_69 * rLoc6_69;
		real64 rLoc3_55 = 1 - Mem0[0x087D4844:real32];
		real64 rLoc2_23 = rArg04 * rLoc1_21;
		real64 rLoc2_81 = (rLoc3_25 * rArg04 - rLoc1_21 + rArg04) * ((rLoc7_71 + (rLoc4_60 * rLoc3_58) * ((dwArg08 + 0x0000000C)[eax_109 * 4F] - dwArg08[eax_109 * 4F])) * rLoc3_55);
		dwArg0C[eax_109 * 4F] = Mem0[0x0804A8DC:real32] * rLoc2_81 * ((rLoc3_25 * 1) * (((((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71) * (rLoc6_69 * rLoc3_58) + ((1 - Mem0[0x087D484C:real32]) * rLoc4_60) * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F])) * rLoc3_55)) + (rLoc2_81 + ((rLoc2_23 + 1) * (dwArg08 + 0x0000000C)[eax_109 * 4F] + ((rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32]) + rLoc5 * Mem0[0x0804A8D8:real32]) * (dwArg08 + 0x00000018)[eax_109 * 4F]));
		rArg04 = rArg04 - 1;
		rLoc5 = rLoc3_55;
		eax_109 = eax_109 + 0x00000001;
	} while (eax_109 <= 0x00000001);
	return dwArg0C;
}

word32 fn08048B1E(real32 rArg04)
{
	word32 esi_110 = 0x00000000;
	word32 dwLoc14_115 = 0x00000000;
	do
	{
		word32 edi_111 = 0x00000000;
		do
		{
			Mem57[fp - 0x00000024:word32] = 0x087D4864;
			word32 ebx_59 = dwLoc14_115 * 0x00000003;
			real64 rLoc1_68 = Mem57[0x0804A8E0:real32] * (real64) edi_111;
			fn08048A31(rLoc1_68, (ebx_59 << 0x00000002) + 0x0804A800, rLoc24);
			Mem75[fp - 0x00000024:word32] = 0x087D4870;
			word32 ecx_135 = fn08048A31(rLoc1_68, (ebx_59 << 0x00000002) + 0x0804A860, rLoc24);
			word32 edx_83 = 0x00000000;
			do
			{
				real32 v13_91 = Mem75[0x0804A8E4:real32] - rArg04;
				Mem92[0x0804A8E4:real32] = v13_91;
				real64 rLoc2_153 = rArg04 * 0x087D4870[edx_83 * 4F];
				0x087D48A0[(esi_110 * 0x00000003 + edx_83) * 4F] = rArg04 * 0x087D4864[edx_83 * 4F] + rLoc2_153;
				edx_83 = edx_83 + 0x00000001;
			} while (edx_83 <= 0x00000002);
			0x087D48A8[esi_110 * 0x00000003 * 4F] = sin(Mem97[0x0804A8E8:real32] * (real64) esi_110) * Mem97[0x0804A8EC:real32];
			esi_110 = esi_110 + 0x00000001;
			edi_111 = edi_111 + 0x00000001;
		} while (edi_111 <= 0x0000000F);
		word32 v15_114 = dwLoc14_115 + 0x00000001;
		dwLoc14_115 = v15_114;
	} while (v15_114 <=u 0x00000003);
	word32 dwLoc14_118 = 0x00000000;
	if (0x00000000 < esi_110 - 0x00000001)
		do
		{
			word32 ebx_156 = dwLoc14_118 * 0x00000003;
			Mem160[0x087D487C:real32] = 0x087D48B4[ebx_156 * 0x00000004] - 0x087D48A8[ebx_156 * 0x00000004];
			Mem163[0x087D4880:real32] = 0x087D48A0[ebx_156 * 0x00000004] - 0x087D48AC[ebx_156 * 0x00000004];
			Mem166[0x087D4884:real32] = 0x087D48B0[ebx_156 * 0x00000004] - 0x087D48A4[ebx_156 * 0x00000004];
			real64 rLoc4_171 = Mem166[0x0804A8F0:real32];
			real64 rLoc3_170 = Mem166[0x087D55C8:real32];
			real64 rLoc4_179 = sin(rLoc2_153 * Mem166[0x0804A8DC:real32] + rLoc4_171 * rLoc4_171) * Mem166[0x087D55C0:real32];
			real64 rLoc5_181 = rLoc4_171 * Mem166[0x0804A8F4:real32];
			0x087D48A4[ebx_156 * 0x00000004] = rLoc4_171 * (rLoc5_181 * rLoc4_179) + 0x087D48A4[ebx_156 * 0x00000004];
			real64 rLoc2_206 = rLoc5_181 + 1 + (real64) dwLoc14_118;
			0x087D48A8[ebx_156 * 0x00000004] = sin((rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32]) * Mem193[0x087D55C0:real32] * rLoc2_206 * Mem193[0x0804A900:real32] + 0x087D48A8[ebx_156 * 0x00000004];
			Mem210[0x087D558C:word32]();
			Mem210[0x087D558C:word32]();
			Mem210[0x087D558C:word32]();
			Mem210[0x087D5580:word32]();
			Mem210[0x087D5598:word32]();
			Mem210[0x087D5564:word32]();
			Mem210[0x087D556C:word32]();
			Mem210[0x087D556C:word32]();
			Mem210[0x087D556C:word32]();
			Mem210[0x087D556C:word32]();
			Mem210[0x087D5568:word32]();
			Mem210[0x087D5580:word32]();
			Mem210[0x087D5590:word32]();
			Mem210[0x087D5564:word32]();
			Mem210[0x087D556C:word32]();
			Mem210[0x087D556C:word32]();
			ecx_135 = 0x087D48AC[ebx_156 * 0x00000004];
			Mem210[0x087D556C:word32]();
			Mem210[0x087D556C:word32]();
			Mem210[0x087D5568:word32]();
			word32 v28_345 = dwLoc14_118 + 0x00000001;
			rLoc2_153 = rLoc2_206 * Mem210[0x0804A904:real32] * Mem210[0x0804A908:real32];
			dwLoc14_118 = v28_345;
		} while (v28_345 < esi_110 - 0x00000001);
	return ecx_135;
}

word32 fn08048E99(word32 ebp, word32 dwArg04, ptr32 ebpOut, ptr32 ediOut)
{
	Mem22[0x087D55C8:real32] = (real64) dwArg04;
	real64 rLoc1_26 = (Mem22[0x0804A914:real32] * (real64) Mem22[0x0804A72E:word32] - Mem22[0x0804A918:real32]) * Mem22[0x0804A91C:real32];
	word16 wLoc12_27 = __fstcw();
	word16 ax_30 = DPB(wLoc12_27, 0x0C, 8, 8);
	__fldcw(ax_30);
	Mem32[0x087D55C4:int32] = (int32) rLoc1_26;
	__fldcw(wLoc12_27);
	if (Mem32[0x087D55C4:word32] > 0x0000003A)
		Mem349[0x0804A74C:byte] = 0x01;
	real64 rLoc1_38 = Mem32[0x0804A920:real32] * (real64) dwArg04;
	__fldcw(ax_30);
	__fldcw(wLoc12_27);
	int32 dwLoc18_40 = (int32) rLoc1_38;
	if (dwLoc18_40 != Mem32[0x0804A8B4:word32])
	{
		Mem119[0x0804A8B4:word32] = dwLoc18_40;
		word32 ebx_120 = 0x00000000;
		do
		{
			word32 eax_125 = (int32) (ebx_350 + 0x0804A769)[ebx_350 * 0x08];
			if (Mem119[0x087D55C4:word32] < eax_125)
				;
			ebx_120 = ebx_350 + 0x00000001;
			word32 ebx_350 = ebx_120;
		} while (ebx_120 <=u 0x0000000F);
l08048F70:
		Mem119[0x087D5578:word32]();
		Mem119[0x087D557C:word32]();
		Mem119[0x087D5570:word32]();
		Mem119[0x087D5574:word32]();
		word32 eax_146 = 0x47AE147B;
		Mem119[0x087D55A0:word32]();
		Mem119[0x087D5570:word32]();
		Mem119[0x087D5574:word32]();
		Mem119[0x087D5588:word32]();
		Mem119[0x087D5584:word32]();
		Mem198[0x087D5560:real32] = Mem119[0x0804A930:real32] * Mem119[0x087D485C:real32] + Mem119[0x087D5560:real32];
		Mem198[0x087D5584:word32]();
		if (Mem198[0x087D55C4:word32] <= 0x0000002F)
		{
			Mem198[0x087D5590:word32]();
			Mem198[0x087D559C:word32]();
			do
			{
				Mem198[0x087D5564:word32]();
				word32 ebx_278 = 0x00000000;
				do
				{
					real32 v20_290 = Mem198[0x0804A8E4:real32] - sin((real64) ebx_278 * Mem198[0x0804A934:real32]);
					Mem291[0x0804A8E4:real32] = v20_290;
					Mem291[0x087D5580:word32]();
					Mem291[0x087D556C:word32]();
					ebx_278 = ebx_278 + 0x00000001;
				} while (ebx_278 <= 0x000003FF);
				Mem291[0x087D5568:word32]();
				Mem317[fp - 0x00000024:word32] = 0x00000000;
				eax_146 = 0x00000000;
				Mem317[0x087D5584:word32]();
			} while (<invalid>);
		}
		Mem219[fp - 0x00000020:word32] = eax_146;
		Mem221[fp - 0x00000024:word32] = 0x0804A8B8;
		Mem223[fp - 0x00000028:word32] = 0x00001200;
		Mem223[0x087D5594:word32]();
		Mem223[0x087D558C:word32]();
		Mem223[0x087D558C:word32]();
		Mem229[fp - 0x00000030:word32] = 0x3F800000;
		Mem232[fp - 0x00000034:word32] = 0x00000000;
		Mem234[fp - 0x00000038:word32] = 0x00000000;
		Mem234[0x087D5584:word32]();
		do
		{
			Mem234[0x087D5584:word32]();
			ecx = fn08048B1E(sin(Mem234[0x0804A900:real32] * (real64) dwArg04) * Mem234[0x0804A8DC:real32] + Mem234[0x0804A8DC:real32]);
		} while (<invalid>);
	}
}

void fn080491C0()
{
	dlopen();
	word32 edi_38 = 0x087D5564;
	word32 esi_39 = 0x0804A945;
	word32 eax_51 = Mem0[esi_39 + 0x00000000:word32];
	esi_39 = esi_39 + 0x00000004;
	while (eax_51 != 0x00000000)
	{
		Mem58[fp - 0x00000028:word32] = 0x0804A93C;
		dlsym();
		Mem59[edi_38 + 0x00000000:word32] = eax_51;
		edi_38 = edi_38 + 0x00000004;
		eax_51 = Mem0[esi_39 + 0x00000000:word32];
		esi_39 = esi_39 + 0x00000004;
	}
	return;
}

