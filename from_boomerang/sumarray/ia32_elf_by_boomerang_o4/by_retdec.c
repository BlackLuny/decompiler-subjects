//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// --------------------- Global Variables ---------------------

int32_t g1 = 1; // 0x8049440

// ------------------------ Functions -------------------------

// Address range: 0x8048328 - 0x8048357
int main(int argc, char ** argv) {
    int32_t v1 = 0;
    int32_t v2 = *(int32_t *)(4 * v1 + (int32_t)&g1); // 0x804833c
    // branch -> 0x804833c
    while (v1 < 9) {
        // 0x804833c
        v1++;
        v2 += *(int32_t *)(4 * v1 + (int32_t)&g1);
        // continue -> 0x804833c
    }
    // 0x8048345
    printf("Sum is %d\n", v2);
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (3.2.2)
// Detected language: C
// Detected functions: 1
// Decompiler release: VERSION
// Decompilation date: DATE