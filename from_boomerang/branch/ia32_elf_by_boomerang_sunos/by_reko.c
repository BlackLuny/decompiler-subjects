// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048840: void _start(Register (ptr Eq_2) edx, Register word32 ebx, Stack word32 dwArg00)
void _start( * edx, word32 ebx, word32 dwArg00)
{
	if (0x080487A0 != 0x00)
		atexit(&globals->t80487A0);
	if (0x0804A5F4 != 0x00)
		atexit(edx);
	atexit(&globals->t8049510);
	globals->ptr804ACCC = fp + 0x08 + dwArg00 * 0x04;
	_init();
	word32 esp_36;
	word32 ebp_37;
	word32 edx_38;
	word32 eax_39;
	byte SZO_40;
	byte C_41;
	byte Z_42;
	byte SCZO_43;
	word32 ebx_44;
	__fpstart();
	exit(main(ebx_44));
}

// 080488AF: void _mcount()
void _mcount()
{
	return;
}

// 080488B0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	struct Eq_51 * ebx_10 = &globals->t804A5C0;
	while (true)
	{
		<anonymous> ** eax_18 = ebx_10->ptr00CC;
		if (*eax_18 == null)
			break;
		ebx_10->ptr00CC = (<anonymous> **) ((char *) eax_18 + 0x04);
		<anonymous> * eax_30 = *eax_18;
		word32 esp_32;
		word32 ebp_33;
		byte SCZO_35;
		word32 eax_36;
		byte Z_37;
		word32 edx_38;
		eax_30();
	}
	__deregister_frame_info((char *) &ebx_10->ptr00CC + 0x0014);
	return;
}

// 080488F0: void fini_dummy()
void fini_dummy()
{
	return;
}

// 08048908: void frame_dummy()
void frame_dummy()
{
	__register_frame_info(0x0804A6A0, 0x0804ACB0);
	return;
}

// 08048930: void init_dummy()
void init_dummy()
{
	return;
}

// 08048948: Register word32 main(Register word32 ebx)
word32 main(word32 ebx)
{
	scanf("%d", SLICE(0x08049528, <unknown>, 32));
	scanf("%d", SLICE(0x08049528, <unknown>, 32));
	if (dwLoc08 == 0x05)
		printf("Equal
", SLICE(0x0804952B, <unknown>, 32));
	if (dwLoc08 != 0x05)
	{
		printf("Not Equal
", SLICE(0x08049532, <unknown>, 32));
		if (dwLoc08 < 0x05)
		{
			printf("Greater
", SLICE(0x0804953D, <unknown>, 32));
			if (dwLoc08 < 0x05)
			{
l080489C3:
				printf("Greater or Equal
", SLICE(0x08049555, <unknown>, 32));
				if (dwLoc08 <= 0x05)
					goto l080489E2;
l080489D5:
				printf("Less
", SLICE(134518119, <unknown>, 32));
l080489E2:
				if (dwLoc0C < 0x05)
				{
					printf("Greater Unsigned
", SLICE(134518125, <unknown>, 32));
					if (dwLoc0C < 0x05)
					{
l08048A0B:
						printf("Carry Clear
", SLICE(0x08049597, <unknown>, 32));
						if (dwLoc0C <= 0x05)
							goto l08048A2A;
l08048A1D:
						printf("Carry Set
", SLICE(134518180, <unknown>, 32));
l08048A2A:
						if (0x05 - dwLoc08 >= 0x00)
						{
							printf("Minus
", SLICE(134518191, <unknown>, 32));
							if (0x05 - dwLoc08 >= 0x00)
								return 0x00;
						}
						printf("Plus
", SLICE(134518198, <unknown>, 32));
						return 0x00;
					}
				}
				printf("Less or Equal Unsigned
", SLICE(134518143, <unknown>, 32));
				if (dwLoc0C > 0x05)
					goto l08048A1D;
				goto l08048A0B;
			}
		}
	}
	printf("Less or Equal
", SLICE(0x08049546, <unknown>, 32));
	if (dwLoc08 > 0x05)
		goto l080489D5;
	goto l080489C3;
}

// 08048A58: Register (ptr byte) decode_uleb128(Stack ptr32 dwArg04, Stack ptr32 dwArg08)
byte * decode_uleb128(ptr32 dwArg04, ptr32 dwArg08)
{
	ui32 edi_12 = 0x00;
	word32 esi_15 = 0x00;
	while (true)
	{
		byte * ecx_26 = dwArg04 + 0x01;
		ui32 edx_24 = (word32) *dwArg04;
		dwArg04 = ecx_26;
		edi_12 = edi_12 | (edx_24 & 0x7F) << (byte) esi_15;
		if ((byte) edx_24 >= 0x00)
			break;
		esi_15 = esi_15 + 0x07;
	}
	*dwArg08 = edi_12;
	return ecx_26;
}

// 08048A94: Register (ptr byte) decode_sleb128(Stack ptr32 dwArg04, Stack ptr32 dwArg08)
byte * decode_sleb128(ptr32 dwArg04, ptr32 dwArg08)
{
	byte * edi_15 = dwArg04;
	uint32 dwLoc08_16 = 0x00;
	uint32 ecx_17 = 0x00;
	byte cl_18 = 0x00;
	do
	{
		ui32 esi_24 = (word32) *edi_15;
		uint32 v12_29 = dwLoc08_16 | (esi_24 & 0x7F) << cl_18;
		ecx_17 = ecx_17 + 0x07;
		edi_15 = edi_15 + 0x01;
		dwLoc08_16 = v12_29;
		cl_18 = (byte) ecx_17;
	} while ((byte) esi_24 < 0x00);
	if (ecx_17 <= 0x1F && (esi_24 & 0x40) != 0x00)
		dwLoc08_16 = v12_29 | ~0x00 << cl_18;
	*dwArg08 = dwLoc08_16;
	return edi_15;
}

// 08048AF0: void fde_insert(Stack word32 dwArg04, Stack word32 dwArg08, Stack (ptr Eq_271) dwArg0C)
void fde_insert(word32 dwArg04, word32 dwArg08, Eq_271 * dwArg0C)
{
	dwArg04[dwArg08] = dwArg0C;
	ui32 edx_14 = dwArg08;
	if (dwArg08 != 0x00)
	{
		word32 * ecx_45 = dwArg04 + dwArg08;
		do
		{
			struct Eq_285 * esi_53 = (dwArg04 - 0x04)[edx_14];
			struct Eq_289 * edi_50 = *ecx_45;
			if (edi_50->dw0008 - esi_53->dw0008 >= 0x00)
				return;
			*ecx_45 = esi_53;
			(dwArg04 - 0x04)[edx_14] = edi_50;
			ecx_45 = ecx_45 + -0x01;
			edx_14 = edx_14 - 0x01;
		} while (edx_14 != 0x00);
	}
	return;
}

// 08048B48: Register (ptr Eq_318) count_fdes(Register (ptr Eq_319) ebp, Stack word32 dwArg04, Register out ptr32 espOut, Register out (ptr Eq_322) ebpOut)
Eq_318 * count_fdes(Eq_319 * ebp, word32 dwArg04, ptr32 & espOut, Eq_322 * & ebpOut)
{
	struct Eq_323 * edx_30 = dwArg04;
	struct Eq_318 * ecx_14 = null;
	if (dwArg04->dw0000 != 0x00)
	{
		do
		{
			if (edx_30[0x01] != 0x00 && edx_30[0x02] != 0x00)
				ecx_14 = (struct Eq_318 *) ((char *) ecx_14 + 0x01);
			eax = (struct Eq_318 *) (edx_30 + edx_30->dw0000 / 0x04);
			edx_30 = (struct Eq_323 *) (eax + 0x01);
		} while (eax[0x01] != 0x00);
	}
	return eax;
	word32 ebp_24;
	*ebpOut = ebp->dw0000;
	word32 esp_25;
	*espOut = &ebp->dw0000 + 0x01;
	return ecx_14;
}

// 08048B78: Register ptr32 add_fdes(Register (ptr Eq_319) ebp, Register (ptr word32) edi, Stack word32 dwArg04, Stack (ptr Eq_368) dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Stack word32 dwArg14, Register out (ptr Eq_372) ebpOut, Register out ptr32 esiOut, Register out (ptr void) ediOut)
ptr32 add_fdes(Eq_319 * ebp, word32 * edi, word32 dwArg04, Eq_368 * dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, Eq_372 * & ebpOut, ptr32 & esiOut, void)
{
	struct Eq_271 * esi_115 = dwArg04;
	word32 edi_111 = *dwArg0C;
	uint32 dwLoc08_108 = *dwArg10;
	uint32 dwLoc0C_110 = *dwArg14;
	if (dwArg04->dw0000 != 0x00)
	{
		do
		{
			if (esi_115[0x01] != 0x00 && esi_115[0x02] != 0x00)
			{
				fde_insert(dwArg08, edi_111, esi_115);
				edi_111 = edi_111 + 0x01;
				uint32 eax_130 = esi_115[0x02];
				if (dwLoc08_108 > eax_130)
					dwLoc08_108 = eax_130;
				uint32 eax_135 = (word32) esi_115[0x03].dw0000 + eax_130;
				if (dwLoc0C_110 < eax_135)
					dwLoc0C_110 = eax_135;
			}
			struct Eq_458 * eax_114 = esi_115 + esi_115->dw0000 / 0x04;
			esi_115 = (struct Eq_271 *) &eax_114->dw0004;
		} while (eax_114->dw0004 != 0x00);
	}
	*dwArg0C = edi_111;
	*dwArg10 = dwLoc08_108;
	*dwArg14 = dwLoc0C_110;
	return fp - 0x04;
	*ebp->ptr0010 = edi;
	*ebp->ptr0014 = *(ebp - 0x04);
	*ebp->ptr0018 = *(ebp - 0x08);
	word32 esi_80;
	*esiOut = *(ebp - 0x10);
	word32 edi_82;
	*ediOut = *(ebp - 0x0C);
	word32 ebp_84;
	*ebpOut = ebp->dw0000;
	return &ebp->dw0000 + 0x01;
}

// 08048C08: Register ptr32 frame_init(Register (ptr Eq_498) ebp, Stack word32 dwArg04, Register out (ptr Eq_500) ebpOut, Register out (ptr uint32) esiOut)
ptr32 frame_init(Eq_498 * ebp, word32 dwArg04, Eq_500 * & ebpOut, uint32 * & esiOut)
{
	struct Eq_319 * ebp_120 = fp - 0x04;
	ptr32 esp_13 = fp - 0x20;
	word32 * eax_21 = dwArg04->ptr000C;
	if (eax_21 != null)
	{
		word32 * esi_124 = eax_21;
		if (*eax_21 != 0x00)
		{
			do
			{
				*(esp_13 - 0x04) = *esi_124;
				word32 esp_135;
				word32 eax_137 = count_fdes(ebp_120, dwArg00, out esp_135, out ebp_120);
				*(ebp_120 - 0x0C) = *(ebp_120 - 0x0C) + eax_137;
				esp_13 = esp_135 + 0x04;
				esi_124 = esi_124 + 0x01;
			} while (*esi_124 != 0x00);
		}
	}
	else
	{
		word32 esp_148;
		word32 eax_150 = count_fdes(fp - 0x04, dwArg04->dw0008, out esp_148, out ebp_120);
		*(ebp_120 - 0x0C) = eax_150;
		esp_13 = esp_148 + 0x04;
	}
	ui32 eax_31 = *(ebp_120 - 0x0C);
	ebp_120->ptr0008->dw0010 = eax_31;
	union Eq_556 * esp_35 = esp_13 - 0x04;
	*esp_35 = (union Eq_556 *) (eax_31 << 0x02);
	word32 * eax_37 = malloc(*esp_35);
	*(ebp_120 - 0x08) = ~0x00;
	*(ebp_120 - 0x04) = 0x00;
	*(ebp_120 - 0x0C) = 0x00;
	word32 * edi_122 = eax_37;
	ptr32 esp_101 = (char *) esp_35 + 0x04;
	word32 * eax_45 = ebp_120->ptr0008->ptr000C;
	if (eax_45 != null)
	{
		word32 * esi_102 = eax_45;
		if (*eax_45 != 0x00)
		{
			*(ebp_120 - 0x10) = ebp_120 - 0x04;
			do
			{
				word32 * esp_80 = esp_101 - 0x04;
				*esp_80 = *(ebp_120 - 0x10);
				*(esp_80 - 0x04) = ebp_120 - 0x08;
				*(esp_80 - 0x08) = ebp_120 - 0x0C;
				*(esp_80 - 0x0C) = edi_122;
				*(esp_80 - 0x10) = *esi_102;
				struct Eq_767 * esi_98;
				esp_101 = add_fdes(ebp_120, edi_122, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10, out ebp_120, out esi_98, out edi_122) + 0x14;
				esi_102 = (word32 *) &esi_98->dw0004;
			} while (esi_98->dw0004 != 0x00);
		}
	}
	else
	{
		*esp_35 = (union Eq_556 *) (ebp_120 - 0x04);
		*(esp_35 - 0x04) = ebp_120 - 0x08;
		*(esp_35 - 0x08) = ebp_120 - 0x0C;
		*(esp_35 - 0x0C) = eax_37;
		*(esp_35 - 0x10) = ebp_120->ptr0008->dw0008;
		word32 esi_121;
		add_fdes(ebp_120, eax_37, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10, out ebp_120, out esi_121, out edi_122);
	}
	struct Eq_548 * edx_53 = ebp_120->ptr0008;
	edx_53->ptr000C = edi_122;
	edx_53->dw0000 = *(ebp_120 - 0x08);
	edx_53->dw0004 = *(ebp_120 - 0x04);
	word32 esi_62;
	*esiOut = *(ebp_120 - 0x18);
	word32 ebp_66;
	*ebpOut = ebp_120->dw0000;
	return &ebp_120->dw0000 + 0x01;
}

// 08048CF4: Register word32 find_fde(Register ptr32 ebp, Register out ptr32 espOut, Register out ptr32 ebpOut)
word32 find_fde(ptr32 ebp, ptr32 & espOut, ptr32 & ebpOut)
{
	word32 eax_117;
	struct Eq_498 * ebp_129 = fp - 0x04;
	ptr32 esp_13 = fp - 0x18;
	struct Eq_793 * esi_120 = globals->ptr804ACC8;
	if (esi_120 != null)
	{
l08048D14:
		if (esi_120->dw0000 == 0x00)
		{
			*(esp_13 - 0x04) = (struct Eq_793 **) esi_120;
			esp_13 = frame_init(ebp_129, dwArg00, out ebp_129, out esi_120) + 0x04;
		}
		uint32 ecx_80 = ebp_129->dw0008;
		if (esi_120->dw0000 > ecx_80 || esi_120->dw0004 <= ecx_80)
		{
			esi_120 = esi_120->ptr0014;
			if (esi_120 != null)
				goto l08048D14;
		}
		if (esi_120 != null)
		{
			uint32 ecx_90 = esi_120->dw0010;
			*(ebp_129 - 0x04) = ecx_90;
			uint32 edi_108 = 0x00;
			if (0x00 < ecx_90)
			{
				struct Eq_889 * esi_94[] = esi_120->ptr000C;
				do
				{
					uint32 eax_98 = *(ebp_129 - 0x04) + edi_108;
					struct Eq_889 * ecx_101 = esi_94[eax_98 >> 0x01];
					*(ebp_129 - 0x08) = (struct Eq_889 **) ecx_101;
					uint32 eax_103 = ecx_101->dw0008;
					if (ebp_129->dw0008 < eax_103)
						*(ebp_129 - 0x04) = eax_98 >> 0x01;
					else
					{
						if (ebp_129->dw0008 <= (char *) (*((char *) (*(ebp_129 - 0x08)) + 0x0C)) + eax_103)
						{
							eax_117 = *(ebp_129 - 0x08);
							goto l08048D89;
						}
						edi_108 = (eax_98 >> 0x01) + 0x01;
					}
				} while (*(ebp_129 - 0x04) > edi_108);
			}
		}
	}
	eax_117 = 0x00;
l08048D89:
	word32 * ebp_43 = ebp_129->ptr0000;
	return eax_117;
	word32 ebp_51;
	*ebpOut = *ebp_43;
	word32 esp_52;
	*espOut = ebp_43 + 0x01;
	return eax_117;
}

// 08048D94: Register ptr32 extract_cie_info(Stack ptr32 dwArg04, Stack ptr32 dwArg08)
ptr32 extract_cie_info(ptr32 dwArg04, ptr32 dwArg08)
{
	struct Eq_930 * edx_23 = dwArg04 - (dwArg04->dw0004 + ~0x03);
	dwArg08->ptr0000 = (byte *) &edx_23->b0009;
	byte al_31 = (byte) 0x080495BC;
	byte * esi_235 = &edx_23->b0009;
	word32 ecx_237 = 0x01;
	byte * edi_236 = &globals->b80495BC;
	bool Z_233 = cond(al_31 & 0x00);
	if (ecx_237 != 0x00)
	{
		Z_233 = cond(*esi_238 - *edi_239);
		esi_235 = esi_238 + 0x01;
		edi_236 = edi_239 + 0x01;
		ecx_237 = ecx_237 - 0x01;
		byte * esi_238 = esi_235;
		byte * edi_239 = edi_236;
		if (*esi_238 != *edi_239)
			goto l08048DD7;
	}
	ptr32 eax_161;
	if (!Z_233)
	{
		byte * esi_192 = &edx_23->b0009;
		byte * edi_193 = &globals->b80495BD;
		word32 ecx_194 = 0x03;
		bool Z_197 = cond(al_31 & 0x00);
		if (ecx_194 != 0x00)
		{
			Z_197 = cond(*esi_243 - *edi_244);
			esi_192 = esi_243 + 0x01;
			edi_193 = edi_244 + 0x01;
			ecx_194 = ecx_194 - 0x01;
			byte * esi_243 = esi_192;
			byte * edi_244 = edi_193;
			if (*esi_243 != *edi_244)
				goto l08048DEC;
		}
		if (!Z_197 && edx_23->b0009 != 122)
		{
			eax_161 = 0x00;
			return eax_161;
		}
	}
	byte * eax_83 = dwArg08->ptr0000;
	byte * edi_190 = eax_83;
	word32 ecx_191 = ~0x00;
	if (ecx_191 != 0x00)
	{
		edi_190 = edi_240 + 0x01;
		ecx_191 = ecx_191 - 0x01;
		byte * edi_240 = edi_190;
		if (0x00 == *edi_240)
			goto l08048E14;
	}
	struct Eq_1031 * eax_100 = eax_83 - 0x01 + ~ecx_191;
	ptr32 edx_104 = &eax_100->dw0001;
	byte * esi_105 = eax_83;
	byte * edi_107 = &globals->b80495BD;
	word32 ecx_109 = 0x03;
	bool Z_112 = cond((byte) eax_100 & 0x00);
	if (ecx_109 != 0x00)
	{
		Z_112 = cond(*esi_241 - *edi_242);
		esi_105 = esi_241 + 0x01;
		edi_107 = edi_242 + 0x01;
		ecx_109 = ecx_109 - 0x01;
		byte * esi_241 = esi_105;
		byte * edi_242 = edi_107;
		if (*esi_241 != *edi_242)
			goto l08048E3C;
	}
	if (!Z_112)
	{
		dwArg08->dw0004 = eax_100->dw0001;
		edx_104 = &eax_100->dw0001 + 0x01;
	}
	else
		dwArg08->dw0004 = 0x00;
	byte * eax_146 = decode_sleb128(decode_uleb128(edx_104, &dwArg08->dw0004 + 0x01), &dwArg08->dw0004 + 0x02);
	dwArg08->dw0010 = (word32) *eax_146;
	ptr32 edx_151 = eax_146 + 0x01;
	if (*dwArg08->ptr0000 == 122)
		edx_151 = decode_uleb128(eax_146 + 0x01, fp - 0x08) + dwLoc08;
	eax_161 = edx_151;
	return eax_161;
}

// 08048EAC: Register ptr32 execute_cfa_insn(Stack ptr32 dwArg04, Stack ptr32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10)
ptr32 execute_cfa_insn(ptr32 dwArg04, ptr32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	uint32 eax_25 = (word32) *dwArg04;
	ci8 al_26 = (byte) eax_25;
	ptr32 dwArg04_106 = dwArg04 + 0x01;
	if ((eax_25 & 0x40) != 0x00)
		*dwArg10 = *dwArg10 + (eax_25 & 0x3F) *s dwArg0C->dw0008;
	else if (al_26 < 0x00)
	{
		dwArg04_106 = decode_uleb128(dwArg04 + 0x01, fp - 0x08);
		int32 eax_108 = dwLoc08 *s dwArg0C->dw000C;
		(word32) (eax_25 & 0x3F) + 0x005C + dwArg08 = (byte *) 0x01;
		(&((eax_25 & 0x3F) * 0x04)->a0010->dw0000)[dwArg08 / 0x0010] = (struct Eq_1198) eax_108;
	}
	else
	{
		if ((al_26 & 0xC0) == 0x00)
		{
			if (eax_25 > 0x2E)
				abort();
			else
			{
				<anonymous> * ecx_134 = 0x0804A5C0 - (globals->a8048F6C)[eax_25 * 0x04];
				word32 esp_136;
				word32 ebp_137;
				byte SCZO_138;
				word32 edi_139;
				word32 esi_140;
				word32 ebx_141;
				word32 edx_142;
				word32 ecx_143;
				ptr32 eax_144;
				byte SZO_145;
				byte C_146;
				byte Z_147;
				byte al_148;
				byte SO_149;
				byte cl_150;
				byte CZ_151;
				ecx_134();
				return eax_144;
			}
		}
		(eax_25 & 0x3F)->a005C[dwArg08] = bLoc14;
	}
	return dwArg04_106;
}

// 0804923C: void __register_frame_info(Stack ptr32 dwArg04, Stack ptr32 dwArg08)
void __register_frame_info(ptr32 dwArg04, ptr32 dwArg08)
{
	dwArg08->dw0008 = dwArg04;
	dwArg08->dw0004 = 0x00;
	dwArg08->dw0000 = 0x00;
	dwArg08->dw000C = 0x00;
	dwArg08->dw0010 = 0x00;
	dwArg08->dw0014 = globals->ptr804ACC8;
	globals->ptr804ACC8 = dwArg08;
	return;
}

// 08049284: void __register_frame_info_table(Stack word32 dwArg04, Stack word32 dwArg08)
void __register_frame_info_table(word32 dwArg04, word32 dwArg08)
{
	dwArg08->dw0008 = dwArg04;
	dwArg08->dw000C = dwArg04;
	dwArg08->dw0004 = 0x00;
	dwArg08->dw0000 = 0x00;
	dwArg08->dw0010 = 0x00;
	dwArg08->dw0014 = globals->ptr804ACC8;
	globals->ptr804ACC8 = dwArg08;
	return;
}

// 080492C8: void __deregister_frame_info(Stack ptr32 dwArg04)
void __deregister_frame_info(ptr32 dwArg04)
{
	struct Eq_1303 * ecx_13 = &globals->ptr804ACC8;
	if (globals->ptr804ACC8 != 0x00)
	{
l080492EC:
		struct Eq_1315 * edx_23 = ecx_13->dw0000;
		if (edx_23->dw0008 == dwArg04)
		{
			ecx_13->dw0000 = edx_23->dw0014;
			if (edx_23->dw0000 != 0x00)
				free(edx_23->ptr000C);
			return;
		}
		ecx_13 = (struct Eq_1303 *) &edx_23->dw0014;
		if (edx_23->dw0014 != 0x00)
			goto l080492EC;
	}
	abort();
	abort();
}

// 08049320: void __frame_state_for(Register word32 ebp, Stack word32 dwArg04)
void __frame_state_for(word32 ebp, word32 dwArg04)
{
	union Eq_556 * esp_23;
	struct Eq_1352 * ebp_24;
	word32 eax_25 = find_fde(fp - 0x04, out esp_23, out ebp_24);
	*(ebp_24 - 0x94) = eax_25;
	if (eax_25 != 0x00)
	{
		*(ebp_24 - 0x98) = ebp_24 - 0x14;
		*esp_23 = (union Eq_556 *) (ebp_24 - 0x14);
		*(esp_23 - 0x04) = *(ebp_24 - 0x94);
		uint32 eax_61 = extract_cie_info(dwArg00, dwArg04);
		uint32 esi_169 = eax_61;
		if (eax_61 != 0x00)
		{
			*esp_23 = 116;
			*(esp_23 - 0x04) = 0x00;
			*(ebp_24 - 0x9C) = ebp_24 - 0x88;
			*(esp_23 - 0x08) = ebp_24 - 0x88;
			memset(*(esp_23 - 0x08), *(esp_23 - 0x04), *esp_23);
			*(ebp_24 - 0x2E) = (word16) *(ebp_24 - 0x04);
			*(ebp_24 - 0x84) = *(ebp_24 - 0x10);
			struct Eq_1461 * ecx_82 = *(ebp_24 - 0x94);
			word32 * ecx_85 = ecx_82 - (ecx_82->dw0004 + ~0x03);
			uint32 eax_87 = ecx_85 + *ecx_85;
			if (eax_61 < eax_87 + 0x04)
			{
				*(ebp_24 - 0xA0) = *(ebp_24 - 0x98);
				*(ebp_24 - 0xA4) = *(ebp_24 - 0x9C);
				do
				{
					*esp_23 = 0x00;
					*(esp_23 - 0x04) = *(ebp_24 - 0xA0);
					*(esp_23 - 0x08) = *(ebp_24 - 0xA4);
					*(esp_23 - 0x0C) = esi_169;
					uint32 eax_180 = execute_cfa_insn(dwArg00, dwArg04, dwArg08, dwArg0C);
					esi_169 = eax_180;
				} while (eax_180 < eax_87 + 0x04);
			}
			word32 esi_94 = *(ebp_24 - 0x94);
			uint32 esi_100 = esi_94 + 0x10;
			if (**(ebp_24 - 0x14) == 122)
			{
				*esp_23 = (union Eq_556 *) (ebp_24 - 0x8C);
				*(esp_23 - 0x04) = esi_94 + 0x10;
				esi_100 = decode_uleb128(dwArg00, dwArg04) + *(ebp_24 - 0x8C);
			}
			word32 * eax_101 = *(ebp_24 - 0x94);
			uint32 eax_102 = eax_101 + *eax_101;
			*(ebp_24 - 0x90) = *((char *) *(ebp_24 - 0x94) + 0x08);
			if (esi_100 < eax_102 + 0x04)
			{
				*(ebp_24 - 0xA8) = ebp_24 - 0x90;
				do
				{
					if (*(ebp_24 - 0x90) > ebp_24->dw0008)
						goto l0804946B;
					*esp_23 = *(ebp_24 - 0xA8);
					*(esp_23 - 0x04) = ebp_24 - 0x14;
					*(esp_23 - 0x08) = ebp_24 - 0x88;
					*(esp_23 - 0x0C) = esi_100;
					uint32 eax_149 = execute_cfa_insn(dwArg00, dwArg04, dwArg08, dwArg0C);
					esi_100 = eax_149;
				} while (eax_149 < eax_102 + 0x04);
			}
l0804946B:
			word32 * edi_114 = ebp_24->ptr000C;
			word32 * esi_115 = ebp_24 - 0x88;
			word32 ecx_117 = 0x1C;
			while (ecx_117 != 0x00)
			{
				*edi_114 = *esi_115;
				esi_115 = esi_115 + 0x01;
				edi_114 = edi_114 + 0x01;
				ecx_117 = ecx_117 - 0x01;
			}
		}
	}
	return;
}

// 0804948C: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	word32 * esi_15 = &globals->dw804A698;
	if (globals->dw804A698 != ~0x00)
	{
		do
		{
			<anonymous> * eax_30 = *esi_15;
			word32 esp_31;
			word32 ebp_32;
			struct Eq_1689 * esi_33;
			word32 ebx_34;
			byte SCZO_35;
			word32 eax_36;
			byte Z_37;
			eax_30();
			esi_15 = (word32 *) &esi_33->dwFFFFFFFC;
		} while (esi_33->dwFFFFFFFC != ~0x00);
	}
	return;
}

// 080494C0: void init_dummy()
void init_dummy()
{
	return;
}

// 080494E0: void _init()
void _init()
{
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 08049510: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}
