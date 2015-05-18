// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_015/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (segment "Eq_2")
	T_2 (in es_6 : (ptr Eq_2))
	T_8 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_3: (segment "Eq_3")
	T_3 (in ds : (ptr Eq_3))
Eq_9: (fn void (byte))
	T_9 (in bios_video_set_mode : ptr32)
	T_10 (in signature of bios_video_set_mode : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in es_6 : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_3: (in ds : (ptr Eq_3))
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_4: (in bx : (memptr (ptr Eq_3) segptr32))
  Class: Eq_4
  DataType: (memptr (ptr Eq_3) segptr32)
  OrigDataType: (memptr T_3 (struct (0 T_7 t0000)))
T_5: (in 0x0000 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in bx + 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: segptr32
  OrigDataType: segptr32
T_8: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_9: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in signature of bios_video_set_mode : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in al : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in bios_video_set_mode(0x13) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ax_13 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ax : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x13 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_18: (in di : (memptr (ptr Eq_2) byte))
  Class: Eq_18
  DataType: (memptr (ptr Eq_2) byte)
  OrigDataType: (memptr T_2 (struct 0001 (0 T_25 t0000)))
T_19: (in ax_13 + di : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in C : byte)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in ax_13 + di + C : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_22: (in (byte) ax_13 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem35[es_6:di + 0x0000:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_26: (in cond(ax_13) : byte)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in !cond(ax_13) : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di + 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_2) byte)
  OrigDataType: word16
T_30: (in cx : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_34: (in cx != 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in ax_13 + 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di - 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_2) byte)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_2 {
} Eq_2;

typedef struct Eq_3 {
} Eq_3;

typedef void (Eq_9)(byte);
