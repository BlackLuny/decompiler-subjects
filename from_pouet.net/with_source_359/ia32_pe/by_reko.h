// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (2 (struct "HBRUSH__" (0 int32 unused)) t0002) (4012AF (fn LRESULT (HWND, UINT, WPARAM, LPARAM)) t4012AF) (402000 WCHAR t402000) (402012 WCHAR t402012) (402022 WCHAR t402022) (40207A Eq_87 t40207A) (40208A Eq_63 t40208A) (40208E Eq_72 t40208E) (402092 Eq_75 t402092) (4020A2 Eq_42 t4020A2) (4020A6 Eq_129 t4020A6) (4020AE word32 dw4020AE) (4020B2 word32 dw4020B2) (4020D6 Eq_56 t4020D6) (4020DA Eq_2 t4020DA) (4020DE word32 dw4020DE) (4020E2 Eq_2 t4020E2))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union "Eq_2" ((ptr byte) u0) (HGLOBAL u1))
	T_2 (in edx_16 : Eq_2)
	T_4 (in Mem0[0x004020DA:word32] : word32)
	T_22 (in edx_11 + 0x00000003 : word32)
	T_30 (in eax_6 : Eq_2)
	T_37 (in GlobalAlloc(0x00000000, 0x0007A120) : HGLOBAL)
	T_38 (in 0x00000000 : word32)
	T_52 (in Mem75[0x004020E2:word32] : word32)
	T_54 (in Mem76[0x004020DA:word32] : word32)
	T_168 (in Mem42[0x004020E2:word32] : word32)
	T_172 (in Mem47[fp - 0x00000004 + 0x00000000:word32] : word32)
	T_175 (in hMem : HGLOBAL)
	T_179 (in Mem47[fp - 0x00000004 + 0x00000000:HGLOBAL] : HGLOBAL)
	T_180 (in GlobalFree(*(fp - 0x00000004)) : HGLOBAL)
Eq_12: (struct "Eq_12" (0 bcu8 b0000) (1 bcu8 b0001))
	T_12 (in edx_11 : (ptr Eq_12))
	T_14 (in edx_16 + 0x00000001 : word32)
Eq_27: (fn void ())
	T_27 (in __wait : ptr32)
Eq_29: DWORD
	T_29 (in eax : Eq_29)
	T_96 (in dwExStyle : DWORD)
	T_99 (in dwStyle : DWORD)
	T_108 (in 0x00000000 : word32)
	T_111 (in 0x10CF0000 : word32)
Eq_31: (fn Eq_2 (Eq_33, Eq_34))
	T_31 (in GlobalAlloc : ptr32)
	T_32 (in signature of GlobalAlloc : void)
Eq_33: UINT
	T_33 (in uFlags : UINT)
	T_35 (in 0x00000000 : word32)
	T_45 (in uType : UINT)
	T_49 (in 0x00000010 : word32)
	T_189 (in uExitCode : UINT)
	T_193 (in Mem52[fp - 0x00000004 + 0x00000000:UINT] : UINT)
	T_262 (in wMsgFilterMin : UINT)
	T_263 (in wMsgFilterMax : UINT)
	T_264 (in wRemoveMsg : UINT)
	T_279 (in Mem152[fp - 0x0000000C + 0x00000000:UINT] : UINT)
	T_284 (in Mem152[fp - 0x00000008 + 0x00000000:UINT] : UINT)
	T_288 (in Mem152[fp - 0x00000004 + 0x00000000:UINT] : UINT)
Eq_34: SIZE_T
	T_34 (in dwBytes : SIZE_T)
	T_36 (in 0x0007A120 : word32)
Eq_40: (fn int32 (Eq_42, Eq_43, Eq_43, Eq_33))
	T_40 (in MessageBoxW : ptr32)
	T_41 (in signature of MessageBoxW : void)
Eq_42: HWND
	T_42 (in hWnd : HWND)
	T_46 (in 0x00000000 : word32)
	T_93 (in eax_130 : Eq_42)
	T_104 (in hWndParent : HWND)
	T_116 (in 0x00000000 : word32)
	T_121 (in CreateWindowExW(0x00000000, &globals->t402000, &globals->t402012, 0x10CF0000, 0x00008000, 0x00008000, 0x00000280, 0x000001F4, null, null, globals->t40208A, null) : HWND)
	T_122 (in 0x00000000 : word32)
	T_125 (in Mem135[0x004020A2:word32] : word32)
	T_128 (in hWnd : HWND)
	T_147 (in Mem39[0x004020A2:word32] : word32)
	T_152 (in Mem42[fp - 0x00000008 + 0x00000000:word32] : word32)
	T_155 (in hWnd : HWND)
	T_161 (in Mem42[fp - 0x00000008 + 0x00000000:HWND] : HWND)
	T_261 (in hWnd : HWND)
	T_274 (in Mem152[fp - 0x00000010 + 0x00000000:HWND] : HWND)
Eq_43: LPCWSTR
	T_43 (in lpText : LPCWSTR)
	T_44 (in lpCaption : LPCWSTR)
	T_47 (in 0x00402022 : word32)
	T_48 (in 0x00000000 : word32)
	T_61 (in lpModuleName : LPCWSTR)
	T_62 (in 0x00000000 : word32)
	T_69 (in lpIconName : LPCWSTR)
	T_71 (in 0x00007F00 : word32)
	T_79 (in lpCursorName : LPCWSTR)
	T_81 (in 0x00007F00 : word32)
	T_97 (in lpClassName : LPCWSTR)
	T_98 (in lpWindowName : LPCWSTR)
	T_109 (in 0x00402000 : word32)
	T_110 (in 0x00402012 : word32)
Eq_55: HGLOBAL
	T_55 (in 0x000007D0 : word32)
Eq_56: HGLOBAL
	T_56 (in eax_6 + 0x000007D0 : word32)
	T_58 (in Mem78[0x004020D6:word32] : word32)
Eq_59: (fn Eq_63 (Eq_43))
	T_59 (in GetModuleHandleW : ptr32)
	T_60 (in signature of GetModuleHandleW : void)
Eq_63: (union "Eq_63" (HINSTANCE u0) (HMODULE u1))
	T_63 (in GetModuleHandleW(null) : HMODULE)
	T_65 (in Mem83[0x0040208A:word32] : word32)
	T_68 (in hInstance : HINSTANCE)
	T_70 (in 0x00000000 : word32)
	T_78 (in hInstance : HINSTANCE)
	T_80 (in 0x00000000 : word32)
	T_106 (in hInstance : HINSTANCE)
	T_119 (in Mem97[0x0040208A:word32] : word32)
Eq_66: (fn Eq_72 (Eq_63, Eq_43))
	T_66 (in LoadIconW : ptr32)
	T_67 (in signature of LoadIconW : void)
Eq_72: HICON
	T_72 (in LoadIconW(0x00000000, (WCHAR *) 0x00007F00) : HICON)
	T_74 (in Mem90[0x0040208E:word32] : word32)
Eq_75: HCURSOR
	T_75 (in eax_95 : Eq_75)
	T_82 (in LoadCursorW(0x00000000, (WCHAR *) 0x00007F00) : HCURSOR)
	T_84 (in Mem97[0x00402092:word32] : word32)
Eq_76: (fn Eq_75 (Eq_63, Eq_43))
	T_76 (in LoadCursorW : ptr32)
	T_77 (in signature of LoadCursorW : void)
Eq_85: (fn Eq_89 ((ptr Eq_87)))
	T_85 (in RegisterClassW : ptr32)
	T_86 (in signature of RegisterClassW : void)
Eq_87: WNDCLASSW
	T_87 (in lpWndClass : (ptr WNDCLASSW))
	T_88 (in 0x0040207A : word32)
Eq_89: ATOM
	T_89 (in RegisterClassW(&globals->t40207A) : ATOM)
Eq_90: HCURSOR
	T_90 (in DPB(eax_95, RegisterClassW(&globals->t40207A), 0) : word32)
	T_91 (in 0x00000000 : word32)
Eq_94: (fn Eq_42 (Eq_29, Eq_43, Eq_43, Eq_29, int32, int32, int32, int32, Eq_42, Eq_105, Eq_63, Eq_107))
	T_94 (in CreateWindowExW : ptr32)
	T_95 (in signature of CreateWindowExW : void)
Eq_105: HMENU
	T_105 (in hMenu : HMENU)
	T_117 (in 0x00000000 : word32)
Eq_107: LPVOID
	T_107 (in lpParam : LPVOID)
	T_120 (in 0x00000000 : word32)
Eq_126: (fn Eq_129 (Eq_42))
	T_126 (in GetDC : ptr32)
	T_127 (in signature of GetDC : void)
Eq_129: HDC
	T_129 (in GetDC(eax_130) : HDC)
	T_131 (in Mem140[0x004020A6:word32] : word32)
	T_139 (in Mem0[0x004020A6:word32] : word32)
	T_145 (in Mem39[fp - 0x00000004 + 0x00000000:word32] : word32)
	T_156 (in hDC : HDC)
	T_165 (in Mem42[fp - 0x00000004 + 0x00000000:HDC] : HDC)
Eq_132: (fn void ())
	T_132 (in fn00401000 : ptr32)
	T_133 (in signature of fn00401000 : void)
Eq_135: (fn void ())
	T_135 (in fn0040101B : ptr32)
	T_136 (in signature of fn0040101B : void)
	T_222 (in fn0040101B : ptr32)
Eq_153: (fn int32 (Eq_42, Eq_129))
	T_153 (in ReleaseDC : ptr32)
	T_154 (in signature of ReleaseDC : void)
Eq_173: (fn Eq_2 (Eq_2))
	T_173 (in GlobalFree : ptr32)
	T_174 (in signature of GlobalFree : void)
Eq_187: (fn void (Eq_33))
	T_187 (in ExitProcess : ptr32)
	T_188 (in signature of ExitProcess : void)
Eq_201: (fn Eq_208 ((ptr Eq_203)))
	T_201 (in TranslateMessage : ptr32)
	T_202 (in signature of TranslateMessage : void)
Eq_203: MSG
	T_203 (in lpMsg : (ptr MSG))
	T_207 (in Mem158[fp - 0x00000004 + 0x00000000:(ptr MSG)] : (ptr MSG))
Eq_208: BOOL
	T_208 (in TranslateMessage(*(fp - 0x00000004)) : BOOL)
	T_289 (in PeekMessageW(*(fp - 0x00000014), *(fp - 0x00000010), *(fp - 0x0000000C), *(fp - 0x00000008), *(fp - 0x00000004)) : BOOL)
Eq_214: (fn Eq_221 ((ptr Eq_216)))
	T_214 (in DispatchMessageW : ptr32)
	T_215 (in signature of DispatchMessageW : void)
Eq_216: MSG
	T_216 (in lpMsg : (ptr MSG))
	T_220 (in Mem162[fp - 0x00000004 + 0x00000000:(ptr MSG)] : (ptr MSG))
Eq_221: LRESULT
	T_221 (in DispatchMessageW(*(fp - 0x00000004)) : LRESULT)
Eq_258: (fn Eq_208 (Eq_260, Eq_42, Eq_33, Eq_33, Eq_33))
	T_258 (in PeekMessageW : ptr32)
	T_259 (in signature of PeekMessageW : void)
Eq_260: LPMSG
	T_260 (in lpMsg : LPMSG)
	T_269 (in Mem152[fp - 0x00000014 + 0x00000000:LPMSG] : LPMSG)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in edx_16 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: (ptr Eq_12)
T_3: (in 0x004020DA : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem0[0x004020DA:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_5: (in bl_17 : bcu8)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: bcu8
T_6: (in 0x00 : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: byte
T_7: (in 0x01 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in bl_17 >> 0x01 : word32)
  Class: Eq_8
  DataType: uint8
  OrigDataType: uint8
T_9: (in 0x00000000 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in edx_16 + 0x00000000 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in Mem10[edx_16 + 0x00000000:byte] : byte)
  Class: Eq_8
  DataType: Eq_2
  OrigDataType: uint8
T_12: (in edx_11 : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (struct (0 T_17 t0000) (1 T_20 t0001)))
T_13: (in 0x00000001 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_14: (in edx_16 + 0x00000001 : word32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: ptr32
T_15: (in 0x00000000 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in edx_11 + 0x00000000 : word32)
  Class: Eq_16
  DataType: ptr32
  OrigDataType: ptr32
T_17: (in Mem12[edx_11 + 0x00000000:byte] : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: byte
T_18: (in 0x00000001 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in edx_11 + 0x00000001 : word32)
  Class: Eq_19
  DataType: ptr32
  OrigDataType: ptr32
T_20: (in Mem14[edx_11 + 0x00000001:byte] : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: byte
T_21: (in 0x00000003 : word32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_22: (in edx_11 + 0x00000003 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: ptr32
T_23: (in 0x01 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: bcu8
T_24: (in bl_17 + 0x01 : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: bcu8
T_25: (in 0x00 : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: byte
T_26: (in bl_17 != 0x00 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in __wait : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_28 ()))
T_28: (in __wait() : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in eax : Eq_29)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: DWORD
T_30: (in eax_6 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HGLOBAL
T_31: (in GlobalAlloc : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_37 (T_35, T_36)))
T_32: (in signature of GlobalAlloc : void)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: 
T_33: (in uFlags : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: 
T_34: (in dwBytes : SIZE_T)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: 
T_35: (in 0x00000000 : word32)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: UINT
T_36: (in 0x0007A120 : word32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: SIZE_T
T_37: (in GlobalAlloc(0x00000000, 0x0007A120) : HGLOBAL)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HGLOBAL
T_38: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: (ptr byte)
  OrigDataType: word32
T_39: (in eax_6 == 0x00000000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in MessageBoxW : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_50 (T_46, T_47, T_48, T_49)))
T_41: (in signature of MessageBoxW : void)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: 
T_42: (in hWnd : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: 
T_43: (in lpText : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_44: (in lpCaption : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_45: (in uType : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: 
T_46: (in 0x00000000 : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: HWND
T_47: (in 0x00402022 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_48: (in 0x00000000 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_49: (in 0x00000010 : word32)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: UINT
T_50: (in MessageBoxW(null, &globals->t402022, null, 0x00000010) : int32)
  Class: Eq_50
  DataType: int32
  OrigDataType: int32
T_51: (in 0x004020E2 : word32)
  Class: Eq_51
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_52 t0000)))
T_52: (in Mem75[0x004020E2:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_53: (in 0x004020DA : word32)
  Class: Eq_53
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_54 t0000)))
T_54: (in Mem76[0x004020DA:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_55: (in 0x000007D0 : word32)
  Class: Eq_55
  DataType: Eq_55
  OrigDataType: (union (HGLOBAL u1))
T_56: (in eax_6 + 0x000007D0 : word32)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: HGLOBAL
T_57: (in 0x004020D6 : word32)
  Class: Eq_57
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_58: (in Mem78[0x004020D6:word32] : word32)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word32
T_59: (in GetModuleHandleW : ptr32)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (fn T_63 (T_62)))
T_60: (in signature of GetModuleHandleW : void)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: 
T_61: (in lpModuleName : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_62: (in 0x00000000 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_63: (in GetModuleHandleW(null) : HMODULE)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: HMODULE
T_64: (in 0x0040208A : word32)
  Class: Eq_64
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (struct (0 T_65 t0000)))
T_65: (in Mem83[0x0040208A:word32] : word32)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: word32
T_66: (in LoadIconW : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_72 (T_70, T_71)))
T_67: (in signature of LoadIconW : void)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: 
T_68: (in hInstance : HINSTANCE)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: 
T_69: (in lpIconName : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_70: (in 0x00000000 : word32)
  Class: Eq_63
  DataType: HINSTANCE
  OrigDataType: HINSTANCE
T_71: (in 0x00007F00 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_72: (in LoadIconW(0x00000000, (WCHAR *) 0x00007F00) : HICON)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: HICON
T_73: (in 0x0040208E : word32)
  Class: Eq_73
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (struct (0 T_74 t0000)))
T_74: (in Mem90[0x0040208E:word32] : word32)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: word32
T_75: (in eax_95 : Eq_75)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: (union (HCURSOR u1))
T_76: (in LoadCursorW : ptr32)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (fn T_82 (T_80, T_81)))
T_77: (in signature of LoadCursorW : void)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: 
T_78: (in hInstance : HINSTANCE)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: 
T_79: (in lpCursorName : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_80: (in 0x00000000 : word32)
  Class: Eq_63
  DataType: HINSTANCE
  OrigDataType: HINSTANCE
T_81: (in 0x00007F00 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_82: (in LoadCursorW(0x00000000, (WCHAR *) 0x00007F00) : HCURSOR)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: HCURSOR
T_83: (in 0x00402092 : word32)
  Class: Eq_83
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (struct (0 T_84 t0000)))
T_84: (in Mem97[0x00402092:word32] : word32)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: word32
T_85: (in RegisterClassW : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_89 (T_88)))
T_86: (in signature of RegisterClassW : void)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: 
T_87: (in lpWndClass : (ptr WNDCLASSW))
  Class: Eq_87
  DataType: (ptr Eq_87)
  OrigDataType: 
T_88: (in 0x0040207A : word32)
  Class: Eq_87
  DataType: (ptr Eq_87)
  OrigDataType: (ptr WNDCLASSW)
T_89: (in RegisterClassW(&globals->t40207A) : ATOM)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: ATOM
T_90: (in DPB(eax_95, RegisterClassW(&globals->t40207A), 0) : word32)
  Class: Eq_90
  DataType: Eq_90
  OrigDataType: HCURSOR
T_91: (in 0x00000000 : word32)
  Class: Eq_90
  DataType: Eq_90
  OrigDataType: word32
T_92: (in DPB(eax_95, RegisterClassW(&globals->t40207A), 0) == null : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in eax_130 : Eq_42)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (HWND u1))
T_94: (in CreateWindowExW : ptr32)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: (ptr (fn T_121 (T_108, T_109, T_110, T_111, T_112, T_113, T_114, T_115, T_116, T_117, T_119, T_120)))
T_95: (in signature of CreateWindowExW : void)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: 
T_96: (in dwExStyle : DWORD)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: 
T_97: (in lpClassName : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_98: (in lpWindowName : LPCWSTR)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_99: (in dwStyle : DWORD)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: 
T_100: (in X : int32)
  Class: Eq_100
  DataType: int32
  OrigDataType: 
T_101: (in Y : int32)
  Class: Eq_101
  DataType: int32
  OrigDataType: 
T_102: (in nWidth : int32)
  Class: Eq_102
  DataType: int32
  OrigDataType: 
T_103: (in nHeight : int32)
  Class: Eq_103
  DataType: int32
  OrigDataType: 
T_104: (in hWndParent : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: 
T_105: (in hMenu : HMENU)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: 
T_106: (in hInstance : HINSTANCE)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: 
T_107: (in lpParam : LPVOID)
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: 
T_108: (in 0x00000000 : word32)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: DWORD
T_109: (in 0x00402000 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_110: (in 0x00402012 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPCWSTR
T_111: (in 0x10CF0000 : word32)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: DWORD
T_112: (in 0x00008000 : word32)
  Class: Eq_100
  DataType: int32
  OrigDataType: int32
T_113: (in 0x00008000 : word32)
  Class: Eq_101
  DataType: int32
  OrigDataType: int32
T_114: (in 0x00000280 : word32)
  Class: Eq_102
  DataType: int32
  OrigDataType: int32
T_115: (in 0x000001F4 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_116: (in 0x00000000 : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: HWND
T_117: (in 0x00000000 : word32)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: HMENU
T_118: (in 0x0040208A : ptr32)
  Class: Eq_118
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (struct (0 T_119 t0000)))
T_119: (in Mem97[0x0040208A:word32] : word32)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: HINSTANCE
T_120: (in 0x00000000 : word32)
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: LPVOID
T_121: (in CreateWindowExW(0x00000000, &globals->t402000, &globals->t402012, 0x10CF0000, 0x00008000, 0x00008000, 0x00000280, 0x000001F4, null, null, globals->t40208A, null) : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: HWND
T_122: (in 0x00000000 : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: word32
T_123: (in eax_130 == null : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in 0x004020A2 : word32)
  Class: Eq_124
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (struct (0 T_125 t0000)))
T_125: (in Mem135[0x004020A2:word32] : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: word32
T_126: (in GetDC : ptr32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: (ptr (fn T_129 (T_93)))
T_127: (in signature of GetDC : void)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: 
T_128: (in hWnd : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: 
T_129: (in GetDC(eax_130) : HDC)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: HDC
T_130: (in 0x004020A6 : word32)
  Class: Eq_130
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (struct (0 T_131 t0000)))
T_131: (in Mem140[0x004020A6:word32] : word32)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: word32
T_132: (in fn00401000 : ptr32)
  Class: Eq_132
  DataType: (ptr Eq_132)
  OrigDataType: (ptr (fn T_134 ()))
T_133: (in signature of fn00401000 : void)
  Class: Eq_132
  DataType: (ptr Eq_132)
  OrigDataType: 
T_134: (in fn00401000() : void)
  Class: Eq_134
  DataType: void
  OrigDataType: void
T_135: (in fn0040101B : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_137 ()))
T_136: (in signature of fn0040101B : void)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: 
T_137: (in fn0040101B() : void)
  Class: Eq_137
  DataType: void
  OrigDataType: void
T_138: (in 0x004020A6 : ptr32)
  Class: Eq_138
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (struct (0 T_139 t0000)))
T_139: (in Mem0[0x004020A6:word32] : word32)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: word32
T_140: (in fp : ptr32)
  Class: Eq_140
  DataType: ptr32
  OrigDataType: ptr32
T_141: (in 0x00000004 : word32)
  Class: Eq_141
  DataType: ui32
  OrigDataType: ui32
T_142: (in fp - 0x00000004 : word32)
  Class: Eq_142
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (struct (0 T_145 t0000)))
T_143: (in 0x00000000 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_144
  DataType: ptr32
  OrigDataType: ptr32
T_145: (in Mem39[fp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: word32
T_146: (in 0x004020A2 : ptr32)
  Class: Eq_146
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (struct (0 T_147 t0000)))
T_147: (in Mem39[0x004020A2:word32] : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: word32
T_148: (in 0x00000008 : word32)
  Class: Eq_148
  DataType: ui32
  OrigDataType: ui32
T_149: (in fp - 0x00000008 : word32)
  Class: Eq_149
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (struct (0 T_152 t0000)))
T_150: (in 0x00000000 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in fp - 0x00000008 + 0x00000000 : word32)
  Class: Eq_151
  DataType: ptr32
  OrigDataType: ptr32
T_152: (in Mem42[fp - 0x00000008 + 0x00000000:word32] : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: word32
T_153: (in ReleaseDC : ptr32)
  Class: Eq_153
  DataType: (ptr Eq_153)
  OrigDataType: (ptr (fn T_166 (T_161, T_165)))
T_154: (in signature of ReleaseDC : void)
  Class: Eq_153
  DataType: (ptr Eq_153)
  OrigDataType: 
T_155: (in hWnd : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: 
T_156: (in hDC : HDC)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: 
T_157: (in 0x00000008 : word32)
  Class: Eq_157
  DataType: ui32
  OrigDataType: ui32
T_158: (in fp - 0x00000008 : word32)
  Class: Eq_158
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (struct (0 T_161 t0000)))
T_159: (in 0x00000000 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in fp - 0x00000008 + 0x00000000 : word32)
  Class: Eq_160
  DataType: ptr32
  OrigDataType: ptr32
T_161: (in Mem42[fp - 0x00000008 + 0x00000000:HWND] : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: HWND
T_162: (in fp - 0x00000004 : word32)
  Class: Eq_162
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (struct (0 T_165 t0000)))
T_163: (in 0x00000000 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_164
  DataType: ptr32
  OrigDataType: ptr32
T_165: (in Mem42[fp - 0x00000004 + 0x00000000:HDC] : HDC)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: HDC
T_166: (in ReleaseDC(*(fp - 0x00000008), *(fp - 0x00000004)) : int32)
  Class: Eq_166
  DataType: int32
  OrigDataType: int32
T_167: (in 0x004020E2 : ptr32)
  Class: Eq_167
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_168 t0000)))
T_168: (in Mem42[0x004020E2:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_169: (in fp - 0x00000004 : word32)
  Class: Eq_169
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_172 t0000)))
T_170: (in 0x00000000 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_171
  DataType: ptr32
  OrigDataType: ptr32
T_172: (in Mem47[fp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_173: (in GlobalFree : ptr32)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (fn T_180 (T_179)))
T_174: (in signature of GlobalFree : void)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: 
T_175: (in hMem : HGLOBAL)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_176: (in fp - 0x00000004 : word32)
  Class: Eq_176
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_179 t0000)))
T_177: (in 0x00000000 : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_178
  DataType: ptr32
  OrigDataType: ptr32
T_179: (in Mem47[fp - 0x00000004 + 0x00000000:HGLOBAL] : HGLOBAL)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HGLOBAL
T_180: (in GlobalFree(*(fp - 0x00000004)) : HGLOBAL)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HGLOBAL
T_181: (in 0x004020B2 : ptr32)
  Class: Eq_181
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_182 t0000)))
T_182: (in Mem47[0x004020B2:word32] : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in fp - 0x00000004 : word32)
  Class: Eq_183
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_186 t0000)))
T_184: (in 0x00000000 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_185
  DataType: ptr32
  OrigDataType: ptr32
T_186: (in Mem52[fp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_187: (in ExitProcess : ptr32)
  Class: Eq_187
  DataType: (ptr Eq_187)
  OrigDataType: (ptr (fn T_194 (T_193)))
T_188: (in signature of ExitProcess : void)
  Class: Eq_187
  DataType: (ptr Eq_187)
  OrigDataType: 
T_189: (in uExitCode : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: 
T_190: (in fp - 0x00000004 : word32)
  Class: Eq_190
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (struct (0 T_193 t0000)))
T_191: (in 0x00000000 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_192
  DataType: ptr32
  OrigDataType: ptr32
T_193: (in Mem52[fp - 0x00000004 + 0x00000000:UINT] : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: UINT
T_194: (in ExitProcess(*(fp - 0x00000004)) : void)
  Class: Eq_194
  DataType: void
  OrigDataType: void
T_195: (in 0x004020AA : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in 0x00000004 : word32)
  Class: Eq_196
  DataType: ui32
  OrigDataType: ui32
T_197: (in fp - 0x00000004 : word32)
  Class: Eq_197
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_200 t0000)))
T_198: (in 0x00000000 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_199
  DataType: ptr32
  OrigDataType: ptr32
T_200: (in Mem158[fp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_201: (in TranslateMessage : ptr32)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: (ptr (fn T_208 (T_207)))
T_202: (in signature of TranslateMessage : void)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: 
T_203: (in lpMsg : (ptr MSG))
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: 
T_204: (in fp - 0x00000004 : word32)
  Class: Eq_204
  DataType: (ptr (ptr Eq_203))
  OrigDataType: (ptr (struct (0 T_207 t0000)))
T_205: (in 0x00000000 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_206
  DataType: ptr32
  OrigDataType: ptr32
T_207: (in Mem158[fp - 0x00000004 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: (ptr MSG)
T_208: (in TranslateMessage(*(fp - 0x00000004)) : BOOL)
  Class: Eq_208
  DataType: Eq_208
  OrigDataType: BOOL
T_209: (in 0x004020AA : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in fp - 0x00000004 : word32)
  Class: Eq_210
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_213 t0000)))
T_211: (in 0x00000000 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_212
  DataType: ptr32
  OrigDataType: ptr32
T_213: (in Mem162[fp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_214: (in DispatchMessageW : ptr32)
  Class: Eq_214
  DataType: (ptr Eq_214)
  OrigDataType: (ptr (fn T_221 (T_220)))
T_215: (in signature of DispatchMessageW : void)
  Class: Eq_214
  DataType: (ptr Eq_214)
  OrigDataType: 
T_216: (in lpMsg : (ptr MSG))
  Class: Eq_216
  DataType: (ptr Eq_216)
  OrigDataType: 
T_217: (in fp - 0x00000004 : word32)
  Class: Eq_217
  DataType: (ptr (ptr Eq_216))
  OrigDataType: (ptr (struct (0 T_220 t0000)))
T_218: (in 0x00000000 : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_219
  DataType: ptr32
  OrigDataType: ptr32
T_220: (in Mem162[fp - 0x00000004 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_216
  DataType: (ptr Eq_216)
  OrigDataType: (ptr MSG)
T_221: (in DispatchMessageW(*(fp - 0x00000004)) : LRESULT)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: LRESULT
T_222: (in fn0040101B : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_223 ()))
T_223: (in fn0040101B() : void)
  Class: Eq_137
  DataType: void
  OrigDataType: void
T_224: (in 0x004020DE : ptr32)
  Class: Eq_224
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_225 t0000)))
T_225: (in Mem162[0x004020DE:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in 0x00000001 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in globals->dw4020DE + 0x00000001 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_228: (in Mem166[0x004020DE:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_229: (in 0x00000001 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in fp - 0x00000004 : word32)
  Class: Eq_230
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_233 t0000)))
T_231: (in 0x00000000 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_232
  DataType: ptr32
  OrigDataType: ptr32
T_233: (in Mem144[fp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_234: (in 0x00000000 : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_235: (in 0x00000008 : word32)
  Class: Eq_235
  DataType: ui32
  OrigDataType: ui32
T_236: (in fp - 0x00000008 : word32)
  Class: Eq_236
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_239 t0000)))
T_237: (in 0x00000000 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in fp - 0x00000008 + 0x00000000 : word32)
  Class: Eq_238
  DataType: ptr32
  OrigDataType: ptr32
T_239: (in Mem146[fp - 0x00000008 + 0x00000000:word32] : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_240: (in 0x00000000 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_241: (in 0x0000000C : word32)
  Class: Eq_241
  DataType: ui32
  OrigDataType: ui32
T_242: (in fp - 0x0000000C : word32)
  Class: Eq_242
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_245 t0000)))
T_243: (in 0x00000000 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in fp - 0x0000000C + 0x00000000 : word32)
  Class: Eq_244
  DataType: ptr32
  OrigDataType: ptr32
T_245: (in Mem148[fp - 0x0000000C + 0x00000000:word32] : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_246: (in 0x00000000 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_247: (in 0x00000010 : word32)
  Class: Eq_247
  DataType: ui32
  OrigDataType: ui32
T_248: (in fp - 0x00000010 : word32)
  Class: Eq_248
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_251 t0000)))
T_249: (in 0x00000000 : word32)
  Class: Eq_249
  DataType: word32
  OrigDataType: word32
T_250: (in fp - 0x00000010 + 0x00000000 : word32)
  Class: Eq_250
  DataType: ptr32
  OrigDataType: ptr32
T_251: (in Mem150[fp - 0x00000010 + 0x00000000:word32] : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_252: (in 0x004020AA : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in 0x00000014 : word32)
  Class: Eq_253
  DataType: ui32
  OrigDataType: ui32
T_254: (in fp - 0x00000014 : word32)
  Class: Eq_254
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_257 t0000)))
T_255: (in 0x00000000 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in fp - 0x00000014 + 0x00000000 : word32)
  Class: Eq_256
  DataType: ptr32
  OrigDataType: ptr32
T_257: (in Mem152[fp - 0x00000014 + 0x00000000:word32] : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_258: (in PeekMessageW : ptr32)
  Class: Eq_258
  DataType: (ptr Eq_258)
  OrigDataType: (ptr (fn T_289 (T_269, T_274, T_279, T_284, T_288)))
T_259: (in signature of PeekMessageW : void)
  Class: Eq_258
  DataType: (ptr Eq_258)
  OrigDataType: 
T_260: (in lpMsg : LPMSG)
  Class: Eq_260
  DataType: Eq_260
  OrigDataType: 
T_261: (in hWnd : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: 
T_262: (in wMsgFilterMin : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: 
T_263: (in wMsgFilterMax : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: 
T_264: (in wRemoveMsg : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: 
T_265: (in 0x00000014 : word32)
  Class: Eq_265
  DataType: ui32
  OrigDataType: ui32
T_266: (in fp - 0x00000014 : word32)
  Class: Eq_266
  DataType: (ptr Eq_260)
  OrigDataType: (ptr (struct (0 T_269 t0000)))
T_267: (in 0x00000000 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in fp - 0x00000014 + 0x00000000 : word32)
  Class: Eq_268
  DataType: ptr32
  OrigDataType: ptr32
T_269: (in Mem152[fp - 0x00000014 + 0x00000000:LPMSG] : LPMSG)
  Class: Eq_260
  DataType: Eq_260
  OrigDataType: LPMSG
T_270: (in 0x00000010 : word32)
  Class: Eq_270
  DataType: ui32
  OrigDataType: ui32
T_271: (in fp - 0x00000010 : word32)
  Class: Eq_271
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (struct (0 T_274 t0000)))
T_272: (in 0x00000000 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in fp - 0x00000010 + 0x00000000 : word32)
  Class: Eq_273
  DataType: ptr32
  OrigDataType: ptr32
T_274: (in Mem152[fp - 0x00000010 + 0x00000000:HWND] : HWND)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: HWND
T_275: (in 0x0000000C : word32)
  Class: Eq_275
  DataType: ui32
  OrigDataType: ui32
T_276: (in fp - 0x0000000C : word32)
  Class: Eq_276
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (struct (0 T_279 t0000)))
T_277: (in 0x00000000 : word32)
  Class: Eq_277
  DataType: word32
  OrigDataType: word32
T_278: (in fp - 0x0000000C + 0x00000000 : word32)
  Class: Eq_278
  DataType: ptr32
  OrigDataType: ptr32
T_279: (in Mem152[fp - 0x0000000C + 0x00000000:UINT] : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: UINT
T_280: (in 0x00000008 : word32)
  Class: Eq_280
  DataType: ui32
  OrigDataType: ui32
T_281: (in fp - 0x00000008 : word32)
  Class: Eq_281
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (struct (0 T_284 t0000)))
T_282: (in 0x00000000 : word32)
  Class: Eq_282
  DataType: word32
  OrigDataType: word32
T_283: (in fp - 0x00000008 + 0x00000000 : word32)
  Class: Eq_283
  DataType: ptr32
  OrigDataType: ptr32
T_284: (in Mem152[fp - 0x00000008 + 0x00000000:UINT] : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: UINT
T_285: (in fp - 0x00000004 : word32)
  Class: Eq_285
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (struct (0 T_288 t0000)))
T_286: (in 0x00000000 : word32)
  Class: Eq_286
  DataType: word32
  OrigDataType: word32
T_287: (in fp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_287
  DataType: ptr32
  OrigDataType: ptr32
T_288: (in Mem152[fp - 0x00000004 + 0x00000000:UINT] : UINT)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: UINT
T_289: (in PeekMessageW(*(fp - 0x00000014), *(fp - 0x00000010), *(fp - 0x0000000C), *(fp - 0x00000008), *(fp - 0x00000004)) : BOOL)
  Class: Eq_208
  DataType: Eq_208
  OrigDataType: BOOL
T_290: (in 0x004020AE : ptr32)
  Class: Eq_290
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_291 t0000)))
T_291: (in Mem152[0x004020AE:word32] : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in 0x00000012 : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_293: (in globals->dw4020AE == 0x00000012 : bool)
  Class: Eq_293
  DataType: bool
  OrigDataType: bool
*/
typedef struct HBRUSH__;
Eq_1struct Globals {
	struct HBRUSH__ t0002;	// 2
	LRESULT t4012AF(HWND tArg04, UINT tArg08, WPARAM tArg0C, LPARAM tArg10);	// 4012AF
	WCHAR t402000;	// 402000
	WCHAR t402012;	// 402012
	WCHAR t402022;	// 402022
	Eq_87 t40207A;	// 40207A
	Eq_63 t40208A;	// 40208A
	Eq_72 t40208E;	// 40208E
	Eq_75 t402092;	// 402092
	Eq_42 t4020A2;	// 4020A2
	Eq_129 t4020A6;	// 4020A6
	word32 dw4020AE;	// 4020AE
	word32 dw4020B2;	// 4020B2
	Eq_56 t4020D6;	// 4020D6
	Eq_2 t4020DA;	// 4020DA
	word32 dw4020DE;	// 4020DE
	Eq_2 t4020E2;	// 4020E2
} Eq_1;

typedef union Eq_2 {
	byte * u0;
	HGLOBAL u1;
} Eq_2;

typedef struct Eq_12 {
	bcu8 b0000;	// 0
	bcu8 b0001;	// 1
} Eq_12;

typedef void (Eq_27)();

typedef DWORD Eq_29;

typedef Eq_2 (Eq_31)(UINT, SIZE_T);

typedef UINT Eq_33;

typedef SIZE_T Eq_34;

typedef int32 (Eq_40)(HWND, LPCWSTR, LPCWSTR, UINT);

typedef HWND Eq_42;

typedef LPCWSTR Eq_43;

typedef HGLOBAL Eq_55;

typedef HGLOBAL Eq_56;

typedef Eq_63 (Eq_59)(LPCWSTR);

typedef union Eq_63 {
	HINSTANCE u0;
	HMODULE u1;
} Eq_63;

typedef HICON (Eq_66)(Eq_63, LPCWSTR);

typedef HICON Eq_72;

typedef HCURSOR Eq_75;

typedef HCURSOR (Eq_76)(Eq_63, LPCWSTR);

typedef ATOM (Eq_85)(WNDCLASSW *);

typedef WNDCLASSW Eq_87;

typedef ATOM Eq_89;

typedef HCURSOR Eq_90;

typedef HWND (Eq_94)(DWORD, LPCWSTR, LPCWSTR, DWORD, int32, int32, int32, int32, HWND, HMENU, Eq_63, LPVOID);

typedef HMENU Eq_105;

typedef LPVOID Eq_107;

typedef HDC (Eq_126)(HWND);

typedef HDC Eq_129;

typedef void (Eq_132)();

typedef void (Eq_135)();

typedef int32 (Eq_153)(HWND, HDC);

typedef Eq_2 (Eq_173)(Eq_2);

typedef void (Eq_187)(UINT);

typedef BOOL (Eq_201)(MSG *);

typedef MSG Eq_203;

typedef BOOL Eq_208;

typedef LRESULT (Eq_214)(MSG *);

typedef MSG Eq_216;

typedef LRESULT Eq_221;

typedef BOOL (Eq_258)(LPMSG, HWND, UINT, UINT, UINT);

typedef LPMSG Eq_260;
