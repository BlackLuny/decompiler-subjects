// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 000104F4: void _start(Register word32 g1, Register word32 o7, Stack word32 dwArg40)
void _start(word32 g1, word32 o7, word32 dwArg40)
{
	if (g1 == 0x00)
	{
		atexit();
		int32 l0_16 = _init(o7);
		globals->ptr20A1C = fp + 0x44 + ((l0_16 << 0x02) + 0x04);
		main(l0_16, fp + 0x44, dwArg44, dwArg48);
		exit();
		_exit();
	}
	else
		atexit();
}

// 00010568: Register word32 fn00010568(Register word32 o7, Register word32 l7)
word32 fn00010568(word32 o7, word32 l7)
{
	return o7 + l7;
}

// 00010570: void __do_global_dtors_aux(Register word32 o7)
void __do_global_dtors_aux(word32 o7)
{
	struct Eq_47 * l7_114 = fn00010568(o7, 66280);
	word32 o2_26 = (word32) *l7_114->ptr000C;
	if (o2_26 == 0x00)
	{
		<anonymous> *** o0_54 = l7_114->ptr0010;
		<anonymous> * o1_56 = **o0_54;
		if (o1_56 != null)
		{
			<anonymous> *** l0_118 = o0_54;
			<anonymous> ** o0_126 = (char *) *o0_54 + 0x04;
			while (true)
			{
				*l0_118 = (<anonymous> ***) o0_126;
				word32 sp_97;
				word32 i0_98;
				word32 o0_99;
				word32 i1_100;
				word32 o1_101;
				word32 i2_102;
				word32 o2_103;
				word32 i3_104;
				word32 o3_105;
				word32 i4_106;
				word32 o4_107;
				word32 i5_108;
				word32 o5_109;
				word32 i6_110;
				word32 i7_111;
				word32 o7_112;
				word32 l1_113;
				word32 g0_115;
				byte NZVC_116;
				bool Z_117;
				o1_56();
				<anonymous> ** o0_119 = *l0_118;
				if (*o0_119 == null)
					break;
				o0_126 = (<anonymous> **) ((char *) o0_119 + 0x04);
			}
		}
		if (l7_114->dw0024 != 0x00)
			fn000208E0();
		*l7_114->ptr000C = 0x01;
	}
	return;
}

// 00010620: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
	return;
}

// 00010630: void frame_dummy(Register word32 o7)
void frame_dummy(word32 o7)
{
	struct Eq_47 * l7_22 = fn00010568(o7, 66088);
	if (l7_22->dw0020 == 0x00)
	{
		if (*l7_22->ptr0014 != 0x00)
		{
			if (l7_22->dw001C != 0x00)
				fn000208F8();
		}
		return;
	}
	else
		fn000208EC();
}

// 000106B4: void call_frame_dummy()
void call_frame_dummy()
{
	return;
}

// 000106C4: void proc1(Register int32 o0, Register word32 o1, Stack word32 dwArg44, Stack word32 dwArg48)
void proc1(int32 o0, word32 o1, word32 dwArg44, word32 dwArg48)
{
	if (o0 > 0x02)
	{
		strlen();
		strlen();
		printf();
	}
	else
		strlen();
	printf();
	return;
}

// 00010760: void main(Register int32 o0, Register (ptr Eq_28) o1, Stack word32 dwArg44, Stack word32 dwArg48)
void main(int32 o0, Eq_28 * o1, word32 dwArg44, word32 dwArg48)
{
	proc1(o0, o1->dw0004, dwLoc2C, dwLoc28);
	printf();
	return;
}

// 000107B0: Register word32 fn000107B0(Register word32 o7, Register word32 l7)
word32 fn000107B0(word32 o7, word32 l7)
{
	return o7 + l7;
}

// 000107B8: Register (ptr word32) __do_global_ctors_aux(Register word32 o7)
word32 * __do_global_ctors_aux(word32 o7)
{
	word32 * l0_30;
	struct Eq_194 * l7_22 = fn000107B0(o7, 0x000100A0);
	struct Eq_199 * o1_25 = l7_22->ptr0018;
	<anonymous> * o0_26 = o1_25->ptrFFFFFFFC;
	if (o0_26 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 sp_55;
			word32 i0_56;
			word32 o0_57;
			word32 i1_58;
			word32 o1_59;
			word32 i2_60;
			word32 o2_61;
			word32 i3_62;
			word32 o3_63;
			word32 i4_64;
			word32 o4_65;
			word32 i5_66;
			word32 o5_67;
			word32 i6_68;
			word32 i7_69;
			word32 o7_70;
			word32 l7_71;
			word32 g0_72;
			byte NZVC_73;
			bool Z_74;
			o0_26();
		} while (*l0_30 != ~0x00);
	}
	else
		l0_30 = (word32 *) &o1_25->ptrFFFFFFFC;
	return l0_30;
}

// 00010808: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
	return;
}

// 00010818: Register word32 _init(Register word32 o7)
word32 _init(word32 o7)
{
	frame_dummy(o7);
	return __do_global_ctors_aux(o7);
}

// 00010834: void _fini(Register word32 o7)
void _fini(word32 o7)
{
	__do_global_dtors_aux(o7);
	return;
}

// 0002088C: void _PROCEDURE_LINKAGE_TABLE_()
void _PROCEDURE_LINKAGE_TABLE_()
{
fn0002088C_entry:
l0002088C:
l0002088C:
fn0002088C_exit:
}

// 000208BC: void atexit()
void atexit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 000208C8: void exit()
void exit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 000208D4: void _exit()
void _exit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 000208E0: void fn000208E0()
void fn000208E0()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 000208EC: void fn000208EC()
void fn000208EC()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 000208F8: void fn000208F8()
void fn000208F8()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020904: void strlen()
void strlen()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020910: void printf()
void printf()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}
