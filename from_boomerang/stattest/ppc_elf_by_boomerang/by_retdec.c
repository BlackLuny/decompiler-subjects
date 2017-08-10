//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <sys/stat.h>

// ------------------------ Structures ------------------------

struct stat {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
    int32_t e14;
    int32_t e15;
    int32_t e16;
    int32_t e17;
    int32_t e18;
    int32_t e19;
};

// ------------------------ Functions -------------------------

// Address range: 0x10000440 - 0x100004b3
int main(int argc, char ** argv) {
    int32_t v1; // bp-144
    v1 = &v1;
    int32_t buf;
    int32_t result = stat("test/source/stattest.c", (struct stat *)&buf); // 0x1000046c
    int32_t v2;
    printf("Stat returns %d; size of file is %d\n", result, v2);
    return result;
}

// --------------- Statically Linked Functions ----------------

// int printf(const char * restrict format, ...);
// int stat(const char * restrict file, struct stat * restrict buf);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (gcc-powerpc-elf) (4.5.1 - 4.5.2)
// Detected functions: 1
// Decompiler release: VERSION
// Decompilation date: DATE