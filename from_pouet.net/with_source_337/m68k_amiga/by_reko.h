// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (1146 word32 dw1146) (114A ptr32 ptr114A) (114E ptr32 ptr114E) (1152 word32 dw1152) (1156 word16 w1156) (1158 word32 dw1158) (1160 word32 dw1160))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_7: (fn void ())
	T_7 (in fn000010BE : ptr32)
	T_8 (in signature of fn000010BE : void)
Eq_11: (fn word32 ())
	T_11 (in fn000010DA : ptr32)
	T_12 (in signature of fn000010DA : void)
Eq_14: (fn void ())
	T_14 (in SumKickData : ptr32)
	T_15 (in signature of SumKickData : void)
Eq_23: (fn word32 ())
	T_23 (in fn00001092 : ptr32)
	T_24 (in signature of fn00001092 : void)
	T_55 (in fn00001092 : ptr32)
	T_107 (in fn00001092 : ptr32)
	T_109 (in fn00001092 : ptr32)
	T_156 (in fn00001092 : ptr32)
	T_170 (in fn00001092 : ptr32)
Eq_58: (fn word32 (word32, word32))
	T_58 (in AllocMem : ptr32)
	T_59 (in signature of AllocMem : void)
Eq_75: (fn word32 (word32, word32, ptr32, ptr32, ptr32))
	T_75 (in fn00001316 : ptr32)
	T_76 (in signature of fn00001316 : void)
Eq_82: (fn word32 (word32, word32, word32))
	T_82 (in fn000012F4 : ptr32)
	T_83 (in signature of fn000012F4 : void)
Eq_125: (fn void ())
	T_125 (in execPrivate6 : ptr32)
	T_126 (in signature of execPrivate6 : void)
Eq_143: (fn word32 (ptr32, int32))
	T_143 (in OpenLibrary : ptr32)
	T_144 (in signature of OpenLibrary : void)
	T_160 (in OpenLibrary : ptr32)
Eq_204: (fn void ())
	T_204 (in execPrivate12 : ptr32)
	T_205 (in signature of execPrivate12 : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fp : ptr32)
  Class: Eq_2
  DataType: ptr32
  OrigDataType: ptr32
T_3: (in 0000114E : ptr32)
  Class: Eq_3
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_6 t0000)))
T_4: (in 0x00000000 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in 0x0000114E + 0x00000000 : word32)
  Class: Eq_5
  DataType: ptr32
  OrigDataType: ptr32
T_6: (in Mem3[0x0000114E + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: ptr32
  OrigDataType: word32
T_7: (in fn000010BE : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_9 ()))
T_8: (in signature of fn000010BE : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in fn000010BE() : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in d0_5 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in fn000010DA : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 ()))
T_12: (in signature of fn000010DA : void)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: 
T_13: (in fn000010DA() : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_14: (in SumKickData : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 ()))
T_15: (in signature of SumKickData : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in SumKickData() : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in 00001152 : ptr32)
  Class: Eq_17
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_20 t0000)))
T_18: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in 0x00001152 + 0x00000000 : word32)
  Class: Eq_19
  DataType: ptr32
  OrigDataType: ptr32
T_20: (in Mem11[0x00001152 + 0x00000000:word32] : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_21: (in 0x00000000 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_22: (in d0_5 == 0x00000000 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in fn00001092 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 ()))
T_24: (in signature of fn00001092 : void)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: 
T_25: (in fn00001092() : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in a6_38 : ptr32)
  Class: Eq_26
  DataType: ptr32
  OrigDataType: ptr32
T_27: (in 0000114A : ptr32)
  Class: Eq_27
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_30 t0000)))
T_28: (in 0x00000000 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in 0x0000114A + 0x00000000 : word32)
  Class: Eq_29
  DataType: ptr32
  OrigDataType: ptr32
T_30: (in Mem11[0x0000114A + 0x00000000:word32] : word32)
  Class: Eq_26
  DataType: ptr32
  OrigDataType: word32
T_31: (in a7_41 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in CVZN_42 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in a0_43 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in CVZNX_44 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in a1_45 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in a6_46 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in d0_47 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in ZN_48 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in C_49 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in V_50 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in Z_51 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in N_55 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in CZ_56 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in d1_52 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in d2_53 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in d3_54 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in -918 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_48: (in a6_38 + -918 : word32)
  Class: Eq_48
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_49: (in 00001158 : ptr32)
  Class: Eq_49
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_52 t0000)))
T_50: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in 0x00001158 + 0x00000000 : word32)
  Class: Eq_51
  DataType: ptr32
  OrigDataType: ptr32
T_52: (in Mem58[0x00001158 + 0x00000000:word32] : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_53: (in 0x00000000 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_54: (in d0_47 == 0x00000000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in fn00001092 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_56 ()))
T_56: (in fn00001092() : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_57: (in d0_64 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in AllocMem : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_63 (T_37, T_62)))
T_59: (in signature of AllocMem : void)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: 
T_60: (in byteSize : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: 
T_61: (in requirements : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: 
T_62: (in 0x00000001 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_63: (in AllocMem(d0_47, 0x00000001) : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_64: (in 00001158 : ptr32)
  Class: Eq_64
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_67 t0000)))
T_65: (in 0x00000000 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in 0x00001158 + 0x00000000 : word32)
  Class: Eq_66
  DataType: ptr32
  OrigDataType: ptr32
T_67: (in Mem58[0x00001158 + 0x00000000:word32] : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in 00001160 : ptr32)
  Class: Eq_68
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_71 t0000)))
T_69: (in 0x00000000 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in 0x00001160 + 0x00000000 : word32)
  Class: Eq_70
  DataType: ptr32
  OrigDataType: ptr32
T_71: (in Mem67[0x00001160 + 0x00000000:word32] : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x00001156 : word32)
  Class: Eq_73
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_74 t0000)))
T_74: (in Mem68[0x00001156:word16] : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_75: (in fn00001316 : ptr32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (fn T_91 (T_87, T_46, T_88, T_89, T_90)))
T_76: (in signature of fn00001316 : void)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: 
T_77: (in d2 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in d3 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_79: (in d1Out : ptr32)
  Class: Eq_79
  DataType: ptr32
  OrigDataType: ptr32
T_80: (in d2Out : ptr32)
  Class: Eq_80
  DataType: ptr32
  OrigDataType: ptr32
T_81: (in d3Out : ptr32)
  Class: Eq_81
  DataType: ptr32
  OrigDataType: ptr32
T_82: (in fn000012F4 : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_87 (T_57, T_44, T_45)))
T_83: (in signature of fn000012F4 : void)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: 
T_84: (in d0 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_85: (in d1 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_86: (in d2 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_87: (in fn000012F4(d0_64, d1_52, d2_53) : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_88: (in out d1_52 : ptr32)
  Class: Eq_79
  DataType: ptr32
  OrigDataType: ptr32
T_89: (in out d2_53 : ptr32)
  Class: Eq_80
  DataType: ptr32
  OrigDataType: ptr32
T_90: (in out d3_54 : ptr32)
  Class: Eq_81
  DataType: ptr32
  OrigDataType: ptr32
T_91: (in fn00001316(fn000012F4(d0_64, d1_52, d2_53), d3_54, out d1_52, out d2_53, out d3_54) : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_92: (in 00001156 : ptr32)
  Class: Eq_92
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_95 t0000)))
T_93: (in 0x00000000 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in 0x00001156 + 0x00000000 : word32)
  Class: Eq_94
  DataType: ptr32
  OrigDataType: ptr32
T_95: (in Mem68[0x00001156 + 0x00000000:word16] : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in globals->w1156 + 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_98: (in 0x00000000 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in 0x00001156 + 0x00000000 : word32)
  Class: Eq_99
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_100: (in Mem83[0x00001156 + 0x00000000:word16] : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_101: (in 00001156 : ptr32)
  Class: Eq_101
  DataType: (ptr ci16)
  OrigDataType: (ptr (struct (0 T_104 t0000)))
T_102: (in 0x00000000 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in 0x00001156 + 0x00000000 : word32)
  Class: Eq_103
  DataType: ptr32
  OrigDataType: ptr32
T_104: (in Mem83[0x00001156 + 0x00000000:word16] : word16)
  Class: Eq_104
  DataType: ci16
  OrigDataType: ci16
T_105: (in 0x000A : word16)
  Class: Eq_104
  DataType: ci16
  OrigDataType: ci16
T_106: (in globals->w1156 < 0x000A : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in fn00001092 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_108 ()))
T_108: (in fn00001092() : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_109: (in fn00001092 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_110 ()))
T_110: (in fn00001092() : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_111: (in d0 : int32)
  Class: Eq_111
  DataType: int32
  OrigDataType: word32
T_112: (in 00001152 : ptr32)
  Class: Eq_112
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_115 t0000)))
T_113: (in 0x00000000 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in 0x00001152 + 0x00000000 : word32)
  Class: Eq_114
  DataType: ptr32
  OrigDataType: ptr32
T_115: (in Mem0[0x00001152 + 0x00000000:word32] : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in 0x00000000 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_117: (in globals->dw1152 == 0x00000000 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in a0_9 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in 00001158 : ptr32)
  Class: Eq_119
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_122 t0000)))
T_120: (in 0x00000000 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in 0x00001158 + 0x00000000 : word32)
  Class: Eq_121
  DataType: ptr32
  OrigDataType: ptr32
T_122: (in Mem0[0x00001158 + 0x00000000:word32] : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_123: (in 0x00000000 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_124: (in a0_9 == 0x00000000 : bool)
  Class: Eq_124
  DataType: bool
  OrigDataType: bool
T_125: (in execPrivate6 : ptr32)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: (ptr (fn T_127 ()))
T_126: (in signature of execPrivate6 : void)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: 
T_127: (in execPrivate6() : void)
  Class: Eq_127
  DataType: void
  OrigDataType: void
T_128: (in 0 : int32)
  Class: Eq_111
  DataType: int32
  OrigDataType: int32
T_129: (in a6_19 : ptr32)
  Class: Eq_129
  DataType: ptr32
  OrigDataType: ptr32
T_130: (in 0000114A : ptr32)
  Class: Eq_130
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_133 t0000)))
T_131: (in 0x00000000 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in 0x0000114A + 0x00000000 : word32)
  Class: Eq_132
  DataType: ptr32
  OrigDataType: ptr32
T_133: (in Mem0[0x0000114A + 0x00000000:word32] : word32)
  Class: Eq_129
  DataType: ptr32
  OrigDataType: word32
T_134: (in a7_20 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in a0_21 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in d0_22 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in CVZN_23 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in Z_24 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in a6_25 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in -924 : int32)
  Class: Eq_140
  DataType: int32
  OrigDataType: int32
T_141: (in a6_19 + -924 : word32)
  Class: Eq_141
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_142: (in d0_6 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_143: (in OpenLibrary : ptr32)
  Class: Eq_143
  DataType: (ptr Eq_143)
  OrigDataType: (ptr (fn T_149 (T_147, T_148)))
T_144: (in signature of OpenLibrary : void)
  Class: Eq_143
  DataType: (ptr Eq_143)
  OrigDataType: 
T_145: (in libName : word32)
  Class: Eq_145
  DataType: ptr32
  OrigDataType: 
T_146: (in version : word32)
  Class: Eq_146
  DataType: int32
  OrigDataType: 
T_147: (in 00001135 : ptr32)
  Class: Eq_145
  DataType: ptr32
  OrigDataType: ptr32
T_148: (in 0 : int32)
  Class: Eq_146
  DataType: int32
  OrigDataType: int32
T_149: (in OpenLibrary(0x00001135, 0) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_150: (in 0000114A : ptr32)
  Class: Eq_150
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_153 t0000)))
T_151: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in 0x0000114A + 0x00000000 : word32)
  Class: Eq_152
  DataType: ptr32
  OrigDataType: ptr32
T_153: (in Mem8[0x0000114A + 0x00000000:word32] : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_154: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_155: (in d0_6 == 0x00000000 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in fn00001092 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_157 ()))
T_157: (in fn00001092() : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_158: (in d0 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_159: (in d0_6 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_160: (in OpenLibrary : ptr32)
  Class: Eq_143
  DataType: (ptr Eq_143)
  OrigDataType: (ptr (fn T_163 (T_161, T_162)))
T_161: (in 00001123 : ptr32)
  Class: Eq_145
  DataType: ptr32
  OrigDataType: ptr32
T_162: (in 39 : int32)
  Class: Eq_146
  DataType: int32
  OrigDataType: int32
T_163: (in OpenLibrary(0x00001123, 39) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_164: (in 00001146 : ptr32)
  Class: Eq_164
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_167 t0000)))
T_165: (in 0x00000000 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in 0x00001146 + 0x00000000 : word32)
  Class: Eq_166
  DataType: ptr32
  OrigDataType: ptr32
T_167: (in Mem8[0x00001146 + 0x00000000:word32] : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_168: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_169: (in d0_6 == 0x00000000 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in fn00001092 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_171 ()))
T_171: (in fn00001092() : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_172: (in v5_4 : cui16)
  Class: Eq_172
  DataType: cui16
  OrigDataType: cui16
T_173: (in 00001156 : ptr32)
  Class: Eq_173
  DataType: (ptr cui16)
  OrigDataType: (ptr (struct (0 T_176 t0000)))
T_174: (in 0x00000000 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in 0x00001156 + 0x00000000 : word32)
  Class: Eq_175
  DataType: ptr32
  OrigDataType: ptr32
T_176: (in Mem0[0x00001156 + 0x00000000:word16] : word16)
  Class: Eq_172
  DataType: cui16
  OrigDataType: word16
T_177: (in a0_16 : (ptr byte))
  Class: Eq_177
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_194 t0000)))
T_178: (in 00001340 : ptr32)
  Class: Eq_178
  DataType: ptr32
  OrigDataType: ptr32
T_179: (in 00001340 : ptr32)
  Class: Eq_179
  DataType: ptr32
  OrigDataType: ptr32
T_180: (in (word16) 0x00001340 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in 0x0001 : word16)
  Class: Eq_181
  DataType: cui16
  OrigDataType: cui16
T_182: (in v5_4 + 0x0001 : word16)
  Class: Eq_182
  DataType: cui16
  OrigDataType: cui16
T_183: (in 0x0005 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in v5_4 + 0x0001 << 0x0005 : word16)
  Class: Eq_184
  DataType: ui16
  OrigDataType: ui16
T_185: (in (word16) 0x00001340 + (v5_4 + 0x0001 << 0x0005) : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in DPB(0x00001340, (word16) 0x00001340 + (v5_4 + 0x0001 << 0x0005), 0) : ptr32)
  Class: Eq_177
  DataType: (ptr byte)
  OrigDataType: ptr32
T_187: (in d2_18 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_188: (in 0x01DF : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in DPB(d2, 0x01DF, 0) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_190: (in v5_4 + 0x0001 : word16)
  Class: Eq_190
  DataType: cui16
  OrigDataType: cui16
T_191: (in (byte) (v5_4 + 0x0001) : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in 0x00000000 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in a0_16 + 0x00000000 : word32)
  Class: Eq_193
  DataType: ptr32
  OrigDataType: ptr32
T_194: (in Mem23[a0_16 + 0x00000000:byte] : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_195: (in (word16) a0_16 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in 0x0280 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in (word16) a0_16 + 0x0280 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in DPB(a0_16, (word16) a0_16 + 0x0280, 0) : word32)
  Class: Eq_177
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_194 t0000)))
T_199: (in 0x00000001 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in d2_18 - 0x00000001 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_201: (in 0xFFFFFFFF : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_202: (in d2_18 != 0xFFFFFFFF : bool)
  Class: Eq_202
  DataType: bool
  OrigDataType: bool
T_203: (in d0 : int32)
  Class: Eq_203
  DataType: int32
  OrigDataType: word32
T_204: (in execPrivate12 : ptr32)
  Class: Eq_204
  DataType: (ptr Eq_204)
  OrigDataType: (ptr (fn T_206 ()))
T_205: (in signature of execPrivate12 : void)
  Class: Eq_204
  DataType: (ptr Eq_204)
  OrigDataType: 
T_206: (in execPrivate12() : void)
  Class: Eq_206
  DataType: void
  OrigDataType: void
T_207: (in d1_8 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in 0 : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_209: (in *d1Out : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_210: (in d2_10 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in 0x027F : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in DPB(d2, 0x027F, 0) : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in *d2Out : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_214: (in d3_12 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in 0x01DF : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in DPB(d3, 0x01DF, 0) : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in *d3Out : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_218: (in 0 : int32)
  Class: Eq_203
  DataType: int32
  OrigDataType: int32
*/
typedef struct Globals {
	word32 dw1146;	// 1146
	ptr32 ptr114A;	// 114A
	ptr32 ptr114E;	// 114E
	word32 dw1152;	// 1152
	word16 w1156;	// 1156
	word32 dw1158;	// 1158
	word32 dw1160;	// 1160
} Eq_1;

typedef void (Eq_7)();

typedef word32 (Eq_11)();

typedef void (Eq_14)();

typedef word32 (Eq_23)();

typedef word32 (Eq_58)(word32, word32);

typedef word32 (Eq_75)(word32, word32, ptr32, ptr32, ptr32);

typedef word32 (Eq_82)(word32, word32, word32);

typedef void (Eq_125)();

typedef word32 (Eq_143)(ptr32, int32);

typedef void (Eq_204)();
