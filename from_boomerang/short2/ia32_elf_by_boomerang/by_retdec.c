//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t test(int32_t a1, int32_t a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x804837c - 0x8048397
int32_t test(int32_t a1, int32_t a2, int32_t a3) {
    // 0x804837c
    return (bool)(a1 < a2 & a2 < a3);
}

// Address range: 0x8048398 - 0x804840b
int main(int argc, char ** argv) {
    // 0x8048398
    printf("Result for 4, 5, 6: %d\n", test(4, 5, 6));
    printf("Result for 6, 5, 4: %d\n", test(6, 5, 4));
    printf("Result for 4, 6, 5: %d\n", test(4, 6, 5));
    printf("Result for 6, 4, 5: %d\n", test(6, 4, 5));
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (i686-redhat-linux-gcc) (4.6.3)
// Detected functions: 2
// Decompiler release: VERSION
// Decompilation date: DATE