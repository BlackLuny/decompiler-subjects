//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------------ Functions -------------------------

// Address range: 0x8048328 - 0x804834f
int main(int argc, char ** argv) {
    int32_t v1 = argc - 1; // 0x8048330
    int32_t result = (int32_t)(v1 == 0 | v1 < 0 ^ (argc & -argc) < 0) ^ 1; // 0x8048337
    printf("Result is %d\n", result);
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (3.2.2)
// Detected language: C
// Detected functions: 1
// Decompiler release: VERSION
// Decompilation date: DATE