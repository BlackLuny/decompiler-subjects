//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t b(int32_t a1);
int32_t c(int32_t a1);
int32_t d(uint32_t a1);
int32_t e(int32_t a1);
int32_t f(uint32_t a1);
int32_t g(uint32_t a1);
int32_t h(uint32_t a1);
int32_t i(int32_t a1);
int32_t j(uint32_t a1);
int32_t k(uint32_t a1);
int32_t l(uint32_t a1);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x8048468; // 0x80486c4

// ------------------------ Functions -------------------------

// Address range: 0x804837c - 0x80483c6
int main(int argc, char ** argv) {
    // 0x804837c
    printf("a(%d)\n", argc);
    b(3 * argc);
    return 0;
}

// Address range: 0x80483c7 - 0x80483f1
int32_t b(int32_t a1) {
    // 0x80483c7
    printf("b(%d)\n", a1);
    return c(a1 - 1);
}

// Address range: 0x80483f2 - 0x8048469
int32_t c(int32_t a1) {
    // 0x80483f2
    printf("c(%d)\n", a1);
    int32_t result = *(int32_t *)(4 * a1 + (int32_t)&g1); // 0x8048469_2
    switch (a1) {
        case 2: {
            // 0x804841f
            result = d(2);
            // branch -> 0x8048468
            break;
        }
        case 3: {
            // 0x804842e
            result = f(3);
            // branch -> 0x8048468
            break;
        }
        case 4: {
            // 0x804843d
            result = h(4);
            // branch -> 0x8048468
            break;
        }
        case 5: {
            // 0x804844c
            result = j(5);
            // branch -> 0x8048468
            break;
        }
        case 6: {
            // 0x804845b
            result = l(6);
            // branch -> 0x8048468
            break;
        }
    }
    // 0x8048468
    return result;
}

// Address range: 0x804846a - 0x804849a
int32_t d(uint32_t a1) {
    int32_t chars_printed = printf("d(%d)\n", a1);
    int32_t result; // 0x804849a_2
    if (a1 >= 2) {
        // 0x8048489
        result = e(a1 - 1);
        // branch -> 0x8048499
    } else {
        result = chars_printed;
    }
    // 0x8048499
    return result;
}

// Address range: 0x804849b - 0x80484c6
int32_t e(int32_t a1) {
    // 0x804849b
    printf("e(%d)\n", a1);
    return c(a1 / 2);
}

// Address range: 0x80484c7 - 0x80484f7
int32_t f(uint32_t a1) {
    int32_t chars_printed = printf("f(%d)\n", a1);
    int32_t result; // 0x80484f7_2
    if (a1 >= 2) {
        // 0x80484e6
        result = g(a1 - 1);
        // branch -> 0x80484f6
    } else {
        result = chars_printed;
    }
    // 0x80484f6
    return result;
}

// Address range: 0x80484f8 - 0x8048528
int32_t g(uint32_t a1) {
    int32_t chars_printed = printf("g(%d)\n", a1);
    int32_t result; // 0x8048528_2
    if (a1 >= 2) {
        // 0x8048517
        result = f(a1 - 1);
        // branch -> 0x8048527
    } else {
        result = chars_printed;
    }
    // 0x8048527
    return result;
}

// Address range: 0x8048529 - 0x8048559
int32_t h(uint32_t a1) {
    int32_t chars_printed = printf("h(%d)\n", a1);
    int32_t result; // 0x8048559_2
    if (a1 >= 1) {
        // 0x8048548
        result = i(a1 - 1);
        // branch -> 0x8048558
    } else {
        result = chars_printed;
    }
    // 0x8048558
    return result;
}

// Address range: 0x804855a - 0x8048574
int32_t i(int32_t a1) {
    // 0x804855a
    return printf("i(%d)\n", a1);
}

// Address range: 0x8048575 - 0x80485a3
int32_t j(uint32_t a1) {
    int32_t chars_printed = printf("j(%d)\n", a1);
    int32_t result; // 0x80485a3_2
    if (a1 >= 2) {
        // 0x8048594
        result = k(a1);
        // branch -> 0x80485a2
    } else {
        result = chars_printed;
    }
    // 0x80485a2
    return result;
}

// Address range: 0x80485a4 - 0x80485d4
int32_t k(uint32_t a1) {
    int32_t chars_printed = printf("k(%d)\n", a1);
    int32_t result; // 0x80485d4_2
    if (a1 >= 2) {
        // 0x80485c3
        result = e(a1 - 1);
        // branch -> 0x80485d3
    } else {
        result = chars_printed;
    }
    // 0x80485d3
    return result;
}

// Address range: 0x80485d5 - 0x8048607
int32_t l(uint32_t a1) {
    int32_t chars_printed = printf("l(%d)\n", a1);
    int32_t result; // 0x8048607_2
    if (a1 >= 2) {
        // 0x80485f4
        result = b(a1 + 2);
        // branch -> 0x8048606
    } else {
        result = chars_printed;
    }
    // 0x8048606
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (i686-redhat-linux-gcc) (4.6.3)
// Detected functions: 12
// Decompiler release: VERSION
// Decompilation date: DATE