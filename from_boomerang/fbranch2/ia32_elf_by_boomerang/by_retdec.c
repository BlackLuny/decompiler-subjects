//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------------ Functions -------------------------

// Address range: 0x80483e4 - 0x804851b
int main(int argc, char ** argv) {
    // 0x80483e4
    int32_t v1;
    float32_t v2 = v1; // bp-12
    scanf("%f", &v2);
    int32_t chars_printed = printf("a is %f, b is %f\n", 5.0, (float64_t)v2);
    float32_t v3 = v2;
    int32_t puts_rc; // 0x804845e
    float32_t v4;
    int32_t v5;
    int32_t v6; // 0x804844c
    if (v3 < 5.0f) {
        // after_if_8048448_0
        v6 = chars_printed & -0x10000;
        v4 = v3;
        v5 = v6;
        if (v6 == 0x4000) {
            // 0x8048456
            puts_rc = puts("Equal");
            v4 = v2;
            v5 = puts_rc;
            // branch -> 0x8048466
        }
        // 0x8048466
        if (v4 < 5.0f) {
            // after_if_804846c_0
            if (v5 >= 0x10000) {
                // 0x804847a
                puts("Not Equal");
                // branch -> 0x804848a
            }
            // 0x804848a
            return 0;
        }
        // if_804846c_0_false
        if (v4 <= 5.0f) {
            // if_804846c_1_false
            // branch -> after_if_804846c_0
        }
        // after_if_804846c_0
        if (v5 >= 0x10000) {
            // 0x804847a
            puts("Not Equal");
            // branch -> 0x804848a
        }
        // 0x804848a
        return 0;
    }
    // if_8048448_0_false
    int32_t v7;
    int32_t v8;
    int32_t v9;
    if (v3 <= 5.0f) {
        // if_8048448_1_false
        v8 = v3 != 5.0f ? 1024 : 0;
        v7 = v3 != 5.0f ? 256 : 0;
        v9 = 0x4000;
        // branch -> after_if_8048448_0
    } else {
        v8 = 0;
        v7 = 256;
        v9 = 0;
    }
    // after_if_8048448_0
    v6 = v8 | v9 | v7 | chars_printed & -0x10000;
    v4 = v3;
    v5 = v6;
    if (v6 == 0x4000) {
        // 0x8048456
        puts_rc = puts("Equal");
        v4 = v2;
        v5 = puts_rc;
        // branch -> 0x8048466
    }
    // 0x8048466
    if (v4 >= 5.0f) {
        // if_804846c_0_false
        if (v4 <= 5.0f) {
            // if_804846c_1_false
            // branch -> after_if_804846c_0
        }
    }
    // after_if_804846c_0
    if (v5 >= 0x10000) {
        // 0x804847a
        puts("Not Equal");
        // branch -> 0x804848a
    }
    // 0x804848a
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int puts(const char * s);
// int scanf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (i686-redhat-linux-gcc) (4.6.3)
// Detected functions: 1
// Decompiler release: VERSION
// Decompilation date: DATE