// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080487FC: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 08048884: void MikMod_strerror()
void MikMod_strerror()
{
	word32 esp_3;
	globals->ptr804A47C();
	return;
}

// 08048894: void strlen@@GLIBC_2.0()
void strlen@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804A480();
	return;
}

// 080488A4: void XParseColor()
void XParseColor()
{
	word32 esp_3;
	globals->ptr804A484();
	return;
}

// 080488B4: void __libc_start_main@@GLIBC_2.0()
void __libc_start_main@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804A488();
	return;
}

// 080488C4: void XLoadQueryFont()
void XLoadQueryFont()
{
	word32 esp_3;
	globals->ptr804A48C();
	return;
}

// 080488D4: void printf@@GLIBC_2.0()
void printf@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804A490();
	return;
}

// 080488E4: void MikMod_RegisterAllDrivers()
void MikMod_RegisterAllDrivers()
{
	word32 esp_3;
	globals->ptr804A494();
	return;
}

// 080488F4: void MikMod_Init()
void MikMod_Init()
{
	word32 esp_3;
	globals->ptr804A498();
	return;
}

// 08048904: void XAllocColor()
void XAllocColor()
{
	word32 esp_3;
	globals->ptr804A49C();
	return;
}

// 08048914: void XSetFont()
void XSetFont()
{
	word32 esp_3;
	globals->ptr804A4A0();
	return;
}

// 08048924: void exit@@GLIBC_2.0()
void exit@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804A4A4();
	return;
}

// 08048944: void Player_Start()
void Player_Start()
{
	word32 esp_3;
	globals->ptr804A4AC();
	return;
}

// 08048964: void Player_Load()
void Player_Load()
{
	word32 esp_3;
	globals->ptr804A4B4();
	return;
}

// 08048974: void sin@@GLIBC_2.0()
void sin@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804A4B8();
	return;
}

// 08048984: void XCreateGC()
void XCreateGC()
{
	word32 esp_3;
	globals->ptr804A4BC();
	return;
}

// 08048994: void XOpenDisplay()
void XOpenDisplay()
{
	word32 esp_3;
	globals->ptr804A4C0();
	return;
}

// 080489A4: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	__libc_start_main@@GLIBC_2.0();
	__hlt();
}

// 080489C8: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_13 = globals->ptr804A4C4;
	if (eax_13 != null)
	{
		word32 esp_27;
		word32 ebp_28;
		word32 ebx_29;
		byte SCZO_30;
		word32 eax_31;
		byte SZO_32;
		byte C_33;
		byte Z_34;
		eax_13();
	}
	return;
}

// 080489EC: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804A4E8 == 0x00)
	{
		<anonymous> ** eax_25 = globals->ptr8049008;
		<anonymous> * edx_26 = *eax_25;
		if (edx_26 != null)
		{
			do
			{
				<anonymous> ** eax_42 = (char *) eax_25 + 0x04;
				globals->ptr8049008 = eax_42;
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
				eax_25 = globals->ptr8049008;
			} while (*eax_25 != null);
		}
		globals->b804A4E8 = 0x01;
	}
	return;
}

// 08048A28: void frame_dummy()
void frame_dummy()
{
	if (globals->dw804A454 != 0x00 && 0x00 != 0x00)
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

// 08048A54: void FontInit(Stack word32 dwArg04)
void FontInit(word32 dwArg04)
{
	XLoadQueryFont();
	XSetFont();
	return;
}

// 08048A98: void XPrint(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Stack word32 dwArg14)
void XPrint(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	strlen@@GLIBC_2.0();
	uint16 wLoc16_37 = __fstcw();
	uint16 ax_40 = DPB(wLoc16_37, 0x0C, 8);
	__fldcw(ax_40);
	__fldcw(wLoc16_37);
	__fldcw(ax_40);
	__fldcw(wLoc16_37);
	char * v13_55 = globals->ptr804A514;
	fprintf(globals->ptr804A580, v13_55, SLICE(v13_55, <unknown>, 32));
	return;
}

// 08048B14: void init(Register (ptr Eq_172) eax, Stack word32 dwArg04, Stack word32 dwArg08)
void init(Eq_172 * eax, word32 dwArg04, word32 dwArg08)
{
	XOpenDisplay();
	globals->ptr804A580 = eax;
	word32 esp_45;
	word32 ebp_46;
	byte SCZO_47;
	char * eax_48;
	XClearWindow();
	globals->ptr804A514 = eax_48;
	strlen(globals->ptr804A580);
	word32 eax_63 = *((char *) *((char *) globals->ptr804A580 + 0x008C) + 0x0030);
	globals->dw804A504 = eax_63;
	XCreateGC();
	globals->dw804A500 = eax_63;
	XParseColor();
	XAllocColor();
	XOpenDisplay(globals->ptr804A580);
	return;
}

// 08048C0C: void MikmodInit()
void MikmodInit()
{
	MikMod_RegisterAllDrivers();
	int32 eax_10 = printf(ptrLoc0C, tLoc08);
	MikMod_Init();
	ptr32 esp_15 = fp - 0x0C;
	if (eax_10 != 0x00)
	{
		MikMod_strerror();
		word32 esp_86;
		word32 ebp_87;
		byte SCZO_88;
		byte SZO_90;
		byte C_91;
		byte Z_92;
		XSetFont();
		exit@@GLIBC_2.0();
		esp_15 = fp - 0x1C;
	}
	ptr32 esp_29 = esp_15 - 0x04;
	*(esp_29 - 0x04) = 0x00;
	*(esp_29 - 0x08) = 0x80;
	*(esp_29 - 0x0C) = 0x08048E1D;
	Player_Load();
	ptr32 esp_37 = esp_29 + 0x04;
	if (eax_10 == 0x00)
	{
		*(esp_29 - 0x0C) = globals->dw804A4E4;
		MikMod_strerror();
		*(esp_29 - 0x08) = eax_10;
		*(esp_29 - 0x0C) = 0x08048E26;
		printf@@GLIBC_2.0();
		*(esp_29 - 0x0C) = 0x01;
		exit@@GLIBC_2.0();
		esp_37 = esp_29 - 0x0C;
	}
	*(esp_37 - 0x10) = eax_10;
	Player_Start();
	return;
}

// 08048CBE: FpuStack real64 main(FpuStack real64 rArg0)
real64 main(real64 rArg0)
{
	__align(fp - 0x0C);
	init(null, 300, 100);
	FontInit(0x08048E38);
	MikmodInit();
	sin@@GLIBC_2.0();
	real64 rArg0_39 = rArg0 * globals->r8048E48 + globals->r8048E50;
	real64 rArg0_48 = (real64) globals->r8048E5C - (real64) globals->r804A588 / (real64) globals->r8048E58;
	XPrint((word32) rArg0_48, SLICE(rArg0_48, word32, 32), (word32) rArg0_39, SLICE(rArg0_39, word32, 32), 0x08049020);
	globals->r804A588 = (real32) ((real64) globals->r804A588 + globals->r8048E60);
	globals->r804A584 = (real32) ((real64) globals->r804A584 + 1.0);
}

// 08048DC4: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr804A444;
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

// 08048DE8: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}
