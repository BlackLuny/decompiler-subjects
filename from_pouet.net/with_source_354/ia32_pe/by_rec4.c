// Generated by Rec Studio 4 - build Apr 15 2012

int MessageBoxA(HWND a, LPCSTR b, LPCSTR c, UINT d)
{// addr = 0x004010C4
    goto __imp__MessageBoxA;
}

BOOL CloseHandle(HANDLE a)
{// addr = 0x004010CA
    goto __imp__CloseHandle;
}

HANDLE CreateFileA(LPCSTR a, DWORD b, DWORD c, LPSECURITY_ATTRIBUTES d, DWORD e, DWORD f, HANDLE g)
{// addr = 0x004010D0
    goto __imp__CreateFileA;
}

void ExitProcess(UINT a)
{// addr = 0x004010D6
    goto __imp__ExitProcess;
}

BOOL FreeLibrary(HMODULE a)
{// addr = 0x004010DC
    goto __imp__FreeLibrary;
}

FARPROC GetProcAddress(HINSTANCE a, LPCSTR b)
{// addr = 0x004010E2
    goto __imp__GetProcAddress;
}

HINSTANCE LoadLibraryA(LPCSTR a)
{// addr = 0x004010E8
    goto __imp__LoadLibraryA;
}

DWORD SetFilePointer(HANDLE a, LONG b, PLONG c, DWORD d)
{// addr = 0x004010EE
    goto __imp__SetFilePointer;
}

BOOL WriteFile(HANDLE a, PCVOID b, DWORD c, PDWORD d, LPOVERLAPPED e)
{// addr = 0x004010F4
    goto __imp__WriteFile;
}

@type-tree BOOL@BOOL@ WriteFile(@type-tree HANDLE@HANDLE@ a, @type-tree PCVOID@PCVOID@ b, @type-tree DWORD@DWORD@ c, @type-tree PDWORD@PDWORD@ d, @type-tree LPOVERLAPPED@LPOVERLAPPED@ e)
{// addr = 0x004010F4
    goto __imp__WriteFile;
}

// Statistics:
//       0 Register nodes
//       0 Temporaries nodes
//       0 Casts
//      18 Statements
//       0 Labels
//       0 Gotos
//       9 Blocks
//      18 Nodes
//       0 Assembly nodes
//       0 Unknown Types


Total time: 0 seconds.