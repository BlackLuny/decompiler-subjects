//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------------ Functions -------------------------

// Address range: 0x10000418 - 0x1000048b
int main(int argc, char ** argv) {
    // 0x10000418
    int32_t v1; // bp-32
    v1 = &v1;
    int32_t v2 = 0;
    int32_t v3 = v2 + 1; // 0x10000434
    printf("%d ", v3);
    // branch -> 0x10000434
    while (v2 <= 8) {
        // 0x10000434
        v2 = v3;
        v3 = v2 + 1;
        printf("%d ", v3);
        // continue -> 0x10000434
    }
    // 0x10000454
    printf("a is %d, x is %d\n", 10, 10);
    return 0;
}

// --------------- Statically Linked Functions ----------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (gcc-powerpc-elf) (4.5.1 - 4.5.2)
// Detected functions: 1
// Decompiler release: VERSION
// Decompilation date: DATE