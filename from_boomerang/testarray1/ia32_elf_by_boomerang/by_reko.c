// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048278: void _init(Register word32 esi)
void _init(word32 esi)
{
	call_gmon_start();
	frame_dummy(esi);
	__do_global_ctors_aux();
	return;
}

// 080482A0: void fn080482A0()
void fn080482A0()
{
	word32 esp_3;
	globals->ptr80495A8();
	return;
}

// 080482B0: void fn080482B0()
void fn080482B0()
{
	word32 esp_3;
	globals->ptr80495AC();
	return;
}

// 080482C0: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn080482A0();
	__hlt();
}

// 080482E4: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_15 = globals->ptr80495A0;
	if (eax_15 != null)
	{
		word32 esp_31;
		word32 ebp_32;
		word32 ebx_33;
		byte SCZO_34;
		word32 edx_35;
		word32 eax_36;
		byte SZO_37;
		byte C_38;
		byte Z_39;
		eax_15();
	}
	return;
}

// 08048308: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b80495C4 == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_26 = globals->ptr80495B8;
			<anonymous> * edx_27 = *eax_26;
			if (edx_27 == null)
				break;
			globals->ptr80495B8 = (<anonymous> **) ((char *) eax_26 + 0x04);
			word32 esp_35;
			word32 ebp_36;
			byte SCZO_37;
			byte Z_38;
			word32 eax_39;
			word32 edx_40;
			byte SZO_41;
			byte C_42;
			edx_27();
		}
		globals->b80495C4 = 0x01;
	}
	return;
}

// 0804833C: void frame_dummy(Register word32 esi)
void frame_dummy(word32 esi)
{
	if (globals->dw80494CC != 0x00 && 0x00 != 0x00)
	{
		word32 esp_33;
		word32 ebp_34;
		byte SCZO_35;
		word32 eax_36;
		byte SZO_37;
		byte C_38;
		byte Z_39;
		word32 esi_40;
		null();
	}
	return;
}

// 08048368: void main()
void main()
{
	__align(fp - 0x0C);
	int32 dwLoc08_15 = 0x00;
	while (dwLoc08_15 <= 0x04)
		dwLoc08_15 = dwLoc08_15 + 0x01;
	fn080482B0();
	return;
}

// 080483CC: void __libc_csu_init(Register word32 esi)
void __libc_csu_init(word32 esi)
{
	_init(esi);
	if (0x00 <u 0x0804967C - 0x0804967C >> 0x02)
	{
		do
		{
			word32 esp_47;
			word32 ebp_48;
			Eq_117 edi_49;
			uint32 esi_50;
			word32 ebx_51;
			byte SCZO_52;
			word32 eax_53;
			word32 edx_54;
			byte SZO_55;
			byte C_56;
			word32 ecx_57;
			(*(<anonymous> **) 0x0804967C)();
		} while (esi_50 + 0x01 <u 0x0804967C - edi_49 >> 0x02);
	}
	return;
}

// 08048420: void __libc_csu_fini()
void __libc_csu_fini()
{
	<anonymous> * edi_18[] = (<anonymous> * (*)[]) 0x0804967C;
	word32 esi_23 = (0x0804967C - 0x0804967C >> 0x02) - 0x01;
	while (esi_23 != ~0x00)
	{
		word32 esp_45;
		word32 ebp_46;
		word32 esi_48;
		word32 ebx_49;
		byte SCZO_50;
		word32 eax_51;
		byte Z_52;
		byte SZO_53;
		edi_18[esi_23]();
		esi_23 = esi_48 - 0x01;
	}
	_fini();
	return;
}

// 08048464: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_14 = globals->ptr80494BC;
	while (eax_14 != (<anonymous> *) ~0x00)
	{
		word32 esp_30;
		word32 ebp_31;
		<anonymous> ** ebx_32;
		word32 edx_33;
		word32 eax_34;
		byte SCZO_35;
		byte Z_36;
		eax_14();
		eax_14 = (<anonymous> *) *ebx_32;
	}
	return;
}

// 08048488: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}
