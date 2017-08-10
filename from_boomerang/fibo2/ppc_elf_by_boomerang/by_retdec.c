//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t fib1(int32_t result);
int32_t fib2(void);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // r3

// ------------------------ Functions -------------------------

// Address range: 0x10000440 - 0x1000047f
int32_t fib1(int32_t result) {
    // 0x10000440
    int32_t v1; // bp-32
    v1 = &v1;
    g1 = result;
    fib2();
    return result;
}

// Address range: 0x10000480 - 0x10000503
int32_t fib2(void) {
    // 0x10000480
    int32_t v1; // 0x10000480_0
    v1 = &v1;
    int32_t v2 = g1; // 0x10000498
    if (v2 > 1) {
        // 0x100004a8
        fib1(v2 - 1);
        fib1(v2 - 2);
        // branch -> 0x100004e4
    }
    // 0x100004e4
    return *(int32_t *)(v1 + 4);
}

// Address range: 0x10000504 - 0x10000583
int main(int argc, char ** argv) {
    int32_t v1; // bp-32
    v1 = &v1;
    printf("Input number: ");
    int32_t v2;
    scanf("%d", &v2);
    int32_t v3 = v2; // 0x10000538
    fib1(v3);
    printf("fibonacci(%d) = %d\n", v2, v3);
    return 0;
}

// --------------- Statically Linked Functions ----------------

// int printf(const char * restrict format, ...);
// int scanf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (gcc-powerpc-elf) (4.5.1 - 4.5.2)
// Detected functions: 3
// Decompiler release: VERSION
// Decompilation date: DATE