// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0800:01FA: void main(Register word16 bp, Register Eq_5 si, Register Eq_5 di, Register (ptr Eq_7) ds)
void main(word16 bp, Eq_5 si, Eq_5 di, Eq_7 * ds)
{
	Eq_8 dx_16 = false;
	fn0800_08C3(~0x8E, dx_16, 0x00 - dx_16, 0x018E);
	Eq_21 dx_48;
	Eq_5 bp_49;
	Eq_5 si_50;
	Eq_5 di_51;
	Eq_21 ax_52 = fn0800_10C6(fp - 0x02, si, di, out dx_48, out bp_49, out si_50, out di_51);
	ss->*(bp_49 - 0x02) = dx_48;
	ss->*(bp_49 - 0x04) = ax_52;
	ss->*(fp - 0x0C) = ss->*(bp_49 - 0x06);
	ss->*(fp - 0x0E) = ss->*(bp_49 - 0x08);
	ss->*(fp - 0x10) = ss->*(bp_49 - 0x02);
	ss->*(fp - 0x12) = ss->*(bp_49 - 0x04);
	Eq_21 dx_69;
	union Eq_21 Eq_43::* bp_70;
	Eq_21 ax_71 = fn0800_10CF(bp_49, si_50, di_51, out dx_69, out bp_70);
	ss->*(bp_70 - 0x02) = dx_69;
	ss->*(bp_70 - 0x04) = ax_71;
	Eq_21 dx_77;
	Eq_21 ax_78 = fn0800_1187(ss->*(bp_70 - 0x08), 0x05, ss->*(bp_70 - 0x06), out dx_77);
	ss->*(bp_70 - 0x06) = dx_77;
	ss->*(bp_70 - 0x08) = ax_78;
	Eq_21 dx_84;
	Eq_21 ax_85 = fn0800_1169(ss->*(bp_70 - 0x04), ss->*(bp_70 - 0x08), ss->*(bp_70 - 0x02), out dx_84);
	ss->*(bp_70 - 0x02) = dx_84;
	ss->*(bp_70 - 0x04) = ax_85;
	ss->*(fp - 0x14) = ss->*(bp_70 - 0x02);
	ss->*(fp - 22) = ss->*(bp_70 - 0x04);
	ss->*(fp - 0x18) = ss->*(bp_70 - 0x06);
	ss->*(fp - 0x1A) = ss->*(bp_70 - 0x08);
	(ss->*(fp - 0x1C)).u0 = 404;
	fn0800_097B(ds, wArg00);
	return;
}

// 0800:08C3: void fn0800_08C3(Register word16 ax, Register Eq_8 cx, Register word16 dx, Register word16 bx)
void fn0800_08C3(word16 ax, Eq_8 cx, word16 dx, word16 bx)
{
	return;
}

// 0800:097B: void fn0800_097B(Register (ptr Eq_7) ds, Stack word16 wArg02)
void fn0800_097B(Eq_7 * ds, word16 wArg02)
{
	fn0800_0BA3(ds, fp + 0x04, wArg02);
	return;
}

// 0800:0BA3: void fn0800_0BA3(Register (ptr Eq_7) ds, Stack mp16 wArg02, Stack word16 wArg04)
void fn0800_0BA3(Eq_7 * ds, mp16 wArg02, word16 wArg04)
{
	ci8 bLoc57_100 = 0x50;
	byte Eq_7::* di_102 = fp - 0x56;
	byte Eq_7::* si_106 = wArg04;
l0800_0C0D:
	byte al_36 = ds->*si_106;
	si_106 = si_106 + 0x01;
	byte al_104 = al_36;
	ax = DPB(ax, al_36, 0);
	if (al_36 == 0x00)
	{
		if (bLoc57_100 < 0x50)
			fn0800_0BD1(fp - 0x02, fn0800_0BD1(fp - 0x02, di_102));
		return;
	}
	if (al_36 != 0x25)
	{
l0800_0C16:
		ds->*di_102 = al_104;
		ci8 v15_99 = bLoc57_100 - 0x01;
		di_102 = di_102 + 0x01;
		bLoc57_100 = v15_99;
		if (v15_99 <= 0x00)
			di_102 = fn0800_0BD1(fp - 0x02, di_102);
		goto l0800_0C0D;
	}
	al_104 = ds->*si_106;
	ax = DPB(ax, al_104, 0);
	si_106 = si_106 + 0x01;
	if (al_104 == 0x25)
		goto l0800_0C16;
	cu8 ch_112 = 0x00;
	byte bLoc8F_117 = 0x00;
l0800_0C50:
	word16 ax_137 = DPB(ax, 0x00, 8);
	cu8 bl_141 = (byte) ax_137;
	byte dl_139 = (byte) ax_137;
	struct Eq_319 Eq_7::* bx_143 = DPB(ax_137, bl_141 - 0x20, 0);
	if (bl_141 < 0x80)
	{
		cu16 bx_181 = DPB(ax_137, (ds->*bx_143).b03C1, 0);
		cu16 ax_182 = bx_181;
		if (bx_181 > 0x17)
		{
l0800_1090:
			byte Eq_7::* si_155 = si_106;
			byte al_157 = 0x25;
			do
			{
				di_102 = fn0800_0BC9(al_157, fp - 0x02, di_102, ds);
				byte al_166 = ds->*si_155;
				si_155 = si_155 + 0x01;
				al_157 = al_166;
			} while (al_166 != 0x00);
			break;
		}
		switch (fp - 0xA0)
		{
		case 0x00:
			if (ch_112 <= 0x00)
				goto l0800_0CC5;
			break;
		case 0x01:
			if (ch_112 <= 0x00)
				goto l0800_0C4F;
			break;
		case 0x02:
			ax_182 = ds->*wArg02;
			wArg02 = wArg02 + 0x01;
			if (ch_112 < 0x02)
				goto l0800_0D0F;
			goto l0800_0D18;
		case 0x03:
			if (ch_112 <= 0x00)
				goto l0800_0C4F;
			break;
		}
	}
	goto l0800_1090;
}

// 0800:0BC9: Register (memptr (ptr Eq_7) byte) fn0800_0BC9(Register byte al, Register (memptr (ptr Eq_385) Eq_290) bp, Register (memptr (ptr Eq_7) byte) di, Register (ptr Eq_7) ds)
byte Eq_7::*fn0800_0BC9(byte al, Eq_290 Eq_385::*bp, byte Eq_7::*di, Eq_7 * ds)
{
	ds->*di = al;
	ci8 v9_9 = ss->*(bp - 0x55) - 0x01;
	ss->*(bp - 0x55) = v9_9;
	if (v9_9 <= 0x00)
		return di + 0x01;
	else
	{
		byte Eq_7::* di_13 = fn0800_0BD1(bp, di + 0x01);
		return di_13;
	}
}

// 0800:0BD1: Register (memptr (ptr Eq_7) byte) fn0800_0BD1(Register (memptr (ptr Eq_385) Eq_290) bp, Register (memptr (ptr Eq_7) byte) di)
byte Eq_7::*fn0800_0BD1(Eq_290 Eq_385::*bp, byte Eq_7::*di)
{
	word16 sp_30;
	word16 bx_31;
	struct Eq_7 * ss_32;
	word16 cx_33;
	word16 dx_34;
	struct Eq_413 * es_35;
	union Eq_430 Eq_7::* bp_36;
	word16 ax_37;
	word16 di_38;
	byte SCZO_39;
	struct Eq_418 * cs_40;
	byte SZO_41;
	byte C_42;
	byte Z_43;
	(cs->*(ss->*bp).ptr000A)();
	if (ax_37 == 0x00)
		(ss_32->*(bp_36 - 0x02)).u1 = 0x01;
	(ss_32->*(bp_36 - 0x55)).u0 = 0x50;
	(ss_32->*(bp_36 - 88)).u1 = (word16) (ss_32->*(bp_36 - 88)).u1 + di_38;
	return bp_36 - 0x54;
}

// 0800:10C6: Register word16 fn0800_10C6(Register Eq_5 bp, Register Eq_5 si, Register Eq_5 di, Register out ptr16 dxOut, Register out ptr16 bpOut, Register out ptr16 siOut, Register out ptr16 diOut)
word16 fn0800_10C6(Eq_5 bp, Eq_5 si, Eq_5 di, ptr16 & dxOut, ptr16 & bpOut, ptr16 & siOut, ptr16 & diOut)
{
	word16 dx_8;
	word16 bp_9;
	word16 si_10;
	word16 di_11;
	return fn0800_10D7(0x00, bp, si, di, out dx_8, out bp_9, out si_10, out di_11);
}

// 0800:10CF: Register word16 fn0800_10CF(Register Eq_5 bp, Register Eq_5 si, Register Eq_5 di, Register out ptr16 dxOut, Register out ptr16 bpOut)
word16 fn0800_10CF(Eq_5 bp, Eq_5 si, Eq_5 di, ptr16 & dxOut, ptr16 & bpOut)
{
	word16 dx_6;
	word16 bp_7;
	word16 si_8;
	word16 di_9;
	return fn0800_10D7(0x02, bp, si, di, out dx_6, out bp_7, out si_8, out di_9);
}

// 0800:10D7: Register uint16 fn0800_10D7(Register Eq_5 cx, Register Eq_5 bp, Register Eq_5 si, Register Eq_5 di, Register out ptr16 dxOut, Register out ptr16 bpOut, Register out ptr16 siOut, Register out ptr16 diOut)
uint16 fn0800_10D7(Eq_5 cx, Eq_5 bp, Eq_5 si, Eq_5 di, ptr16 & dxOut, ptr16 & bpOut, ptr16 & siOut, ptr16 & diOut)
{
	ss->*(v3 - 0x02) = bp;
	ss->*(v3 - 0x04) = si;
	ss->*(v3 - 0x06) = di;
	Eq_506 cx_21 = (ss->*v3).t000A;
	Eq_5 di_14 = cx;
	uint16 ax_100 = (ss->*v3).w0004;
	ci16 dx_17 = (ss->*v3).w0006;
	uint16 bx_19 = (ss->*v3).w0008;
	Eq_506 cx_158 = cx_21;
	if (cx_21 == 0x00)
	{
		uint32 dx_ax_181 = SEQ(dx_17, ax_100);
		if (dx_17 == 0x00 || bx_19 == 0x00)
		{
			uint16 dx_188 = (uint16) (dx_ax_181 % bx_19);
			ax_100 = (uint16) (dx_ax_181 /u bx_19);
			if ((cx & 0x02) != 0x00)
				ax_100 = dx_188;
			word16 dx_195;
			*dxOut = 0x00;
l0800_1155:
			word16 di_38;
			*diOut = (ss->*(v3 - 0x06)).t0000;
			word16 si_40;
			*siOut = (ss->*(v3 - 0x04)).t0000;
			word16 bp_43;
			*bpOut = (ss->*(v3 - 0x02)).t0000;
			return ax_100;
		}
	}
	uint16 bx_163 = bx_19;
	ci16 dx_116 = dx_17;
	if ((cx & 0x01) == 0x00)
	{
		dx_116 = dx_17;
		if (dx_17 < 0x00)
		{
			ax_100 = -ax_100;
			dx_116 = -dx_17 - (ax_100 == 0x00);
			di_14 = cx | 0x0C;
		}
		cx_158 = cx_21;
		if (cx_21 < 0x00)
		{
			bx_163 = -bx_19;
			cx_158 = -cx_21 - (bx_163 == 0x00);
			di_14 = di_14 ^ 0x04;
		}
	}
	(ss->*(v3 - 0x08)).t0000 = di_14;
	ui32 bp_bx_66 = SEQ(cx_158, bx_163);
	word16 cx_107 = 0x20;
	Eq_506 di_104 = 0x00;
	uint16 si_105 = 0x00;
	do
	{
		ax_100 = ax_100 << 0x01;
		dx_116 = __rcl(dx_116, 0x01, cond(ax_100));
		*dxOut = dx_116;
		si_105 = __rcl(si_105, 0x01, (dx_116 & 0x8000) != 0x00);
		di_104 = __rcl(di_104, 0x01, (si_105 & 0x8000) != 0x00);
		if (di_104 >= cx_158 && (di_104 > cx_158 || si_105 >= bx_163))
		{
			ui32 di_si_139 = SEQ(di_104, si_105 - bx_163) - bp_bx_66;
			di_104 = SLICE(di_si_139, word16, 16);
			si_105 = (word16) di_si_139;
			ax_100 = ax_100 + 0x01;
		}
		cx_107 = cx_107 - 0x01;
	} while (cx_107 != 0x00);
	Eq_5 bx_108 = (ss->*(v3 - 0x08)).t0000;
	if ((bx_108 & 0x02) != 0x00)
	{
		ax_100 = si_105;
		*dxOut = di_104;
		bx_108 = bx_108 >> 0x01;
	}
	if ((bx_108 & 0x04) != 0x00)
	{
		ax_100 = -ax_100;
		word16 dx_126;
		*dxOut = -dx_116 - (ax_100 == 0x00);
	}
	goto l0800_1155;
}

// 0800:1169: Register Eq_21 fn0800_1169(Register Eq_21 ax, Register Eq_21 cl, Register Eq_21 dx, Register out ptr16 dxOut)
Eq_21 fn0800_1169(Eq_21 ax, Eq_21 cl, Eq_21 dx, ptr16 & dxOut)
{
	if (cl >= 0x10)
	{
		int32 dx_ax_28 = (int32) dx;
		word16 dx_29;
		*dxOut = SLICE(dx_ax_28, word16, 16);
		return (word16) dx_ax_28 >> cl - 0x10;
	}
	else
	{
		word16 dx_18;
		*dxOut = dx >> cl;
		return ax >> cl | dx << -cl + 0x10;
	}
}

// 0800:1187: Register Eq_21 fn0800_1187(Register Eq_21 ax, Register cu8 cl, Register Eq_21 dx, Register out ptr16 dxOut)
Eq_21 fn0800_1187(Eq_21 ax, cu8 cl, Eq_21 dx, ptr16 & dxOut)
{
	if (cl >= 0x10)
	{
		word16 dx_27;
		*dxOut = ax << cl - 0x10;
		return 0x00;
	}
	else
	{
		word16 dx_21;
		*dxOut = dx << cl | ax >> -cl + 0x10;
		return ax << cl;
	}
}
