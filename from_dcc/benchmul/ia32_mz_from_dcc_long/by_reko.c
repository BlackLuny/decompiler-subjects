// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0800:01FA: void main(Register (ptr Eq_3) ds)
void main(Eq_3 * ds)
{
	word16 di_15;
	ui16 bx_16 = fn0800_0E5B(ds, 404, out di_15);
	word16 di_25;
	fn0800_16E4(bx_16, di_15, ds, 0x01B0, out di_25);
	word16 di_42;
	ui16 bx_43 = fn0800_0E5B(ds, 0x01B4, out di_42);
	word16 di_52;
	ui16 bx_53 = fn0800_16E4(bx_43, di_42, ds, 0x01CE, out di_52);
	word16 di_64;
	fn0800_16E4(bx_53, di_52, ds, 0x01D1, out di_64);
	ci16 wLoc08_105 = 0x00;
	cu16 wLoc0A_100 = 0x01;
	while (wLoc08_105 < wLoc04 || wLoc08_105 <= wLoc04 && wLoc0A_100 <= wLoc06)
	{
		ci16 si_161 = 0x01;
		while (si_161 <= 0x28)
			si_161 = si_161 + 0x01;
		wLoc0A_100 = wLoc0A_100 + 0x01;
		wLoc08_105 = v18;
	}
	word16 di_171;
	fn0800_0E5B(ds, 0x01D4, out di_171);
	return;
}

// 0800:0E5B: Register word16 fn0800_0E5B(Register (ptr Eq_3) ds, Stack word16 wArg02, Register out ptr16 diOut)
word16 fn0800_0E5B(Eq_3 * ds, word16 wArg02, ptr16 & diOut)
{
	word16 di_20;
	word16 bx_21 = fn0800_1083(ds, fp + 0x04, wArg02, out di_20);
	return bx_21;
}

// 0800:1083: Register word16 fn0800_1083(Register (ptr Eq_3) ds, Stack mp16 wArg02, Stack word16 wArg04, Register out ptr16 diOut)
word16 fn0800_1083(Eq_3 * ds, mp16 wArg02, word16 wArg04, ptr16 & diOut)
{
	ci8 bLoc57_110 = 0x50;
	mp16 sp_17 = fp - 0xA0;
	byte Eq_3::* di_108 = fp - 0x56;
	byte Eq_3::* si_106 = wArg04;
l0800_10ED:
	byte al_40 = ds->*si_106;
	si_106 = si_106 + 0x01;
	byte al_102 = al_40;
	ax = DPB(ax, al_40, 0);
	if (al_40 == 0x00)
	{
		if (bLoc57_110 < 0x50)
		{
			byte Eq_3::* di_94;
			fn0800_10B1(fp - 0x02, di_108, out di_94);
			word16 di_96;
			bx = fn0800_10B1(fp - 0x02, di_94, out di_96);
		}
		word16 Eq_170::* sp_81 = sp_17 + 0x02;
		word16 di_85;
		*diOut = ss->*sp_81;
		return bx;
	}
	if (al_40 != 0x25)
	{
l0800_10F6:
		ds->*di_108 = al_102;
		ci8 v15_109 = bLoc57_110 - 0x01;
		di_108 = di_108 + 0x01;
		bLoc57_110 = v15_109;
		if (v15_109 <= 0x00)
			bx = fn0800_10B1(fp - 0x02, di_108, out di_108);
		goto l0800_10ED;
	}
	al_102 = ds->*si_106;
	ax = DPB(ax, al_102, 0);
	si_106 = si_106 + 0x01;
	if (al_102 == 0x25)
		goto l0800_10F6;
	cu8 ch_124 = 0x00;
	byte bLoc8F_129 = 0x00;
l0800_1130:
	word16 ax_149 = DPB(ax, 0x00, 8);
	cu8 bl_153 = (byte) ax_149;
	byte dl_151 = (byte) ax_149;
	struct Eq_163 Eq_3::* bx_155 = DPB(ax_149, bl_153 - 0x20, 0);
	if (bl_153 < 0x80)
	{
		cu16 bx_195 = DPB(ax_149, (ds->*bx_155).b04FB, 0);
		cu16 ax_196 = bx_195;
		if (bx_195 > 0x17)
		{
l0800_1570:
			byte Eq_3::* si_167 = si_106;
			byte al_169 = 0x25;
			do
			{
				bx = fn0800_10A9(al_169, fp - 0x02, di_108, ds, out di_108);
				byte al_180 = ds->*si_167;
				sp_17 = sp_17 + ~0x01;
				si_167 = si_167 + 0x01;
				al_169 = al_180;
			} while (al_180 != 0x00);
			break;
		}
		switch (fp - 0xA0)
		{
		case 0x00:
			if (ch_124 <= 0x00)
				goto l0800_11A5;
			break;
		case 0x01:
			if (ch_124 <= 0x00)
				goto l0800_112F;
			break;
		case 0x02:
			ax_196 = ds->*wArg02;
			wArg02 = wArg02 + 0x01;
			if (ch_124 < 0x02)
				goto l0800_11EF;
			goto l0800_11F8;
		case 0x03:
			if (ch_124 <= 0x00)
				goto l0800_112F;
			break;
		}
	}
	goto l0800_1570;
}

// 0800:10A9: Register word16 fn0800_10A9(Register byte al, Register (memptr (ptr Eq_239) Eq_125) bp, Register (memptr (ptr Eq_3) byte) di, Register (ptr Eq_3) ds, Register out Eq_193 diOut)
word16 fn0800_10A9(byte al, Eq_125 Eq_239::*bp, byte Eq_3::*di, Eq_3 * ds, Eq_193 & diOut)
{
	ds->*di = al;
	ci8 v9_9 = ss->*(bp - 0x55) - 0x01;
	ss->*(bp - 0x55) = v9_9;
	word16 di_6;
	*diOut = di + 0x01;
	if (v9_9 <= 0x00)
		return bx;
	else
	{
		byte Eq_3::* di_15;
		return fn0800_10B1(bp, di + 0x01, out di_15);
	}
}

// 0800:10B1: Register word16 fn0800_10B1(Register (memptr (ptr Eq_239) Eq_125) bp, Register (memptr (ptr Eq_3) byte) di, Register out Eq_127 diOut)
word16 fn0800_10B1(Eq_125 Eq_239::*bp, byte Eq_3::*di, Eq_127 & diOut)
{
	struct Eq_268 Eq_270::* sp_30;
	word16 bx_31;
	struct Eq_270 * ss_32;
	word16 cx_33;
	word16 dx_34;
	struct Eq_273 * es_35;
	union Eq_290 Eq_270::* bp_36;
	word16 ax_37;
	word16 di_38;
	byte SCZO_39;
	struct Eq_278 * cs_40;
	byte SZO_41;
	byte C_42;
	byte Z_43;
	(cs->*(ss->*bp).ptr000A)();
	if (ax_37 == 0x00)
		(ss_32->*(bp_36 - 0x02)).u1 = 0x01;
	(ss_32->*(bp_36 - 0x55)).u0 = 0x50;
	(ss_32->*(bp_36 - 88)).u1 = (word16) (ss_32->*(bp_36 - 88)).u1 + di_38;
	word16 di_52;
	*diOut = bp_36 - 0x54;
	word16 bx_59 = (ss_32->*sp_30).w0006;
	return bx_59;
}

// 0800:16E4: Register ui16 fn0800_16E4(Register ui16 bx, Register word16 di, Register (ptr Eq_3) ds, Stack word16 wArg02, Register out ptr16 diOut)
ui16 fn0800_16E4(ui16 bx, word16 di, Eq_3 * ds, word16 wArg02, ptr16 & diOut)
{
	*diOut = di;
	ui16 bx_25 = fn0800_1703(bx, di, ds, 0x0344, wArg02);
	return bx_25;
}

// 0800:1703: Register ui16 fn0800_1703(Register ui16 bx, Register word16 di, Register (ptr Eq_3) ds, Stack word16 wArg06, Stack word16 wArg08)
ui16 fn0800_1703(ui16 bx, word16 di, Eq_3 * ds, word16 wArg06, word16 wArg08)
{
	struct Eq_333 Eq_357::* bp_153 = fp - 0x02;
	mp16 sp_101 = fp - 0x32;
	byte Eq_3::* si_156 = wArg08;
l0800_1736:
	byte al_53 = ds->*si_156;
	byte Eq_3::* si_54 = si_156 + 0x01;
	if (al_53 == 0x00)
		return bx;
	if (al_53 != 0x25)
	{
		union Eq_356 Eq_357::* sp_148 = sp_101 - 0x02;
		ss->*sp_148 = wArg06;
		union Eq_356 Eq_357::* sp_152;
		byte SCZO_155;
		Eq_356 di_157;
		struct Eq_364 * es_158;
		byte D_159;
		byte al_160;
		byte SZO_162;
		byte C_163;
		byte Z_164;
		Eq_356 ax_165;
		word16 cx_167;
		byte SO_168;
		byte S_169;
		byte bl_171;
		byte bh_172;
		byte CZ_173;
		(cs->*bp_153[0x02])();
		sp_101 = (char *) sp_152 + 0x02;
		Eq_356 ax_176 = ax_165;
		if (ax_165 >= 0x00)
		{
			if (di_157 < 0x00 || ds->*((word16) di_157 + 0x055C) != 0x01)
			{
				if (ax_165 == di_157)
					goto l0800_1736;
				ss->*sp_152 = wArg06;
				ss->*(sp_152 - 0x02) = ax_165;
				word16 sp_215;
				word16 bp_216;
				struct Eq_525 * ss_217;
				byte SCZO_218;
				word16 si_219;
				word16 di_220;
				struct Eq_529 * es_221;
				byte D_222;
				byte al_223;
				struct Eq_532 * ds_224;
				byte SZO_225;
				byte C_226;
				byte Z_227;
				word16 ax_228;
				struct Eq_537 * cs_229;
				word16 cx_230;
				byte SO_231;
				byte S_232;
				byte bl_234;
				byte bh_235;
				byte CZ_236;
				(cs->*bp_153[0x03])();
				return bx;
			}
			do
			{
				ci8 bl_267 = (byte) ax_176;
				Eq_356 bx_270 = DPB(ax_176, bl_267, 0);
				if (bl_267 < 0x00 || ds->*((word16) bx_270 + 0x055C) != 0x01)
				{
					union Eq_356 Eq_357::* sp_275 = sp_101 - 0x02;
					ss->*sp_275 = wArg06;
					ss->*(sp_275 - 0x02) = bx_270;
					word16 sp_279;
					byte SCZO_282;
					word16 di_284;
					struct Eq_415 * es_285;
					byte D_286;
					byte al_287;
					byte SZO_289;
					byte C_290;
					byte Z_291;
					word16 ax_292;
					word16 cx_294;
					byte SO_295;
					byte S_296;
					byte bl_298;
					byte bh_299;
					byte CZ_300;
					(cs->*bp_153[0x03])();
					sp_101 = sp_279 + 0x04;
					goto l0800_1736;
				}
				union Eq_356 Eq_357::* sp_314 = sp_101 - 0x02;
				ss->*sp_314 = wArg06;
				word16 sp_316;
				byte SCZO_319;
				word16 si_320;
				word16 di_321;
				struct Eq_449 * es_322;
				byte D_323;
				byte al_324;
				byte SZO_326;
				byte C_327;
				byte Z_328;
				Eq_356 ax_329;
				word16 cx_331;
				byte SO_332;
				byte S_333;
				word16 bx_334;
				byte bl_335;
				byte bh_336;
				byte CZ_337;
				(cs->*bp_153[0x02])();
				sp_101 = sp_316 + 0x02;
				ax_176 = ax_329;
			} while (ax_329 > 0x00);
		}
	}
	else
	{
		int16 ax_348 = (int16) (ds->*si_54);
		if (ax_348 < 0x00)
			goto l0800_17F6;
		cu16 bx_366 = DPB(bx, 0x00, 8);
		if (bx_366 <= 0x15)
		{
			bx = bx_366 << 0x01;
			switch (ax_348)
			{
			case 0x00:
				break;
			}
			return bx;
		}
	}
	union Eq_356 Eq_357::* sp_104 = sp_101 - 0x02;
	ss->*sp_104 = wArg06;
	(ss->*(sp_104 - 0x02)).u0 = ~0x00;
	word16 sp_109;
	word16 bp_110;
	struct Eq_485 * ss_111;
	byte SCZO_112;
	word16 si_113;
	word16 di_114;
	struct Eq_489 * es_115;
	byte D_116;
	byte al_117;
	struct Eq_492 * ds_118;
	byte SZO_119;
	byte C_120;
	byte Z_121;
	word16 ax_122;
	struct Eq_497 * cs_123;
	word16 cx_124;
	byte SO_125;
	byte S_126;
	byte bl_128;
	byte bh_129;
	byte CZ_130;
	(cs->*bp_153[0x03])();
	return bx;
}
