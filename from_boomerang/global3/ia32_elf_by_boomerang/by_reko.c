// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048230: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 08048258: void __libc_start_main@@GLIBC_2.0()
void __libc_start_main@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049564();
	return;
}

// 08048268: void printf@@GLIBC_2.0()
void printf@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049568();
	return;
}

// 08048278: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	__libc_start_main@@GLIBC_2.0();
	__hlt();
}

// 0804829C: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_15 = globals->ptr804956C;
	if (eax_15 != null)
	{
		word32 esp_29;
		word32 ebp_30;
		word32 ebx_31;
		word32 eax_32;
		byte SCZO_33;
		byte SZO_34;
		byte C_35;
		byte Z_36;
		eax_15();
	}
	return;
}

// 080482C0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b8049570 == 0x00)
	{
		<anonymous> ** eax_25 = globals->ptr8049468;
		<anonymous> * edx_26 = *eax_25;
		if (edx_26 != null)
		{
			do
			{
				<anonymous> ** eax_42 = (char *) eax_25 + 0x04;
				globals->ptr8049468 = eax_42;
				word32 esp_45;
				word32 ebp_46;
				byte SCZO_47;
				byte Z_48;
				word32 eax_49;
				word32 edx_50;
				byte SZO_51;
				byte C_52;
				word32 esi_53;
				edx_26();
				eax_25 = globals->ptr8049468;
			} while (*eax_25 != null);
		}
		globals->b8049570 = 0x01;
	}
	return;
}

// 080482FC: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049554 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_31;
		word32 ebp_32;
		byte SCZO_33;
		word32 eax_34;
		byte SZO_35;
		byte C_36;
		byte Z_37;
		fn00000000();
	}
	return;
}

// 08048328: void foo2()
void foo2()
{
	globals->dw8049478 = 0x0C;
	printf@@GLIBC_2.0();
	return;
}

// 08048356: void foo1()
void foo1()
{
	foo2();
	return;
}

// 08048363: void main()
void main()
{
	__align(fp - 0x0C);
	foo1();
	printf@@GLIBC_2.0();
	return;
}

// 08048398: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	if (true)
		return;
}

// 080483C8: void __libc_csu_fini()
void __libc_csu_fini()
{
	if (false)
		;
	else
	{
		_fini();
		return;
	}
}

// 080483FC: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr8049544;
	if (eax_13 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_29;
			word32 ebp_30;
			word32 * ebx_31;
			word32 edx_32;
			word32 eax_33;
			byte SCZO_34;
			byte Z_35;
			eax_13();
		} while (*ebx_31 != ~0x00);
	}
	return;
}

// 08048420: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}
