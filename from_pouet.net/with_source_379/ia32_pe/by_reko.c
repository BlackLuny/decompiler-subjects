// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00401000: void fn00401000()
void fn00401000()
{
	Eq_2 edx_20 = globals->t402104;
	Eq_5 bl_21 = 0x00;
	do
	{
		if (bl_21 >= 0x80)
			*edx_20 = bl_21 << 0x01;
		struct Eq_7 * edx_15 = (word32) edx_20 + 0x01;
		edx_15->t0000 = bl_21 << 0x01;
		edx_15->t0001 = bl_21 << 0x01;
		edx_20 = (char *) &edx_15->t0001 + 0x02;
		bl_21 = (word32) bl_21 + 0x01;
	} while (bl_21 != 0x00);
	return;
}

// 00401020: void fn00401020()
void fn00401020()
{
	Eq_31 edi_32 = globals->t402124;
	byte ch_33 = 0x02;
	word16 cx_36 = DPB(cx, 0x02, 8);
	do
	{
		*edi_32 = ((word32) (((word16) ch_33 << 0x06) + cx_36))->b402146;
		cx_36 = cx_36 + 0x01;
		edi_32 = (word32) edi_32 + 0x01;
		ch_33 = SLICE(cx_36, byte, 8);
	} while (cx_36 != 0x0B00);
	return;
}

// 00401052: void fn00401052(FpuStack real64 rArg0)
void fn00401052(real64 rArg0)
{
	globals->w402140 = globals->w402140 + 0x01;
	ptr32 esp_198 = fp - 0x20;
	word32 eax_126 = 0x00;
	word16 cx_117 = 0x00;
	word16 bx_161 = 0x00;
	ptr32 ebx_162 = 0x00;
	byte bl_163 = 0x00;
	byte bh_164 = 0x00;
	do
	{
		byte al_75 = bl_163;
		word32 eax_100 = DPB(eax_126, bl_163, 0);
		int16 dx_78 = 0xF200;
		do
		{
			int16 ax_90 = (int16) (al_75 - 0x80);
			globals->w402144 = ax_90;
			bi8 al_91 = (byte) ax_90;
			dx_78 = dx_78 - al_91 *s al_91;
			cu8 dh_96 = SLICE(dx_78, byte, 8);
			real64 rLoc1_98 = (real64) globals->w402144;
			al_75 = bh_164;
			eax_100 = DPB(eax_530, bh_164, 0);
			word32 eax_530 = eax_100;
		} while (P);
		rArg0 = atan(rArg0, rLoc1_98) * (real64) globals->w40213E;
		globals->w402144 = (int16) rArg0;
		int16 ax_110 = globals->w402144;
		globals->w402144 = dx_78;
		word16 ax_112 = ax_110 + globals->w40213F;
		cui16 ax_119 = DPB(ax_112, dh_96, 0);
		bcu8 ah_113 = SLICE(ax_112, byte, 8);
		uint8 cl_115 = 0x00;
		cx_117 = DPB(cx_117, 0x00, 0);
		eax_126 = DPB(eax_530, dh_96, 0);
		byte dh_129 = (byte) (ax_119 & 0x0707) + SLICE(ax_119 & 0x0707, byte, 8) + dh_96;
		if (dh_96 <= ~0x13 && dh_96 >= ~0x14)
		{
			cl_115 = ah_113 >> 0x01;
			cx_117 = DPB(cx_117, ah_113 >> 0x01, 0);
			dh_129 = SLICE(globals->w402144 << 0x05, byte, 8) + 0x60;
		}
		if (dh_96 <= ~0x19)
		{
			cx_117 = DPB(cx_117, ah_113 & 0x1F, 8);
			if ((ah_113 & 0x1F) <= 0x03)
			{
				if (dh_96 >= 229)
				{
					dh_129 = __ror(dh_96, 0x03) + 0x1E;
					cx_117 = cx_117 - 0x01;
					cl_115 = (byte) (cx_117 - 0x01);
				}
				dh_129 = dh_129 - 0x14;
			}
			if (dh_96 <= 0xB2)
			{
				cx_117 = cx_117 - 0x01;
				cl_115 = (byte) cx_117;
			}
		}
		*((char *) globals->t40211C + ebx_162) = (Eq_155) cl_115;
		*((char *) globals->t402120 + ebx_162) = (Eq_161) (dh_129 + 0x80);
		bx_161 = bx_161 + 0x01;
		ebx_162 = DPB(ebx_162, bx_161, 0);
		bl_163 = (byte) bx_161;
		bh_164 = SLICE(bx_161, byte, 8);
	} while (bx_161 != 0x00);
	Eq_194 edi_167 = 0x0003E800;
	word16 si_169 = 100;
	do
	{
		globals->w402142 = ~0x9F;
		do
		{
			struct Eq_207 * esp_215 = esp_198 - 0x04;
			esp_215->t0000 = edi_167;
			int32 dx_ax_224 = (int32) (int16) (byte) (globals->w402140 << 0x01);
			bi8 al_228 = ((byte) dx_ax_224 & 0x7F) - 0x40;
			int16 ax_229 = al_228 *s al_228;
			int16 ax_232 = DPB(ax_229, SLICE(ax_229, byte, 8) - 0x10, 8);
			ui16 dx_233 = SLICE(dx_ax_224, word16, 16) ^ ax_232;
			word16 cx_217 = 0x7F40;
			ui32 eax_239 = DPB(eax_126, SLICE(ax_232 * 0x02, byte, 8) - 0x01, 8);
			ui16 dx_243 = DPB(dx_233, SLICE(dx_233, byte, 8) + 0x20, 8);
l00401157:
			cx_217 = cx_217 + globals->w402142;
			ebx_162 = DPB(ebx_162, SLICE(cx_217, byte, 8), 0);
			dx_243 = dx_243 + si_169;
			byte al_273 = *((char *) globals->t402120 + ebx_162);
			cu8 dh_264 = SLICE(dx_243, byte, 8);
			ci8 ah_271 = *((char *) globals->t40211C + ebx_162);
			eax_239 = DPB(eax_239, al_273, 0);
			if (ah_271 >= 0x00)
			{
				if (ah_271 != 0x00)
				{
					ebx_162 = DPB(ebx_162, dh_264 >> 0x01, 8);
					byte ah_454 = *((word32) globals->t402124 + ebx_162);
					eax_239 = DPB(eax_239, ah_454, 8);
					if (ah_454 != 0x00)
					{
						eax_239 = DPB(eax_239, al_273 + 0x80, 0);
						break;
					}
				}
				if (dh_264 <= 0x46)
					goto l00401157;
			}
			ui32 eax_300 = *((word32) globals->t402104 + (eax_239 & 0xFF) * 0x04);
			Mem301[Mem216[esp_215 + 0x00:word32] + Mem216[0x00402100:word32]:word32] = eax_300;
			globals->w402142 = globals->w402142 + 0x01;
			Eq_224 edi_307 = esp_215->t0004;
			eax_126 = (word32) *((word32) globals->t402104 + (eax_300 & 0xFF) * 0x04);
			Mem314[edi_307 + Mem304[0x00402100:word32]:word32] = eax_126;
			globals->w402142 = globals->w402142 + 0x01;
			esp_198 = &esp_215->dw0008;
			edi_167 = edi_307 - 0x04;
		} while (globals->w402142 != 0xA0);
		word16 si_321 = si_169 - 0x01;
		si_169 = si_321 - 0x01;
	} while (si_321 != ~0x62);
	esp_215->t0024.u0 = 0x004020F0;
	esp_215->t0020 = globals->t4020CC;
	GetClientRect(esp_215->t0020, esp_215->t0024);
	esp_215->t0024.u0 = 0x00CC0020;
	&esp_215->t0020.u0->unused = 0x00;
	esp_215->ptr001C = &globals->t40206C;
	esp_215->t0018 = globals->t402100;
	esp_215->t0014 = (struct HDC__ *) 200;
	esp_215->dw0010 = 0x0140;
	esp_215->dw000C = 0x00;
	esp_215->dw0008 = 0x00;
	esp_215->t0004 = globals->t4020FC;
	esp_215->t0000 = globals->t4020F8;
	*(esp_215 - 0x04) = 0x00;
	*(esp_215 - 0x08) = 0x00;
	*(esp_215 - 0x0C) = (HDC *) globals->t4020D0;
	StretchDIBits(*(esp_215 - 0x0C), *(esp_215 - 0x08), *(esp_215 - 0x04), esp_215->t0000, esp_215->t0004, esp_215->dw0008, esp_215->dw000C, esp_215->dw0010, esp_215->t0014, esp_215->t0018, esp_215->ptr001C, esp_215->t0020, esp_215->t0024);
	return;
	esp_215->t0044.u0 = 0x004020F0;
	esp_215->t0040 = globals->t4020CC;
	GetClientRect(esp_215->t0040, esp_215->t0044);
	esp_215->t0044.u0 = 0x00CC0020;
	&esp_215->t0040.u0->unused = 0x00;
	esp_215->ptr003C = &globals->t40206C;
	esp_215->t0038 = globals->t402100;
	esp_215->t0034 = (struct HDC__ *) 200;
	esp_215->dw0030 = 0x0140;
	esp_215->dw002C = 0x00;
	esp_215->dw0028 = 0x00;
	esp_215->t0024 = globals->t4020FC;
	esp_215->t0020 = globals->t4020F8;
	esp_215->ptr001C = null;
	esp_215->t0018.u0 = 0x00;
	esp_215->t0014 = globals->t4020D0;
	StretchDIBits(esp_215->t0014, esp_215->t0018, esp_215->ptr001C, esp_215->t0020, esp_215->t0024, esp_215->dw0028, esp_215->dw002C, esp_215->dw0030, esp_215->t0034, esp_215->t0038, esp_215->ptr003C, esp_215->t0040, esp_215->t0044);
	return;
}

// 00401230: Register Eq_224 Win32CrtStartup()
Eq_224 Win32CrtStartup()
{
	Eq_2 eax_6 = GlobalAlloc(0x00, 1000000);
	if (eax_6 != 0x00)
	{
		globals->t40210C = eax_6;
		globals->t402104 = eax_6;
		Mem88[0x00402100:word32] = eax_6 + 2000;
		Mem90[0x0040211C:word32] = eax_6 + 402000;
		Mem92[0x00402120:word32] = eax_6 + 602000;
		Mem95[0x00402124:word32] = eax_6 + 702000;
		word32 ebx_103 = 499999;
		do
		{
			*globals->t40210C = 0x00;
			ebx_103 = ebx_103 - 0x01;
		} while (ebx_103 != 0x00);
		globals->t4020B4 = GetModuleHandleW(null);
		globals->t4020B8 = LoadIconW(0x00, (WCHAR *) 0x7F00);
		Eq_671 eax_122 = LoadCursorW(0x00, (WCHAR *) 0x7F00);
		globals->t4020BC = eax_122;
		if (DPB(eax_122, RegisterClassW(&globals->t4020A4), 0) != null)
		{
			Eq_194 eax_157 = CreateWindowExW(0x00, &globals->t402000, &globals->t402012, 0x10CF0000, 0x8000, 0x8000, 0x021C, 400, 0x00, null, globals->t4020B4, null);
			if (eax_157 != 0x00)
			{
				globals->t4020CC = eax_157;
				globals->t4020D0 = GetDC(eax_157);
				fn00401000();
				fn00401020();
				fn00401052(rArg0);
				*(fp - 0x04) = 0x04;
				*(fp - 0x08) = (HDC *) globals->t4020D0;
				SetStretchBltMode(*(fp - 0x08), *(fp - 0x04));
				while (true)
				{
					*(fp - 0x04) = 0x01;
					*(fp - 0x08) = 0x00;
					*(fp - 0x0C) = 0x00;
					*(fp - 0x10) = 0x00;
					*(fp - 0x14) = 0x004020D4;
					PeekMessageW(*(fp - 0x14), *(fp - 0x10), *(fp - 0x0C), *(fp - 0x08), *(fp - 0x04));
					if (globals->dw4020D8 == 0x12)
						break;
					*(fp - 0x04) = 0x004020D4;
					TranslateMessage(*(fp - 0x04));
					*(fp - 0x04) = 0x004020D4;
					DispatchMessageW(*(fp - 0x04));
					fn00401052(rArg1);
					globals->dw402108 = globals->dw402108 + 0x01;
				}
l0040138C:
				*(fp - 0x04) = (HDC *) globals->t4020D0;
				*(fp - 0x08) = (union Eq_194 *) globals->t4020CC;
				ReleaseDC(*(fp - 0x08), *(fp - 0x04));
				*(fp - 0x04) = (union Eq_2 *) globals->t40210C;
				GlobalFree(*(fp - 0x04));
				*(fp - 0x04) = globals->dw4020DC;
				ExitProcess(*(fp - 0x04));
			}
		}
	}
	MessageBoxW(0x00, &globals->t40204C, null, 0x10);
	goto l0040138C;
}
