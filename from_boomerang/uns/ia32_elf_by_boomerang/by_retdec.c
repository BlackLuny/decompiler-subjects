//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------------ Functions -------------------------

// Address range: 0x8048328 - 0x80483b3
int main(int argc, char ** argv) {
    // 0x8048328
    if (argc >= 0xee6b2800) {
        // 0x8048356
        printf("Population exceeds %u\n", -0x1194d800);
        if (argc <= 0xefffffff) {
            // 0x8048374
            printf("The mask is %x\n", -0x10000000);
            // branch -> 0x8048380
        }
        // 0x8048380
        printf("Arguments supplied\n");
        // branch -> 0x8048390
        // 0x8048390
        if (-argc <= 0xfffffffd) {
            // 0x804839a
            printf("Three or more arguments\n");
            // branch -> 0x80483aa
        }
        // 0x80483aa
        return 0;
    }
    // 0x8048374
    printf("The mask is %x\n", -0x10000000);
    if (argc < 2) {
        // 0x8048390
        if (-argc <= 0xfffffffd) {
            // 0x804839a
            printf("Three or more arguments\n");
            // branch -> 0x80483aa
        }
        // 0x80483aa
        return 0;
    }
    // 0x8048380
    printf("Arguments supplied\n");
    // branch -> 0x8048390
    // 0x8048390
    if (-argc <= 0xfffffffd) {
        // 0x804839a
        printf("Three or more arguments\n");
        // branch -> 0x80483aa
    }
    // 0x80483aa
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