//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t proc1(int32_t a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x8048368 - 0x8048374
int32_t proc1(int32_t a1, int32_t a2) {
    // 0x8048368
    return a1 - a2;
}

// Address range: 0x8048375 - 0x80483af
int main(int argc, char ** argv) {
    // 0x8048375
    return printf("%i\n", proc1(11, 4));
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (i686-redhat-linux-gcc) (4.6.3)
// Detected functions: 2
// Decompiler release: VERSION
// Decompilation date: DATE