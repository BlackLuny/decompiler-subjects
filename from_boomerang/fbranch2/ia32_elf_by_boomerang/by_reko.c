// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482C8: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 08048300: void fn08048300()
void fn08048300()
{
	word32 esp_3;
	globals->ptr8049708();
	return;
}

// 08048310: void fn08048310()
void fn08048310()
{
	word32 esp_3;
	globals->ptr804970C();
	return;
}

// 08048320: void fn08048320()
void fn08048320()
{
	word32 esp_3;
	globals->ptr8049710();
	return;
}

// 08048330: void fn08048330()
void fn08048330()
{
	word32 esp_3;
	globals->ptr8049714();
	return;
}

// 08048340: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn08048310();
	__hlt();
}

// 08048364: void call_gmon_start()
void call_gmon_start()
{
	if (globals->dw80496FC != 0x00)
		fn08048330();
	return;
}

// 08048388: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b8049724 == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_26 = globals->ptr8049720;
			<anonymous> * edx_27 = *eax_26;
			if (edx_27 == null)
				break;
			globals->ptr8049720 = (<anonymous> **) ((char *) eax_26 + 0x04);
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
		globals->b8049724 = 0x01;
	}
	return;
}

// 080483BC: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049628 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_31;
		word32 ebp_32;
		byte SCZO_33;
		word32 eax_34;
		byte SZO_35;
		byte C_36;
		byte Z_37;
		null();
	}
	return;
}

// 080483E4: void main()
void main()
{
	__align(fp - 0x1C);
	fn08048300();
	fn08048320();
	if (((byte) cond((real64) 0x40A00000 - (real64) rLoc0C) & 0x45) == 0x40)
		printf("Equal", SLICE(134514133, <unknown>, 32));
	if (((byte) cond((real64) 0x40A00000 - (real64) rLoc0C) & 0x45 ^ 0x40) != 0x00)
		printf("Not Equal", SLICE(134514139, <unknown>, 32));
}

// 0804851C: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	int32 eax_21 = 0x080497D8 - 0x080497D8;
	if (eax_21 >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_56;
			word32 ebp_57;
			uint32 edi_58;
			word32 esi_59;
			word32 ebx_60;
			byte SCZO_61;
			word32 eax_62;
			word32 edx_63;
			byte Z_64;
			byte SZO_65;
			byte C_66;
			bcuiposr0 None_67;
			(*(<anonymous> **) 0x080497D8)();
		} while (edi_58 + 0x01 < eax_21 >> 0x02);
		return;
	}
	else
		return;
}

// 0804856C: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 08048574: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr8049618;
	if (eax_13 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_26;
			word32 ebp_27;
			ptr32 ebx_28;
			word32 edx_29;
			word32 eax_30;
			byte SCZO_31;
			byte Z_32;
			eax_13();
		} while (*(ebx_28 - 0x04) != ~0x00);
	}
	return;
}

// 0804859C: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}
