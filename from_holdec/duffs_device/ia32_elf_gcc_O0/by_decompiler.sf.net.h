// subject.h
// Generated on TIMESTAMP by decompiling from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8049A68 (ptr code) ptr8049A68))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (fn void (word32))
	T_4 (in __align : ptr32)
Eq_9: (fn void ())
	T_9 (in fn08048314 : ptr32)
	T_10 (in signature of fn08048314 : void)
Eq_12: (fn void ())
	T_12 (in __hlt : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x08049A68 : ptr32)
  Class: Eq_2
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_3 t0000)))
T_3: (in Mem0[0x08049A68:word32] : word32)
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_4: (in __align : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (fn T_8 (T_7)))
T_5: (in fp : ptr32)
  Class: Eq_5
  DataType: ptr32
  OrigDataType: ptr32
T_6: (in 0x00000004 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in fp + 0x00000004 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in __align(fp + 0x00000004) : void)
  Class: Eq_8
  DataType: void
  OrigDataType: void
T_9: (in fn08048314 : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_11 ()))
T_10: (in signature of fn08048314 : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in fn08048314() : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in __hlt : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_13 ()))
T_13: (in __hlt() : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
*/
typedef code Eq_1struct Globals {
	code * ptr8049A68;	// 8049A68
} Eq_1;

typedef void (Eq_4)(word32);

typedef void (Eq_9)();

typedef void (Eq_12)();

