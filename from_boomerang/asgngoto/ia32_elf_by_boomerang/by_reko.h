// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (804859A code t804859A) (80485AA code t80485AA) (80485BA code t80485BA) (80485CA code t80485CA) (80485DA code t80485DA) (80485EA code t80485EA) (80485FA code t80485FA) (804860A code t804860A) (804861A code t804861A) (8048760 code t8048760) (8048793 code t8048793) (80487C3 code t80487C3) (80487F3 code t80487F3) (80499B8 (ptr code) ptr80499B8) (80499C4 (ptr code) ptr80499C4) (80499C8 word32 dw80499C8) (8049AB8 (ptr code) ptr8049AB8) (8049ABC word32 dw8049ABC) (8049ACC (ptr code) ptr8049ACC) (8049AD0 (ptr code) ptr8049AD0) (8049AD4 (ptr code) ptr8049AD4) (8049AD8 (ptr code) ptr8049AD8) (8049ADC (ptr code) ptr8049ADC) (8049AE0 (ptr code) ptr8049AE0) (8049AE4 (ptr code) ptr8049AE4) (8049AE8 (ptr code) ptr8049AE8) (8049AEC (ptr code) ptr8049AEC) (8049AF8 (ptr (ptr code)) ptr8049AF8) (8049B74 byte b8049B74))
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
Eq_41: (fn void (ptr32))
	T_41 (in __align : ptr32)
Eq_46: (fn void ())
	T_46 (in fn080485C4 : ptr32)
	T_47 (in signature of fn080485C4 : void)
Eq_49: (fn void ())
	T_49 (in __hlt : ptr32)
Eq_112: (fn void ())
	T_112 (in fn08048614 : ptr32)
	T_113 (in signature of fn08048614 : void)
Eq_127: (fn void ())
	T_127 (in fn08048594 : ptr32)
	T_128 (in signature of fn08048594 : void)
Eq_136: (fn void ())
	T_136 (in fn080485B4 : ptr32)
	T_137 (in signature of fn080485B4 : void)
Eq_159: (fn void (ptr32))
	T_159 (in __align : ptr32)
Eq_164: (fn void ())
	T_164 (in fn08048604 : ptr32)
	T_165 (in signature of fn08048604 : void)
Eq_167: (fn void ())
	T_167 (in fn080485E4 : ptr32)
	T_168 (in signature of fn080485E4 : void)
Eq_170: (fn void ())
	T_170 (in fn080485D4 : ptr32)
	T_171 (in signature of fn080485D4 : void)
Eq_173: (fn void (word32))
	T_173 (in atexit : ptr32)
	T_174 (in signature of atexit : void)
Eq_179: (fn (ptr word32) ())
	T_179 (in MAIN__ : ptr32)
	T_180 (in signature of MAIN__ : void)
Eq_185: (fn void ())
	T_185 (in fn080485F4 : ptr32)
	T_186 (in signature of fn080485F4 : void)
Eq_188: (fn void (word32))
	T_188 (in __libc_csu_init : ptr32)
	T_189 (in signature of __libc_csu_init : void)
Eq_192: (fn void (word32))
	T_192 (in _init : ptr32)
	T_193 (in signature of _init : void)
Eq_204: (union "Eq_204" (int32 u0) (ptr32 u1))
	T_204 (in edi_49 : Eq_204)
Eq_218: (union "Eq_218" (int32 u0) (uint32 u1))
	T_218 (in esi_50 + 0x00000001 : word32)
	T_222 (in 0x08049BB0 - edi_49 >> 0x00000002 : word32)
Eq_219: (union "Eq_219" (int32 u0) (ptr32 u1))
	T_219 (in 08049BB0 : ptr32)
Eq_220: (union "Eq_220" (int32 u0) (ptr32 u1))
	T_220 (in 0x08049BB0 - edi_49 : word32)
Eq_249: (fn void ())
	T_249 (in _fini : ptr32)
	T_250 (in signature of _fini : void)
Eq_258: (fn void ())
	T_258 (in fn080485A4 : ptr32)
	T_259 (in signature of fn080485A4 : void)
Eq_276: (fn void ())
	T_276 (in __do_global_dtors_aux : ptr32)
	T_277 (in signature of __do_global_dtors_aux : void)
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
T_14: (in 0x08049ACC : ptr32)
  Class: Eq_14
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_15 t0000)))
T_15: (in Mem0[0x08049ACC:word32] : word32)
  Class: Eq_15
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_16: (in esp_3 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in 0x08049AD0 : ptr32)
  Class: Eq_17
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_18 t0000)))
T_18: (in Mem0[0x08049AD0:word32] : word32)
  Class: Eq_18
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_19: (in esp_3 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in 0x08049AD4 : ptr32)
  Class: Eq_20
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_21 t0000)))
T_21: (in Mem0[0x08049AD4:word32] : word32)
  Class: Eq_21
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_22: (in esp_3 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in 0x08049AD8 : ptr32)
  Class: Eq_23
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_24 t0000)))
T_24: (in Mem0[0x08049AD8:word32] : word32)
  Class: Eq_24
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_25: (in esp_3 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in 0x08049ADC : ptr32)
  Class: Eq_26
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_27 t0000)))
T_27: (in Mem0[0x08049ADC:word32] : word32)
  Class: Eq_27
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_28: (in esp_3 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in 0x08049AE0 : ptr32)
  Class: Eq_29
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_30 t0000)))
T_30: (in Mem0[0x08049AE0:word32] : word32)
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_31: (in esp_3 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in 0x08049AE4 : ptr32)
  Class: Eq_32
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_33 t0000)))
T_33: (in Mem0[0x08049AE4:word32] : word32)
  Class: Eq_33
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_34: (in esp_3 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in 0x08049AE8 : ptr32)
  Class: Eq_35
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_36 t0000)))
T_36: (in Mem0[0x08049AE8:word32] : word32)
  Class: Eq_36
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_37: (in esp_3 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in 0x08049AEC : ptr32)
  Class: Eq_38
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_39 t0000)))
T_39: (in Mem0[0x08049AEC:word32] : word32)
  Class: Eq_39
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_40: (in dwArg00 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in __align : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_45 (T_44)))
T_42: (in fp : ptr32)
  Class: Eq_42
  DataType: ptr32
  OrigDataType: ptr32
T_43: (in 0x00000004 : word32)
  Class: Eq_43
  DataType: int32
  OrigDataType: int32
T_44: (in fp + 0x00000004 : word32)
  Class: Eq_44
  DataType: ptr32
  OrigDataType: ptr32
T_45: (in __align(fp + 0x00000004) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in fn080485C4 : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_48 ()))
T_47: (in signature of fn080485C4 : void)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: 
T_48: (in fn080485C4() : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in __hlt : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_50 ()))
T_50: (in __hlt() : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in eax_15 : (ptr code))
  Class: Eq_51
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_52: (in 08049AB8 : ptr32)
  Class: Eq_52
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_55 t0000)))
T_53: (in 0x00000000 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in 0x08049AB8 + 0x00000000 : word32)
  Class: Eq_54
  DataType: ptr32
  OrigDataType: ptr32
T_55: (in Mem0[0x08049AB8 + 0x00000000:word32] : word32)
  Class: Eq_51
  DataType: (ptr code)
  OrigDataType: word32
T_56: (in 0x00000000 : word32)
  Class: Eq_51
  DataType: (ptr code)
  OrigDataType: word32
T_57: (in eax_15 == null : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in esp_31 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in ebp_32 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in ebx_33 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in SCZO_34 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in edx_35 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in eax_36 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in SZO_37 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in C_38 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in Z_39 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in 0x08049B74 : ptr32)
  Class: Eq_67
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_68 t0000)))
T_68: (in Mem0[0x08049B74:byte] : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in 0x00 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_70: (in globals->b8049B74 == 0x00 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in eax_26 : (ptr (ptr code)))
  Class: Eq_71
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_77 t0000)))
T_72: (in 0x08049AF8 : word32)
  Class: Eq_72
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_73 t0000)))
T_73: (in Mem0[0x08049AF8:word32] : word32)
  Class: Eq_71
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_74: (in edx_27 : (ptr code))
  Class: Eq_74
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_75: (in 0x00000000 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in eax_26 + 0x00000000 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in Mem0[eax_26 + 0x00000000:word32] : word32)
  Class: Eq_74
  DataType: (ptr code)
  OrigDataType: word32
T_78: (in 0x00000000 : word32)
  Class: Eq_74
  DataType: (ptr code)
  OrigDataType: word32
T_79: (in edx_27 != null : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in 0x00000004 : word32)
  Class: Eq_80
  DataType: int32
  OrigDataType: int32
T_81: (in eax_26 + 0x00000004 : word32)
  Class: Eq_71
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_82: (in 0x08049AF8 : word32)
  Class: Eq_82
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_83 t0000)))
T_83: (in Mem34[0x08049AF8:word32] : word32)
  Class: Eq_71
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_84: (in esp_35 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in ebp_36 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in SCZO_37 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in Z_38 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in eax_39 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in edx_40 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in SZO_41 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in C_42 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_93: (in 0x08049B74 : ptr32)
  Class: Eq_93
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_94 t0000)))
T_94: (in Mem31[0x08049B74:byte] : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_95: (in 0x080499C8 : word32)
  Class: Eq_95
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_96 t0000)))
T_96: (in Mem0[0x080499C8:word32] : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in 0x00000000 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_98: (in globals->dw80499C8 == 0x00000000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x00000000 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in 0x00000000 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_101: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in esp_33 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in ebp_34 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in SCZO_35 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in eax_36 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in SZO_37 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in C_38 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in Z_39 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in esi_40 : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in 0x00000000 : word32)
  Class: Eq_110
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_111: (in esp : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in fn08048614 : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_114 ()))
T_113: (in signature of fn08048614 : void)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: 
T_114: (in fn08048614() : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_115: (in esp_21 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in ebp_22 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in SCZO_23 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in eax_24 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in Z_25 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in s_rsle : ptr32)
  Class: Eq_120
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_121: (in esp_28 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in ebp_29 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in SCZO_30 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in eax_31 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in Z_32 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in f_init : ptr32)
  Class: Eq_126
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_127: (in fn08048594 : ptr32)
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: (ptr (fn T_129 ()))
T_128: (in signature of fn08048594 : void)
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: 
T_129: (in fn08048594() : void)
  Class: Eq_129
  DataType: void
  OrigDataType: void
T_130: (in esp_48 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in ebp_49 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in SCZO_50 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in eax_51 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in Z_52 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in s_rsle : ptr32)
  Class: Eq_135
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_136: (in fn080485B4 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_138 ()))
T_137: (in signature of fn080485B4 : void)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: 
T_138: (in fn080485B4() : void)
  Class: Eq_138
  DataType: void
  OrigDataType: void
T_139: (in dwLoc10_55 : (ptr code))
  Class: Eq_139
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_140: (in 0x08048760 : word32)
  Class: Eq_139
  DataType: (ptr code)
  OrigDataType: word32
T_141: (in dwLoc08 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in 0x00000002 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_143: (in dwLoc08 != 0x00000002 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in 0x00000003 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_145: (in dwLoc08 != 0x00000003 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in 0x08048793 : word32)
  Class: Eq_139
  DataType: (ptr code)
  OrigDataType: word32
T_147: (in 0x00000004 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_148: (in dwLoc08 != 0x00000004 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 0x080487C3 : word32)
  Class: Eq_139
  DataType: (ptr code)
  OrigDataType: word32
T_150: (in esp_67 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_151: (in ebp_68 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in SCZO_69 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in eax_70 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in Z_71 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in 0x080487F3 : word32)
  Class: Eq_139
  DataType: (ptr code)
  OrigDataType: word32
T_156: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_157: (in dwArg04 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in dwArg08 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in __align : ptr32)
  Class: Eq_159
  DataType: (ptr Eq_159)
  OrigDataType: (ptr (fn T_163 (T_162)))
T_160: (in fp : ptr32)
  Class: Eq_160
  DataType: ptr32
  OrigDataType: ptr32
T_161: (in 0x0000000C : word32)
  Class: Eq_161
  DataType: ui32
  OrigDataType: ui32
T_162: (in fp - 0x0000000C : word32)
  Class: Eq_162
  DataType: ptr32
  OrigDataType: ptr32
T_163: (in __align(fp - 0x0000000C) : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
T_164: (in fn08048604 : ptr32)
  Class: Eq_164
  DataType: (ptr Eq_164)
  OrigDataType: (ptr (fn T_166 ()))
T_165: (in signature of fn08048604 : void)
  Class: Eq_164
  DataType: (ptr Eq_164)
  OrigDataType: 
T_166: (in fn08048604() : void)
  Class: Eq_166
  DataType: void
  OrigDataType: void
T_167: (in fn080485E4 : ptr32)
  Class: Eq_167
  DataType: (ptr Eq_167)
  OrigDataType: (ptr (fn T_169 ()))
T_168: (in signature of fn080485E4 : void)
  Class: Eq_167
  DataType: (ptr Eq_167)
  OrigDataType: 
T_169: (in fn080485E4() : void)
  Class: Eq_169
  DataType: void
  OrigDataType: void
T_170: (in fn080485D4 : ptr32)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: (ptr (fn T_172 ()))
T_171: (in signature of fn080485D4 : void)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: 
T_172: (in fn080485D4() : void)
  Class: Eq_172
  DataType: void
  OrigDataType: void
T_173: (in atexit : ptr32)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (fn T_177 (T_176)))
T_174: (in signature of atexit : void)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: 
T_175: (in dwArg04 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in 0x08048584 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_177: (in atexit(0x08048584) : void)
  Class: Eq_177
  DataType: void
  OrigDataType: void
T_178: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in MAIN__ : ptr32)
  Class: Eq_179
  DataType: (ptr Eq_179)
  OrigDataType: (ptr (fn T_181 ()))
T_180: (in signature of MAIN__ : void)
  Class: Eq_179
  DataType: (ptr Eq_179)
  OrigDataType: 
T_181: (in MAIN__() : word32)
  Class: Eq_181
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_184 t0000)))
T_182: (in 0x00000000 : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in MAIN__() + 0x00000000 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in Mem17[MAIN__() + 0x00000000:word32] : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_185: (in fn080485F4 : ptr32)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: (ptr (fn T_187 ()))
T_186: (in signature of fn080485F4 : void)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: 
T_187: (in fn080485F4() : void)
  Class: Eq_187
  DataType: void
  OrigDataType: void
T_188: (in __libc_csu_init : ptr32)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: (ptr (fn T_191 (T_156)))
T_189: (in signature of __libc_csu_init : void)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: 
T_190: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_191: (in __libc_csu_init(esi) : void)
  Class: Eq_191
  DataType: void
  OrigDataType: void
T_192: (in _init : ptr32)
  Class: Eq_192
  DataType: (ptr Eq_192)
  OrigDataType: (ptr (fn T_194 (T_190)))
T_193: (in signature of _init : void)
  Class: Eq_192
  DataType: (ptr Eq_192)
  OrigDataType: 
T_194: (in _init(esi) : void)
  Class: Eq_194
  DataType: void
  OrigDataType: void
T_195: (in 0x00000000 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in 08049BB0 : ptr32)
  Class: Eq_196
  DataType: ptr32
  OrigDataType: ptr32
T_197: (in 08049BB0 : ptr32)
  Class: Eq_197
  DataType: ptr32
  OrigDataType: ptr32
T_198: (in 0x08049BB0 - 0x08049BB0 : word32)
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: 
T_199: (in 0x00000002 : word32)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: 
T_200: (in 0x08049BB0 - 0x08049BB0 >> 0x00000002 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: 
T_201: (in 0x00000000 >=u 0x08049BB0 - 0x08049BB0 >> 0x00000002 : bool)
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: 
T_202: (in esp_47 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in ebp_48 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in edi_49 : Eq_204)
  Class: Eq_204
  DataType: Eq_204
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_205: (in esi_50 : uint32)
  Class: Eq_205
  DataType: uint32
  OrigDataType: uint32
T_206: (in ebx_51 : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in SCZO_52 : byte)
  Class: Eq_207
  DataType: byte
  OrigDataType: byte
T_208: (in eax_53 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in edx_54 : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in SZO_55 : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in C_56 : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in ecx_57 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in 08049BB0 : ptr32)
  Class: Eq_213
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_216 t0000)))
T_214: (in 0x00000000 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in 0x08049BB0 + 0x00000000 : word32)
  Class: Eq_215
  DataType: ptr32
  OrigDataType: ptr32
T_216: (in Mem0[0x08049BB0 + 0x00000000:word32] : word32)
  Class: Eq_216
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_217: (in 0x00000001 : word32)
  Class: Eq_217
  DataType: uint32
  OrigDataType: uint32
T_218: (in esi_50 + 0x00000001 : word32)
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: uint32
T_219: (in 08049BB0 : ptr32)
  Class: Eq_219
  DataType: Eq_219
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_220: (in 0x08049BB0 - edi_49 : word32)
  Class: Eq_220
  DataType: Eq_220
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_221: (in 0x00000002 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in 0x08049BB0 - edi_49 >> 0x00000002 : word32)
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: (union (int32 u0) (uint32 u1))
T_223: (in esi_50 + 0x00000001 <u 0x08049BB0 - edi_49 >> 0x00000002 : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224: (in edi_18 : (arr (ptr code)))
  Class: Eq_224
  DataType: (ptr (arr (ptr code)))
  OrigDataType: (ptr (struct (0 (arr T_279) a0000)))
T_225: (in 08049BB0 : ptr32)
  Class: Eq_224
  DataType: (ptr (arr (ptr code)))
  OrigDataType: ptr32
T_226: (in esi_23 : word32)
  Class: Eq_226
  DataType: ui32
  OrigDataType: ui32
T_227: (in 08049BB0 : ptr32)
  Class: Eq_227
  DataType: ptr32
  OrigDataType: ptr32
T_228: (in 08049BB0 : ptr32)
  Class: Eq_228
  DataType: ptr32
  OrigDataType: ptr32
T_229: (in 0x08049BB0 - 0x08049BB0 : word32)
  Class: Eq_229
  DataType: Eq_229
  OrigDataType: 
T_230: (in 0x00000002 : word32)
  Class: Eq_230
  DataType: Eq_230
  OrigDataType: 
T_231: (in 0x08049BB0 - 0x08049BB0 >> 0x00000002 : word32)
  Class: Eq_231
  DataType: Eq_231
  OrigDataType: 
T_232: (in 0x00000001 : word32)
  Class: Eq_232
  DataType: Eq_232
  OrigDataType: 
T_233: (in (0x08049BB0 - 0x08049BB0 >> 0x00000002) - 0x00000001 : word32)
  Class: Eq_226
  DataType: ui32
  OrigDataType: 
T_234: (in 0xFFFFFFFF : word32)
  Class: Eq_226
  DataType: ui32
  OrigDataType: word32
T_235: (in esi_23 != 0xFFFFFFFF : bool)
  Class: Eq_235
  DataType: bool
  OrigDataType: bool
T_236: (in esp_45 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in ebp_46 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in esi_48 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in ebx_49 : word32)
  Class: Eq_239
  DataType: word32
  OrigDataType: word32
T_240: (in SCZO_50 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_241: (in eax_51 : word32)
  Class: Eq_241
  DataType: word32
  OrigDataType: word32
T_242: (in Z_52 : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in SZO_53 : byte)
  Class: Eq_243
  DataType: byte
  OrigDataType: byte
T_244: (in 0x00000004 : word32)
  Class: Eq_244
  DataType: ui32
  OrigDataType: ui32
T_245: (in esi_23 * 0x00000004 : word32)
  Class: Eq_245
  DataType: ui32
  OrigDataType: ui32
T_246: (in edi_18[esi_23 * 0x00000004] : word32)
  Class: Eq_246
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_247: (in 0x00000001 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in esi_48 - 0x00000001 : word32)
  Class: Eq_226
  DataType: ui32
  OrigDataType: word32
T_249: (in _fini : ptr32)
  Class: Eq_249
  DataType: (ptr Eq_249)
  OrigDataType: (ptr (fn T_251 ()))
T_250: (in signature of _fini : void)
  Class: Eq_249
  DataType: (ptr Eq_249)
  OrigDataType: 
T_251: (in _fini() : void)
  Class: Eq_251
  DataType: void
  OrigDataType: void
T_252: (in 08049ABC : ptr32)
  Class: Eq_252
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_255 t0000)))
T_253: (in 0x00000000 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in 0x08049ABC + 0x00000000 : word32)
  Class: Eq_254
  DataType: ptr32
  OrigDataType: ptr32
T_255: (in Mem0[0x08049ABC + 0x00000000:word32] : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in 0x00000000 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_257: (in globals->dw8049ABC == 0x00000000 : bool)
  Class: Eq_257
  DataType: bool
  OrigDataType: bool
T_258: (in fn080485A4 : ptr32)
  Class: Eq_258
  DataType: (ptr Eq_258)
  OrigDataType: (ptr (fn T_260 ()))
T_259: (in signature of fn080485A4 : void)
  Class: Eq_258
  DataType: (ptr Eq_258)
  OrigDataType: 
T_260: (in fn080485A4() : void)
  Class: Eq_260
  DataType: void
  OrigDataType: void
T_261: (in eax_14 : (ptr code))
  Class: Eq_261
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_262: (in 0x080499B8 : word32)
  Class: Eq_262
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_263 t0000)))
T_263: (in Mem0[0x080499B8:word32] : word32)
  Class: Eq_261
  DataType: (ptr code)
  OrigDataType: word32
T_264: (in 0xFFFFFFFF : word32)
  Class: Eq_261
  DataType: (ptr code)
  OrigDataType: word32
T_265: (in eax_14 != (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_265
  DataType: bool
  OrigDataType: bool
T_266: (in esp_30 : word32)
  Class: Eq_266
  DataType: word32
  OrigDataType: word32
T_267: (in ebp_31 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in ebx_32 : (ptr (ptr code)))
  Class: Eq_268
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_275 t0000)))
T_269: (in edx_33 : word32)
  Class: Eq_269
  DataType: word32
  OrigDataType: word32
T_270: (in eax_34 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in SCZO_35 : byte)
  Class: Eq_271
  DataType: byte
  OrigDataType: byte
T_272: (in Z_36 : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in 0x00000000 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in ebx_32 + 0x00000000 : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in Mem0[ebx_32 + 0x00000000:word32] : word32)
  Class: Eq_261
  DataType: (ptr code)
  OrigDataType: word32
T_276: (in __do_global_dtors_aux : ptr32)
  Class: Eq_276
  DataType: (ptr Eq_276)
  OrigDataType: (ptr (fn T_278 ()))
T_277: (in signature of __do_global_dtors_aux : void)
  Class: Eq_276
  DataType: (ptr Eq_276)
  OrigDataType: 
T_278: (in __do_global_dtors_aux() : void)
  Class: Eq_278
  DataType: void
  OrigDataType: void
T_279:
  Class: Eq_279
  DataType: (ptr code)
  OrigDataType: (struct 0004 (0 T_246 t0000))
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t804859A;	// 804859A
	<anonymous> t80485AA;	// 80485AA
	<anonymous> t80485BA;	// 80485BA
	<anonymous> t80485CA;	// 80485CA
	<anonymous> t80485DA;	// 80485DA
	<anonymous> t80485EA;	// 80485EA
	<anonymous> t80485FA;	// 80485FA
	<anonymous> t804860A;	// 804860A
	<anonymous> t804861A;	// 804861A
	<anonymous> t8048760;	// 8048760
	<anonymous> t8048793;	// 8048793
	<anonymous> t80487C3;	// 80487C3
	<anonymous> t80487F3;	// 80487F3
	<anonymous> * ptr80499B8;	// 80499B8
	<anonymous> * ptr80499C4;	// 80499C4
	word32 dw80499C8;	// 80499C8
	<anonymous> * ptr8049AB8;	// 8049AB8
	word32 dw8049ABC;	// 8049ABC
	<anonymous> * ptr8049ACC;	// 8049ACC
	<anonymous> * ptr8049AD0;	// 8049AD0
	<anonymous> * ptr8049AD4;	// 8049AD4
	<anonymous> * ptr8049AD8;	// 8049AD8
	<anonymous> * ptr8049ADC;	// 8049ADC
	<anonymous> * ptr8049AE0;	// 8049AE0
	<anonymous> * ptr8049AE4;	// 8049AE4
	<anonymous> * ptr8049AE8;	// 8049AE8
	<anonymous> * ptr8049AEC;	// 8049AEC
	<anonymous> ** ptr8049AF8;	// 8049AF8
	byte b8049B74;	// 8049B74
} Eq_1;

typedef void (Eq_3)();

typedef void (Eq_6)(word32);

typedef void (Eq_10)();

typedef void (Eq_41)(ptr32);

typedef void (Eq_46)();

typedef void (Eq_49)();

typedef void (Eq_112)();

typedef void (Eq_127)();

typedef void (Eq_136)();

typedef void (Eq_159)(ptr32);

typedef void (Eq_164)();

typedef void (Eq_167)();

typedef void (Eq_170)();

typedef void (Eq_173)(word32);

typedef word32 * (Eq_179)();

typedef void (Eq_185)();

typedef void (Eq_188)(word32);

typedef void (Eq_192)(word32);

typedef union Eq_204 {
	int32 u0;
	ptr32 u1;
} Eq_204;

typedef union Eq_218 {
	int32 u0;
	uint32 u1;
} Eq_218;

typedef union Eq_219 {
	int32 u0;
	ptr32 u1;
} Eq_219;

typedef union Eq_220 {
	int32 u0;
	ptr32 u1;
} Eq_220;

typedef void (Eq_249)();

typedef void (Eq_258)();

typedef void (Eq_276)();
