//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t addem(int32_t a1, int32_t a2, int32_t a3, int32_t * a4);
int32_t passem(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// ------------------------ Functions -------------------------

// Address range: 0x8048924 - 0x8048937
int32_t addem(int32_t a1, int32_t a2, int32_t a3, int32_t * a4) {
    int32_t result = a2 + a1 + a3; // 0x804892d
    *a4 = result;
    return result;
}

// Address range: 0x8048938 - 0x804894f
int32_t passem(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8048938
    return addem(a1, a2, a3, (int32_t *)a4);
}

// Address range: 0x8048950 - 0x804897b
int main(int argc, char ** argv) {
    int32_t v1;
    passem(5, 10, 40, (int32_t)&v1);
    printf("Fifty five is %d\n", v1);
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc
// Detected functions: 3
// Decompiler release: VERSION
// Decompilation date: DATE