// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00001000: void fn00001000(Register word32 d0, Register word32 d2, Register word32 d4, Register word32 d5)
void fn00001000(word32 d0, word32 d2, word32 d4, word32 d5)
{
	struct Eq_6 * a6_3 = *(struct Eq_6 **) 0x04;
	word32 d0_5 = DPB(d0, 0xA8C0, 0);
	uint32 d1_63 = 0x00010002;
	Eq_66 d0_10[] = AllocMem(d0_5, 0x00010002);
	if (true)
	{
		*(word16 *) 0x00DFF09A = 0x4000;
		globals->w1186 = (word16) (d0_10 + 0x06C4)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000;
		uint32 d0_208 = __swap((d0_10 + 0x06C4)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000);
		globals->w1182 = (word16) d0_208;
		Eq_66 a1_47[] = d0_10;
		word32 d4_100 = DPB(d4, 399, 0);
		do
		{
			d5 = DPB(d5, 0x01AF, 0);
			do
			{
				uint32 d0_79 = DPB(d0_208, (word16) d4_100 - 0x01B0, 0) * (word16) d4_100;
				d1_63 = DPB(d1_63, (word16) d5 - 448, 0) * (word16) d5;
				cui16 v27_85 = (word16) d0_79 + (word16) d1_63;
				d0_208 = DPB(d0_79, v27_85 & 0x0800, 0);
				if ((v27_85 & 0x0800) != 0x00)
				{
					cu16 v29_205 = (word16) d5;
					d2 = DPB(d2, -(byte) (word16) d5 - 0x01, 0);
					__bset((&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&a1_47[(int32) (v29_205 >> 0x03)].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00], d2, out (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&a1_47[(int32) (v29_205 >> 0x03)].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00]);
					d0_208 = DPB(d0_79, v29_205 >> 0x03, 0);
				}
				d5 = d5 - 0x01;
			} while (d5 != ~0x00);
			a1_47 = (Eq_66 (*)[]) (a1_47 + 0x0036)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000;
			d4_100 = d4_100 - 0x01;
		} while (d4_100 != ~0x00);
		globals->w1196 = (word16) (d0_10 + 21600)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000;
		globals->w1192 = (word16) __swap((d0_10 + 21600)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000);
		struct Eq_121 * a1_104 = (d0_10 + 21600)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000;
		word32 * a0_110 = &globals->dw1058;
		byte * a2_111 = &globals->dw1058;
		int32 d6_112 = 0x04;
		do
		{
			a1_104->dw1F18 = *a0_110;
			a1_104->dw1F4E = *a0_110;
			a0_110 = a0_110 + 0x01;
			a1_104 = a1_104 + 0x01;
			d6_112 = d6_112 - 0x01;
		} while (d6_112 != ~0x00);
		*(ptr32 *) 0x00DFF080 = (ptr32) 0x1180;
		byte * a1_128 = &globals->dw1058;
		int32 d1_129 = 0x003F;
		do
		{
			a2_111 = a2_111 - 0x01;
			*a1_128 = *a2_111;
			a1_128 = a1_128 + 0x01;
			d1_129 = d1_129 - 0x01;
		} while (d1_129 != ~0x00);
		int32 d5_140 = 0x0020;
		do
		{
			do
				;
			while (*(byte *) 0x00DFF006 != 0xE0);
			do
				;
			while (*(byte *) 0x00DFF006 != 0xF0);
			cui16 v48_157 = (word16) DPB(d6_112, (byte) d6_112 + 0x01, 0) & 0x7F;
			int32 d0_162 = (int32) globals->a1018[(int32) v48_157];
			globals->b119B = -(byte) d0_162 - 0x01 << 0x04;
			cui16 v57_178 = (word16) DPB(d5_140, (byte) d5_140 + 0x01, 0) & 0x7F;
			word32 d2_186 = DPB(d0_10, (word16) d0_10 + (word16) (DPB(d0_162, (word16) d0_162 >> 0x03, 0) + (int32) (globals->a1018)[(int32) v57_178] * 0x36), 0);
			globals->w118E = (word16) (d2_186 + 0x02);
			globals->w118A = (word16) __swap(d2_186 + 0x02);
			d6_112 = DPB(d6_112, v48_157, 0);
			d5_140 = DPB(d5_140, v57_178, 0);
		} while (__btst(*(byte *) 0x00BFE001, 0x06));
		*(word16 *) 0x00DFF09A = 0xC000;
		FreeMem(d0_10, d0_5);
		*(word32 *) 0x00DFF080 = a6_3->ptr009C->dw0026;
		return;
	}
	else
		return;
}
