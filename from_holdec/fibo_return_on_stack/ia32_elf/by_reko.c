// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482D8: void _init(Register word32 ebx)
void _init(word32 ebx)
{
	if (globals->dw8049794 != 0x00)
		__isoc99_scanf(ptrLoc0C, tLoc08);
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 08048328: void fn08048328()
void fn08048328()
{
	word32 esp_3;
	globals->ptr80497A0();
	return;
}

// 08048338: void fn08048338()
void fn08048338()
{
	word32 esp_3;
	globals->ptr80497A4();
	return;
}

// 08048348: void fn08048348()
void fn08048348()
{
	word32 esp_3;
	globals->ptr80497A8();
	return;
}

// 08048360: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn08048328();
	__hlt();
}

// 08048390: void __do_global_dtors_aux(Register word32 esi)
void __do_global_dtors_aux(word32 esi)
{
	if (globals->b80497B0 == 0x00)
	{
		uint32 eax_23 = globals->dw80497B4;
		if (eax_23 < 0x00)
			globals->dw80497B4 = eax_23 + 0x01;
		globals->b80497B0 = 0x01;
	}
	return;
}

// 080483F0: void frame_dummy()
void frame_dummy()
{
	if (globals->dw80496C0 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_28;
		word32 ebp_29;
		byte SCZO_30;
		word32 eax_31;
		byte SZO_32;
		byte C_33;
		byte Z_34;
		null();
	}
	return;
}

// 08048414: Register int32 fibo_normal(Stack int32 dwArg04)
int32 fibo_normal(int32 dwArg04)
{
	int32 eax_10;
	if (dwArg04 > 0x01)
		eax_10 = fibo_normal(dwArg04 - 0x01) + fibo_normal(dwArg04 - 0x02);
	else
		eax_10 = dwArg04;
	return eax_10;
}

// 0804844D: void fibo_return_on_stack(Stack int32 dwArg04)
void fibo_return_on_stack(int32 dwArg04)
{
	if (dwArg04 > 0x01)
	{
		fibo_return_on_stack(dwArg04 - 0x01);
		fibo_return_on_stack(dwArg04 - 0x02);
	}
	return;
}

// 08048488: void fibo_wrapper_return_on_stack(Stack word32 dwArg04)
void fibo_wrapper_return_on_stack(word32 dwArg04)
{
	fibo_return_on_stack(dwArg04);
	return;
}

// 0804849E: void main()
void main()
{
	__align(fp - 0x04);
	fn08048338();
	fn08048348();
	fibo_normal(dwLoc10);
	fibo_return_on_stack(dwLoc10);
	fn08048338();
	return;
}

// 08048520: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 08048530: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_128 * ebx_16 = __i686.get_pc_thunk.bx(dwLoc14);
	_init((char *) &ebx_16->ptr1175 + 224);
	if (&ebx_16->ptr1175 - &ebx_16->ptr1175 >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_60;
			word32 ebp_61;
			uint32 edi_62;
			uint32 esi_63;
			word32 ebx_64;
			byte SCZO_65;
			word32 eax_66;
			byte SZO_67;
			byte C_68;
			byte Z_69;
			ebx_16->ptr1175();
		} while (esi_63 + 0x01 < edi_62);
	}
	return;
}

// 0804858A: Register word32 __i686.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __i686.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 08048590: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_11 = globals->ptr80496B0;
	if (eax_11 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_26;
			word32 ebp_27;
			word32 * ebx_28;
			byte SCZO_29;
			word32 eax_30;
			byte Z_31;
			eax_11();
		} while (*ebx_28 != ~0x00);
	}
	return;
}

// 080485BC: void _fini(Register word32 esi)
void _fini(word32 esi)
{
	__do_global_dtors_aux(esi);
	return;
}
