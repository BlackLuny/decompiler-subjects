// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (804827E code t804827E) (804828E code t804828E) (80494C4 (ptr (ptr code)) ptr80494C4) (8049594 (ptr code) ptr8049594) (80495A0 (ptr code) ptr80495A0) (80495A4 word32 dw80495A4) (80495B4 (ptr code) ptr80495B4) (80495B8 (ptr code) ptr80495B8) (80495BC (ptr code) ptr80495BC) (80495C0 byte b80495C0))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (fn void ())
	T_4 (in call_gmon_start : ptr32)
	T_5 (in signature of call_gmon_start : void)
Eq_7: (fn void (word32, word32))
	T_7 (in frame_dummy : ptr32)
	T_8 (in signature of frame_dummy : void)
Eq_12: (fn void (word32, word32))
	T_12 (in __do_global_ctors_aux : ptr32)
	T_13 (in signature of __do_global_ctors_aux : void)
Eq_24: (fn void (ptr32))
	T_24 (in __align : ptr32)
Eq_29: (fn void ())
	T_29 (in __libc_start_main@@GLIBC_2.0 : ptr32)
	T_30 (in signature of __libc_start_main@@GLIBC_2.0 : void)
Eq_32: (fn void ())
	T_32 (in __hlt : ptr32)
Eq_105: (fn void (ptr32))
	T_105 (in __align : ptr32)
Eq_110: (fn void ())
	T_110 (in printf@@GLIBC_2.0 : ptr32)
	T_111 (in signature of printf@@GLIBC_2.0 : void)
Eq_114: (struct "Eq_114" (10AE (arr (ptr code)) a10AE) (110C (ptr code) ptr110C))
	T_114 (in ebx_19 : (ptr Eq_114))
	T_119 (in __i686.get_pc_thunk.bx(dwLoc20) : word32)
	T_149 (in ebx_11 : (ptr Eq_114))
	T_152 (in __i686.get_pc_thunk.bx(dwLoc10) : word32)
Eq_115: (fn (ptr Eq_114) (word32))
	T_115 (in __i686.get_pc_thunk.bx : ptr32)
	T_116 (in signature of __i686.get_pc_thunk.bx : void)
	T_150 (in __i686.get_pc_thunk.bx : ptr32)
Eq_120: (fn void (word32, word32))
	T_120 (in _init : ptr32)
	T_121 (in signature of _init : void)
Eq_124: (union "Eq_124" (int32 u0) (uint32 u1))
	T_124 (in 0x00000000 : word32)
	T_131 (in &ebx_19->ptr110C - &ebx_19->ptr110C >> 0x00000002 : word32)
Eq_186: (fn void (int32))
	T_186 (in _fini : ptr32)
	T_187 (in signature of _fini : void)
Eq_210: (fn void (int32))
	T_210 (in __do_global_dtors_aux : ptr32)
	T_211 (in signature of __do_global_dtors_aux : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in edi : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in call_gmon_start : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (fn T_6 ()))
T_5: (in signature of call_gmon_start : void)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: 
T_6: (in call_gmon_start() : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in frame_dummy : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_11 (T_2, T_3)))
T_8: (in signature of frame_dummy : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_10: (in edi : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_11: (in frame_dummy(esi, edi) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in __do_global_ctors_aux : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_16 (T_2, T_3)))
T_13: (in signature of __do_global_ctors_aux : void)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: 
T_14: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_15: (in edi : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_16: (in __do_global_ctors_aux(esi, edi) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in esp_3 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in 0x080495B4 : ptr32)
  Class: Eq_18
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_19 t0000)))
T_19: (in Mem0[0x080495B4:word32] : word32)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_20: (in esp_3 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in 0x080495B8 : ptr32)
  Class: Eq_21
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_22 t0000)))
T_22: (in Mem0[0x080495B8:word32] : word32)
  Class: Eq_22
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_23: (in dwArg00 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in __align : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_28 (T_27)))
T_25: (in fp : ptr32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: ptr32
T_26: (in 0x00000004 : word32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_27: (in fp + 0x00000004 : word32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in __align(fp + 0x00000004) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in __libc_start_main@@GLIBC_2.0 : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_31 ()))
T_30: (in signature of __libc_start_main@@GLIBC_2.0 : void)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: 
T_31: (in __libc_start_main@@GLIBC_2.0() : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __hlt : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_33 ()))
T_33: (in __hlt() : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in eax_15 : (ptr code))
  Class: Eq_34
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_35: (in 080495BC : ptr32)
  Class: Eq_35
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_38 t0000)))
T_36: (in 0x00000000 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in 0x080495BC + 0x00000000 : word32)
  Class: Eq_37
  DataType: ptr32
  OrigDataType: ptr32
T_38: (in Mem0[0x080495BC + 0x00000000:word32] : word32)
  Class: Eq_34
  DataType: (ptr code)
  OrigDataType: word32
T_39: (in 0x00000000 : word32)
  Class: Eq_34
  DataType: (ptr code)
  OrigDataType: word32
T_40: (in eax_15 == null : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in esp_29 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in ebp_30 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in ebx_31 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in SCZO_32 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in eax_33 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in SZO_34 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in C_35 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in Z_36 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in esi : int32)
  Class: Eq_49
  DataType: int32
  OrigDataType: word32
T_50: (in 0x080495C0 : ptr32)
  Class: Eq_50
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_51 t0000)))
T_51: (in Mem0[0x080495C0:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_53: (in globals->b80495C0 != 0x00 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in eax_25 : (ptr (ptr code)))
  Class: Eq_54
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_57 t0000)))
T_55: (in 0x080494C4 : word32)
  Class: Eq_55
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_56 t0000)))
T_56: (in Mem0[0x080494C4:word32] : word32)
  Class: Eq_54
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_57: (in edx_26 : (ptr code))
  Class: Eq_57
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_58: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in eax_25 + 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in Mem0[eax_25 + 0x00000000:word32] : word32)
  Class: Eq_57
  DataType: (ptr code)
  OrigDataType: word32
T_61: (in 0x00000000 : word32)
  Class: Eq_57
  DataType: (ptr code)
  OrigDataType: word32
T_62: (in edx_26 == null : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in 0x01 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_64: (in 0x080495C0 : ptr32)
  Class: Eq_64
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_65 t0000)))
T_65: (in Mem39[0x080495C0:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_66: (in eax_42 : (ptr (ptr code)))
  Class: Eq_54
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_67: (in 0x00000004 : word32)
  Class: Eq_67
  DataType: int32
  OrigDataType: int32
T_68: (in eax_25 + 0x00000004 : word32)
  Class: Eq_54
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_69: (in 0x080494C4 : word32)
  Class: Eq_69
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_70 t0000)))
T_70: (in Mem44[0x080494C4:word32] : word32)
  Class: Eq_54
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_71: (in esp_45 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in ebp_46 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in SCZO_47 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in Z_48 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in eax_49 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in edx_50 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in SZO_51 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in C_52 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in esi_53 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in 0x080494C4 : word32)
  Class: Eq_80
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem44[0x080494C4:word32] : word32)
  Class: Eq_54
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in eax_25 + 0x00000000 : word32)
  Class: Eq_83
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_84: (in Mem44[eax_25 + 0x00000000:word32] : word32)
  Class: Eq_57
  DataType: (ptr code)
  OrigDataType: word32
T_85: (in 0x00000000 : word32)
  Class: Eq_57
  DataType: (ptr code)
  OrigDataType: word32
T_86: (in *eax_25 != null : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x080495A4 : word32)
  Class: Eq_87
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_88 t0000)))
T_88: (in Mem0[0x080495A4:word32] : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in 0x00000000 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_90: (in globals->dw80495A4 == 0x00000000 : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_93: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in esp_32 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in ebp_33 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in SCZO_34 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in eax_35 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in SZO_36 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in C_37 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in Z_38 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in esi_39 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in edi_40 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in fn00000000 : ptr32)
  Class: Eq_103
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_104: (in signature of fn00000000 : void)
  Class: Eq_103
  DataType: (ptr code)
  OrigDataType: 
T_105: (in __align : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_109 (T_108)))
T_106: (in fp : ptr32)
  Class: Eq_106
  DataType: ptr32
  OrigDataType: ptr32
T_107: (in 0x0000001C : word32)
  Class: Eq_107
  DataType: ui32
  OrigDataType: ui32
T_108: (in fp - 0x0000001C : word32)
  Class: Eq_108
  DataType: ptr32
  OrigDataType: ptr32
T_109: (in __align(fp - 0x0000001C) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_110: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_112 ()))
T_111: (in signature of printf@@GLIBC_2.0 : void)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: 
T_112: (in printf@@GLIBC_2.0() : void)
  Class: Eq_112
  DataType: void
  OrigDataType: void
T_113: (in edi : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_114: (in ebx_19 : (ptr Eq_114))
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (struct (110C T_145 t110C)))
T_115: (in __i686.get_pc_thunk.bx : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_119 (T_118)))
T_116: (in signature of __i686.get_pc_thunk.bx : void)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: 
T_117: (in dwArg00 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in dwLoc20 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_119: (in __i686.get_pc_thunk.bx(dwLoc20) : word32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: word32
T_120: (in _init : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_123 (T_122, T_113)))
T_121: (in signature of _init : void)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: 
T_122: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_123: (in _init(0x00000000, edi) : void)
  Class: Eq_123
  DataType: void
  OrigDataType: void
T_124: (in 0x00000000 : word32)
  Class: Eq_124
  DataType: uint32
  OrigDataType: uint32
T_125: (in 0x0000110C : word32)
  Class: Eq_125
  DataType: int32
  OrigDataType: int32
T_126: (in ebx_19 + 0x0000110C : word32)
  Class: Eq_126
  DataType: int32
  OrigDataType: int32
T_127: (in 0x0000110C : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_128: (in ebx_19 + 0x0000110C : word32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_129: (in &ebx_19->ptr110C - &ebx_19->ptr110C : word32)
  Class: Eq_129
  DataType: int32
  OrigDataType: int32
T_130: (in 0x00000002 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in &ebx_19->ptr110C - &ebx_19->ptr110C >> 0x00000002 : word32)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: (union (int32 u0) (uint32 u1))
T_132: (in 0x00000000 >= &ebx_19->ptr110C - &ebx_19->ptr110C >> 0x00000002 : bool)
  Class: Eq_132
  DataType: bool
  OrigDataType: bool
T_133: (in esp_47 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in ebp_48 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in edi_49 : uint32)
  Class: Eq_135
  DataType: uint32
  OrigDataType: uint32
T_136: (in esi_50 : uint32)
  Class: Eq_136
  DataType: uint32
  OrigDataType: uint32
T_137: (in SZO_51 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in C_52 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in ebx_53 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in SCZO_54 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in edx_55 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in eax_56 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in 0x0000110C : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in ebx_19 + 0x0000110C : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in Mem0[ebx_19 + 0x0000110C:word32] : word32)
  Class: Eq_145
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_146: (in 0x00000001 : word32)
  Class: Eq_146
  DataType: uint32
  OrigDataType: uint32
T_147: (in esi_50 + 0x00000001 : word32)
  Class: Eq_135
  DataType: uint32
  OrigDataType: uint32
T_148: (in esi_50 + 0x00000001 < edi_49 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in ebx_11 : (ptr Eq_114))
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (struct (10AE (arr T_213) a10AE)))
T_150: (in __i686.get_pc_thunk.bx : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_152 (T_151)))
T_151: (in dwLoc10 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_152: (in __i686.get_pc_thunk.bx(dwLoc10) : word32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: word32
T_153: (in eax_17 : int32)
  Class: Eq_153
  DataType: int32
  OrigDataType: int32
T_154: (in 0x000010AE : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in ebx_11 + 0x000010AE : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in 0x000010AE : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in ebx_11 + 0x000010AE : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in ebx_11->a10AE - ebx_11->a10AE : word32)
  Class: Eq_153
  DataType: int32
  OrigDataType: word32
T_159: (in esi_22 : int32)
  Class: Eq_49
  DataType: int32
  OrigDataType: int32
T_160: (in 0x00000002 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in eax_17 >> 0x00000002 : word32)
  Class: Eq_161
  DataType: int32
  OrigDataType: int32
T_162: (in 0x00000001 : word32)
  Class: Eq_162
  DataType: int32
  OrigDataType: int32
T_163: (in (eax_17 >> 0x00000002) - 0x00000001 : word32)
  Class: Eq_49
  DataType: int32
  OrigDataType: int32
T_164: (in eax_17 >> 0x00000002 : word32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_165: (in 0x00000000 : word32)
  Class: Eq_164
  DataType: int32
  OrigDataType: word32
T_166: (in eax_17 >> 0x00000002 != 0x00000000 : bool)
  Class: Eq_166
  DataType: bool
  OrigDataType: bool
T_167: (in esp_36 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in ebp_37 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in SCZO_38 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in ebx_39 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in esi_40 : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in eax_41 : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_173: (in edx_42 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in SZO_43 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in C_44 : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in Z_45 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in 0x000010AE : word32)
  Class: Eq_177
  DataType: int32
  OrigDataType: int32
T_178: (in ebx_11 + 0x000010AE : word32)
  Class: Eq_178
  DataType: (ptr (ptr code))
  OrigDataType: (ptr T_213)
T_179: (in 0x00000004 : word32)
  Class: Eq_179
  DataType: ui32
  OrigDataType: ui32
T_180: (in esi_22 * 0x00000004 : word32)
  Class: Eq_180
  DataType: ui32
  OrigDataType: ui32
T_181: (in (ebx_11 + 0x000010AE)[esi_22 * 0x00000004] : word32)
  Class: Eq_181
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_182: (in 0x00000001 : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in esi_40 - 0x00000001 : word32)
  Class: Eq_49
  DataType: int32
  OrigDataType: word32
T_184: (in 0x00000000 : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_185: (in esi_40 != 0x00000000 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in _fini : ptr32)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: (ptr (fn T_189 (T_159)))
T_187: (in signature of _fini : void)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: 
T_188: (in esi : int32)
  Class: Eq_49
  DataType: int32
  OrigDataType: word32
T_189: (in _fini(esi_22) : void)
  Class: Eq_189
  DataType: void
  OrigDataType: void
T_190: (in ebx : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in dwArg00 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_192: (in eax_12 : (ptr code))
  Class: Eq_192
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_193: (in 0x08049594 : word32)
  Class: Eq_193
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_194 t0000)))
T_194: (in Mem0[0x08049594:word32] : word32)
  Class: Eq_192
  DataType: (ptr code)
  OrigDataType: word32
T_195: (in 0xFFFFFFFF : word32)
  Class: Eq_192
  DataType: (ptr code)
  OrigDataType: word32
T_196: (in eax_12 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in esp_33 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in ebp_34 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in ebx_35 : (ptr word32))
  Class: Eq_199
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_207 t0000)))
T_200: (in SCZO_36 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in eax_37 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in Z_38 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in esi_39 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in edi_40 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in 0x00000000 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in ebx_35 + 0x00000000 : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in Mem0[ebx_35 + 0x00000000:word32] : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in 0xFFFFFFFF : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_209: (in *ebx_35 != 0xFFFFFFFF : bool)
  Class: Eq_209
  DataType: bool
  OrigDataType: bool
T_210: (in __do_global_dtors_aux : ptr32)
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: (ptr (fn T_212 (T_188)))
T_211: (in signature of __do_global_dtors_aux : void)
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: 
T_212: (in __do_global_dtors_aux(esi) : void)
  Class: Eq_212
  DataType: void
  OrigDataType: void
T_213:
  Class: Eq_213
  DataType: (ptr code)
  OrigDataType: (struct 0004 (0 T_181 t0000))
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t804827E;	// 804827E
	<anonymous> t804828E;	// 804828E
	<anonymous> ** ptr80494C4;	// 80494C4
	<anonymous> * ptr8049594;	// 8049594
	<anonymous> * ptr80495A0;	// 80495A0
	word32 dw80495A4;	// 80495A4
	<anonymous> * ptr80495B4;	// 80495B4
	<anonymous> * ptr80495B8;	// 80495B8
	<anonymous> * ptr80495BC;	// 80495BC
	byte b80495C0;	// 80495C0
} Eq_1;

typedef void (Eq_4)();

typedef void (Eq_7)(word32, word32);

typedef void (Eq_12)(word32, word32);

typedef void (Eq_24)(ptr32);

typedef void (Eq_29)();

typedef void (Eq_32)();

typedef void (Eq_105)(ptr32);

typedef void (Eq_110)();

typedef struct Eq_114 {
	<anonymous> * a10AE[];	// 10AE
	<anonymous> * ptr110C;	// 110C
} Eq_114;

typedef Eq_114 * (Eq_115)(word32);

typedef void (Eq_120)(word32, word32);

typedef union Eq_124 {
	int32 u0;
	uint32 u1;
} Eq_124;

typedef void (Eq_186)(int32);

typedef void (Eq_210)(int32);
