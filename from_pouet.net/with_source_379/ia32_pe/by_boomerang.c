__size32 global3 = 0;// 4 bytes
__size32 global5 = 0;// 4 bytes
__size32 global4 = 0;// 4 bytes
__size32 global7 = 0;// 4 bytes
__size32 global6 = 0;// 4 bytes
__size32 global8 = 0;// 4 bytes
HINSTANCE global10 = 0;
__size32 global11 = 0;// 4 bytes
__size32 global12 = 0;// 4 bytes
__size32 global16 = 0;// 4 bytes
__size32 global17 = 0;// 4 bytes
__size32 global24 = 0;// 4 bytes
__size32 global27 = 0;// 4 bytes

void proc2();
void proc3();
void _start();

// address: 0x401000
unsigned char proc1() {
    unsigned char bl; 		// r11
    unsigned char bl_1; 		// r11{33}
    unsigned char *edx; 		// r26
    unsigned char *edx_1; 		// r26{34}

    edx = *0x402104;
    bl = 0;
    do {
        bl_1 = bl;
        edx_1 = edx;
        if (bl_1 >= (unsigned char)-128) {
            *(unsigned char*)edx_1 = bl_1 * 2;
        }
        *(unsigned char*)(edx_1 + 1) = bl_1 * 2;
        *(unsigned char*)(edx_1 + 2) = bl_1 * 2;
        edx = edx_1 + 4;
        bl = bl_1 + 1;
    } while (bl_1 + 1 != 0);
    return bl_1 * 2; /* WARNING: Also returning: bl := bl_1 + 1, edx := edx_1 + 4 */
}

// address: 0x401020
void proc2() {
}

// address: 0x401052
void proc3() {
}

// address: 0x401230
void _start() {
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{107}
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{209}
    int ecx; 		// r25
    __size16 *edi; 		// r31
    int edx; 		// r26
    int esp; 		// r28
    LPCWSTR local0; 		// m[esp - 12]
    HINSTANCE local1; 		// m[esp - 16]
    HINSTANCE local12; 		// m[esp - 20]
    int local15; 		// m[esp - 8]
    int local16; 		// m[esp - 4]

    eax = GlobalAlloc(); /* Warning: also results in esp */
    if (eax != 0) {
        global3 = eax;
        global4 = eax;
        global5 = eax + 2000;
        global6 = eax + 0x62250;
        global7 = eax + 0x92f90;
        global8 = eax + 0xab630;
        ebx = 0x7a11f;
        do {
            ebx_1 = ebx;
            edi = *0x40210c;
            *(__size16*)edi = 0;
            ebx = ebx_1 - 1;
        } while (ebx_1 - 1 != 0);
        eax = GetModuleHandleW(0);
        global10 = eax;
        eax = LoadIconW(0, 0x7f00);
        global11 = eax;
        eax = LoadCursorW(0, 0x7f00);
        global12 = eax;
        eax = RegisterClassW(); /* Warning: also results in esp */
        if (eax != 0) {
            eax_1 = CreateWindowExW(0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 540, 400, 0, 0, global10, 0); /* Warning: also results in esp */
            if (eax_1 != 0) {
                global16 = eax_1;
                eax = GetDC(); /* Warning: also results in ecx */
                global17 = eax;
                al = proc1(); /* Warning: also results in bl, edx */
                proc2(pc, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 540, 400, 0, 0, pc, eax_1, 0x4020a4, 0, 0xf4240, 0, al, bl, eax, ecx, edx, ebx_1 - 1, edi + 2, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1));
            }
        }
    }
    local16 = 16;
    local15 = 0;
    local0 = 0x40204c;
    local1 = 0;
    MessageBoxW(*(esp - 16), *(esp - 12), *(esp - 8), *(esp - 4));
    *(__size32*)(esp - 4) = global17;
    *(__size32*)(esp - 4) = global16;
    ReleaseDC();
    *(__size32*)(esp - 4) = global3;
    GlobalFree();
    *(__size32*)(esp - 4) = global27;
    ExitProcess(*(esp + 4));
    return;
}
