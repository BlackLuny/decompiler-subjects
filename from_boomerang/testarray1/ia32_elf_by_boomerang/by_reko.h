// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (80482A6 code t80482A6) (80482B6 code t80482B6) (80494BC (ptr code) ptr80494BC) (80494C8 (ptr code) ptr80494C8) (80494CC word32 dw80494CC) (80495A0 (ptr code) ptr80495A0) (80495A8 (ptr code) ptr80495A8) (80495AC (ptr code) ptr80495AC) (80495B8 (ptr (ptr code)) ptr80495B8) (80495C4 byte b80495C4))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void ())
	T_3 (in call_gmon_start : ptr32)
	T_4 (in signature of call_gmon_start : void)
Eq_6: (fn void (word32))
	T_6 (in frame_dummy : ptr32)
	T_7 (in signature of frame_dummy : void)
Eq_10: (fn void ())
	T_10 (in __do_global_ctors_aux : ptr32)
	T_11 (in signature of __do_global_ctors_aux : void)
Eq_20: (fn void (ptr32))
	T_20 (in __align : ptr32)
Eq_25: (fn void ())
	T_25 (in fn080482A0 : ptr32)
	T_26 (in signature of fn080482A0 : void)
Eq_28: (fn void ())
	T_28 (in __hlt : ptr32)
Eq_90: (fn void (ptr32))
	T_90 (in __align : ptr32)
Eq_97: (fn void ())
	T_97 (in fn080482B0 : ptr32)
	T_98 (in signature of fn080482B0 : void)
Eq_105: (fn void (word32))
	T_105 (in _init : ptr32)
	T_106 (in signature of _init : void)
Eq_117: (union "Eq_117" (int32 u0) (ptr32 u1))
	T_117 (in edi_49 : Eq_117)
Eq_131: (union "Eq_131" (int32 u0) (uint32 u1))
	T_131 (in esi_50 + 0x00000001 : word32)
	T_135 (in 0x0804967C - edi_49 >> 0x00000002 : word32)
Eq_132: (union "Eq_132" (int32 u0) (ptr32 u1))
	T_132 (in 0804967C : ptr32)
Eq_133: (union "Eq_133" (int32 u0) (ptr32 u1))
	T_133 (in 0x0804967C - edi_49 : word32)
Eq_162: (fn void ())
	T_162 (in _fini : ptr32)
	T_163 (in signature of _fini : void)
Eq_180: (fn void ())
	T_180 (in __do_global_dtors_aux : ptr32)
	T_181 (in signature of __do_global_dtors_aux : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in call_gmon_start : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_5 ()))
T_4: (in signature of call_gmon_start : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in call_gmon_start() : void)
  Class: Eq_5
  DataType: void
  OrigDataType: void
T_6: (in frame_dummy : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_9 (T_2)))
T_7: (in signature of frame_dummy : void)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_8: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_9: (in frame_dummy(esi) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in __do_global_ctors_aux : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_12 ()))
T_11: (in signature of __do_global_ctors_aux : void)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: 
T_12: (in __do_global_ctors_aux() : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in esp_3 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in 0x080495A8 : ptr32)
  Class: Eq_14
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_15 t0000)))
T_15: (in Mem0[0x080495A8:word32] : word32)
  Class: Eq_15
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_16: (in esp_3 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in 0x080495AC : ptr32)
  Class: Eq_17
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_18 t0000)))
T_18: (in Mem0[0x080495AC:word32] : word32)
  Class: Eq_18
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_19: (in dwArg00 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in __align : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_21: (in fp : ptr32)
  Class: Eq_21
  DataType: ptr32
  OrigDataType: ptr32
T_22: (in 0x00000004 : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_23: (in fp + 0x00000004 : word32)
  Class: Eq_23
  DataType: ptr32
  OrigDataType: ptr32
T_24: (in __align(fp + 0x00000004) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in fn080482A0 : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 ()))
T_26: (in signature of fn080482A0 : void)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: 
T_27: (in fn080482A0() : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __hlt : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_29 ()))
T_29: (in __hlt() : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in eax_15 : (ptr code))
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_31: (in 080495A0 : ptr32)
  Class: Eq_31
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_34 t0000)))
T_32: (in 0x00000000 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 0x080495A0 + 0x00000000 : word32)
  Class: Eq_33
  DataType: ptr32
  OrigDataType: ptr32
T_34: (in Mem0[0x080495A0 + 0x00000000:word32] : word32)
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: word32
T_35: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: word32
T_36: (in eax_15 == null : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in esp_31 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in ebp_32 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in ebx_33 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in SCZO_34 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in edx_35 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in eax_36 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in SZO_37 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in C_38 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in Z_39 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x080495C4 : ptr32)
  Class: Eq_46
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_47 t0000)))
T_47: (in Mem0[0x080495C4:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in globals->b80495C4 == 0x00 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in eax_26 : (ptr (ptr code)))
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_56 t0000)))
T_51: (in 0x080495B8 : word32)
  Class: Eq_51
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_52 t0000)))
T_52: (in Mem0[0x080495B8:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_53: (in edx_27 : (ptr code))
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_54: (in 0x00000000 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in eax_26 + 0x00000000 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in Mem0[eax_26 + 0x00000000:word32] : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_57: (in 0x00000000 : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_58: (in edx_27 != null : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in 0x00000004 : word32)
  Class: Eq_59
  DataType: int32
  OrigDataType: int32
T_60: (in eax_26 + 0x00000004 : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_61: (in 0x080495B8 : word32)
  Class: Eq_61
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_62 t0000)))
T_62: (in Mem34[0x080495B8:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_63: (in esp_35 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in ebp_36 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in SCZO_37 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in Z_38 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in eax_39 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in edx_40 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in SZO_41 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in C_42 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_72: (in 0x080495C4 : ptr32)
  Class: Eq_72
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_73 t0000)))
T_73: (in Mem31[0x080495C4:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_74: (in 0x080494CC : word32)
  Class: Eq_74
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_75 t0000)))
T_75: (in Mem0[0x080494CC:word32] : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in 0x00000000 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_77: (in globals->dw80494CC == 0x00000000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 0x00000000 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in 0x00000000 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_80: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in esp_33 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in ebp_34 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in SCZO_35 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in eax_36 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in SZO_37 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in C_38 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in Z_39 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in esi_40 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_90: (in __align : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (fn T_94 (T_93)))
T_91: (in fp : ptr32)
  Class: Eq_91
  DataType: ptr32
  OrigDataType: ptr32
T_92: (in 0x0000000C : word32)
  Class: Eq_92
  DataType: ui32
  OrigDataType: ui32
T_93: (in fp - 0x0000000C : word32)
  Class: Eq_93
  DataType: ptr32
  OrigDataType: ptr32
T_94: (in __align(fp - 0x0000000C) : void)
  Class: Eq_94
  DataType: void
  OrigDataType: void
T_95: (in dwLoc08_15 : int32)
  Class: Eq_95
  DataType: int32
  OrigDataType: int32
T_96: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: int32
  OrigDataType: word32
T_97: (in fn080482B0 : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_99 ()))
T_98: (in signature of fn080482B0 : void)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: 
T_99: (in fn080482B0() : void)
  Class: Eq_99
  DataType: void
  OrigDataType: void
T_100: (in 0x00000001 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in dwLoc08_15 + 0x00000001 : word32)
  Class: Eq_95
  DataType: int32
  OrigDataType: word32
T_102: (in 0x00000004 : word32)
  Class: Eq_95
  DataType: int32
  OrigDataType: int32
T_103: (in dwLoc08_15 > 0x00000004 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_105: (in _init : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_107 (T_104)))
T_106: (in signature of _init : void)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: 
T_107: (in _init(esi) : void)
  Class: Eq_107
  DataType: void
  OrigDataType: void
T_108: (in 0x00000000 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in 0804967C : ptr32)
  Class: Eq_109
  DataType: ptr32
  OrigDataType: ptr32
T_110: (in 0804967C : ptr32)
  Class: Eq_110
  DataType: ptr32
  OrigDataType: ptr32
T_111: (in 0x0804967C - 0x0804967C : word32)
  Class: Eq_111
  DataType: Eq_111
  OrigDataType: 
T_112: (in 0x00000002 : word32)
  Class: Eq_112
  DataType: Eq_112
  OrigDataType: 
T_113: (in 0x0804967C - 0x0804967C >> 0x00000002 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: 
T_114: (in 0x00000000 >=u 0x0804967C - 0x0804967C >> 0x00000002 : bool)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: 
T_115: (in esp_47 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in ebp_48 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in edi_49 : Eq_117)
  Class: Eq_117
  DataType: Eq_117
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_118: (in esi_50 : uint32)
  Class: Eq_118
  DataType: uint32
  OrigDataType: uint32
T_119: (in ebx_51 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in SCZO_52 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in eax_53 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in edx_54 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in SZO_55 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in C_56 : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in ecx_57 : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in 0804967C : ptr32)
  Class: Eq_126
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_129 t0000)))
T_127: (in 0x00000000 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in 0x0804967C + 0x00000000 : word32)
  Class: Eq_128
  DataType: ptr32
  OrigDataType: ptr32
T_129: (in Mem0[0x0804967C + 0x00000000:word32] : word32)
  Class: Eq_129
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_130: (in 0x00000001 : word32)
  Class: Eq_130
  DataType: uint32
  OrigDataType: uint32
T_131: (in esi_50 + 0x00000001 : word32)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: uint32
T_132: (in 0804967C : ptr32)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_133: (in 0x0804967C - edi_49 : word32)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_134: (in 0x00000002 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in 0x0804967C - edi_49 >> 0x00000002 : word32)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: (union (int32 u0) (uint32 u1))
T_136: (in esi_50 + 0x00000001 <u 0x0804967C - edi_49 >> 0x00000002 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in edi_18 : (arr (ptr code)))
  Class: Eq_137
  DataType: (ptr (arr (ptr code)))
  OrigDataType: (ptr (struct (0 (arr T_183) a0000)))
T_138: (in 0804967C : ptr32)
  Class: Eq_137
  DataType: (ptr (arr (ptr code)))
  OrigDataType: ptr32
T_139: (in esi_23 : word32)
  Class: Eq_139
  DataType: ui32
  OrigDataType: ui32
T_140: (in 0804967C : ptr32)
  Class: Eq_140
  DataType: ptr32
  OrigDataType: ptr32
T_141: (in 0804967C : ptr32)
  Class: Eq_141
  DataType: ptr32
  OrigDataType: ptr32
T_142: (in 0x0804967C - 0x0804967C : word32)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: 
T_143: (in 0x00000002 : word32)
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: 
T_144: (in 0x0804967C - 0x0804967C >> 0x00000002 : word32)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: 
T_145: (in 0x00000001 : word32)
  Class: Eq_145
  DataType: Eq_145
  OrigDataType: 
T_146: (in (0x0804967C - 0x0804967C >> 0x00000002) - 0x00000001 : word32)
  Class: Eq_139
  DataType: ui32
  OrigDataType: 
T_147: (in 0xFFFFFFFF : word32)
  Class: Eq_139
  DataType: ui32
  OrigDataType: word32
T_148: (in esi_23 != 0xFFFFFFFF : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in esp_45 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in ebp_46 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in esi_48 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in ebx_49 : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in SCZO_50 : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in eax_51 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in Z_52 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in SZO_53 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in 0x00000004 : word32)
  Class: Eq_157
  DataType: ui32
  OrigDataType: ui32
T_158: (in esi_23 * 0x00000004 : word32)
  Class: Eq_158
  DataType: ui32
  OrigDataType: ui32
T_159: (in edi_18[esi_23 * 0x00000004] : word32)
  Class: Eq_159
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_160: (in 0x00000001 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in esi_48 - 0x00000001 : word32)
  Class: Eq_139
  DataType: ui32
  OrigDataType: word32
T_162: (in _fini : ptr32)
  Class: Eq_162
  DataType: (ptr Eq_162)
  OrigDataType: (ptr (fn T_164 ()))
T_163: (in signature of _fini : void)
  Class: Eq_162
  DataType: (ptr Eq_162)
  OrigDataType: 
T_164: (in _fini() : void)
  Class: Eq_164
  DataType: void
  OrigDataType: void
T_165: (in eax_14 : (ptr code))
  Class: Eq_165
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_166: (in 0x080494BC : word32)
  Class: Eq_166
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_167 t0000)))
T_167: (in Mem0[0x080494BC:word32] : word32)
  Class: Eq_165
  DataType: (ptr code)
  OrigDataType: word32
T_168: (in 0xFFFFFFFF : word32)
  Class: Eq_165
  DataType: (ptr code)
  OrigDataType: word32
T_169: (in eax_14 != (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in esp_30 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in ebp_31 : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in ebx_32 : (ptr (ptr code)))
  Class: Eq_172
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_179 t0000)))
T_173: (in edx_33 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in eax_34 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in SCZO_35 : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in Z_36 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in 0x00000000 : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in ebx_32 + 0x00000000 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in Mem0[ebx_32 + 0x00000000:word32] : word32)
  Class: Eq_165
  DataType: (ptr code)
  OrigDataType: word32
T_180: (in __do_global_dtors_aux : ptr32)
  Class: Eq_180
  DataType: (ptr Eq_180)
  OrigDataType: (ptr (fn T_182 ()))
T_181: (in signature of __do_global_dtors_aux : void)
  Class: Eq_180
  DataType: (ptr Eq_180)
  OrigDataType: 
T_182: (in __do_global_dtors_aux() : void)
  Class: Eq_182
  DataType: void
  OrigDataType: void
T_183:
  Class: Eq_183
  DataType: (ptr code)
  OrigDataType: (struct 0004 (0 T_159 t0000))
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t80482A6;	// 80482A6
	<anonymous> t80482B6;	// 80482B6
	<anonymous> * ptr80494BC;	// 80494BC
	<anonymous> * ptr80494C8;	// 80494C8
	word32 dw80494CC;	// 80494CC
	<anonymous> * ptr80495A0;	// 80495A0
	<anonymous> * ptr80495A8;	// 80495A8
	<anonymous> * ptr80495AC;	// 80495AC
	<anonymous> ** ptr80495B8;	// 80495B8
	byte b80495C4;	// 80495C4
} Eq_1;

typedef void (Eq_3)();

typedef void (Eq_6)(word32);

typedef void (Eq_10)();

typedef void (Eq_20)(ptr32);

typedef void (Eq_25)();

typedef void (Eq_28)();

typedef void (Eq_90)(ptr32);

typedef void (Eq_97)();

typedef void (Eq_105)(word32);

typedef union Eq_117 {
	int32 u0;
	ptr32 u1;
} Eq_117;

typedef union Eq_131 {
	int32 u0;
	uint32 u1;
} Eq_131;

typedef union Eq_132 {
	int32 u0;
	ptr32 u1;
} Eq_132;

typedef union Eq_133 {
	int32 u0;
	ptr32 u1;
} Eq_133;

typedef void (Eq_162)();

typedef void (Eq_180)();
