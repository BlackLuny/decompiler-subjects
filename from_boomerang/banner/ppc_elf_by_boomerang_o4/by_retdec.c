//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --------------------- Global Variables ---------------------

char * g1; // 0x10001898
char * g2[84] = {
    "         ###  ### ###  # #   ##### ###   #  ##     ###  ",
    "         ###  ### ###  # #  #  #  ## #  #  #  #    ###   ",
    "         ###   #   # ########  #   ### #    ##      #   ",
    "          #            # #   #####    #    ###     #    ",
    "                     #######   #  #  # ####   # #       ",
    "         ###           # #  #  #  # #  # ##    #        ",
    "         ###           # #   ##### #   ### #### #       ",
    "   ##    ##                                            #",
    "  #        #   #   #    #                             # ",
    " #          #   # #     #                            #  ",
    " #          # ### ### #####   ###   #####           #   ",
    " #          #   # #     #     ###           ###    #    ",
    "  #        #   #   #    #      #            ###   #     ",
    "   ##    ##                   #             ###  #      ",
    "  ###     #    #####  ##### #      ####### ##### #######",
    " #   #   ##   #     ##     ##    # #      #     ##    # ",
    "# #   # # #         #      ##    # #      #          #  ",
    "#  #  #   #    #####  ##### ####### ##### ######    #   ",
    "#   # #   #   #            #     #       ##     #  #    ",
    " #   #    #   #      #     #     # #     ##     #  #    ",
    "  ###   ##### ####### #####      #  #####  #####   #    ",
    " #####  #####    #     ###      #           #     ##### ",
    "#     ##     #  # #    ###     #             #   #     #",
    "#     ##     #   #            #     #####     #        #",
    " #####  ######         ###   #                 #     ## ",
    "#     #      #   #     ###    #     #####     #     #   ",
    "#     ##     #  # #     #      #             #          ",
    " #####  #####    #     #        #           #       #   ",
    " #####    #   ######  ##### ###### ############## ##### ",
    "#     #  # #  #     ##     ##     ##      #      #     #",
    "# ### # #   # #     ##      #     ##      #      #      ",
    "# # # ##     ####### #      #     ######  #####  #  ####",
    "# #### ########     ##      #     ##      #      #     #",
    "#     ##     ##     ##     ##     ##      #      #     #",
    " ##### #     #######  ##### ###### ########       ##### ",
    "#     #  #*#        ##    # #      #     ##     ########",
    "#     #   #         ##   #  #      ##   ####    ##     #",
    "#     #   #         ##  #   #      # # # ## #   ##     #",
    "#######   #         ####    #      #  #  ##  #  ##     #",
    "#     #   #   #     ##  #   #      #     ##   # ##     #",
    "#     #   #   #     ##   #  #      #     ##    ###     #",
    "#     #  ###   ##### #    # ########     ##     ########",
    "######  ##### ######  ##### ########     ##     ##     #",
    "#     ##     ##     ##     #   #   #     ##     ##  #  #",
    "#     ##     ##     ##         #   #     ##     ##  #  #",
    "###### #     #######  #####    #   #     ##     ##  #  #",
    "#      #   # ##   #        #   #   #     # #   # #  #  #",
    "#      #    # #    # #     #   #   #     #  # #  #  #  #",
    "#       #### ##     # #####    #    #####    #    ## ## ",
    "#     ##     ######## ##### #       #####    #          ",
    " #   #  #   #      #  #      #          #   # #         ",
    "  # #    # #      #   #       #         #  #   #        ",
    "   #      #      #    #        #        #               ",
    "  # #     #     #     #         #       #               ",
    " #   #    #    #      #          #      #               ",
    "#     #   #   ####### #####       # #####        #######",
    "  ###                                                   ",
    "  ###     ##   #####   ####  #####  ###### ######  #### ",
    "   #     #  #  #    # #    # #    # #      #      #    #",
    "    #   #    # #####  #      #    # #####  #####  #     ",
    "        ###### #    # #      #    # #      #      #  ###",
    "        #    # #    # #    # #    # #      #      #    #",
    "        #    # #####   ####  #####  ###### #       #### ",
    "                                                        ",
    " #    #    #        # #    # #      #    # #    #  #### ",
    " #    #    #        # #   #  #      ##  ## ##   # #    #",
    " ######    #        # ####   #      # ## # # #  # #    #",
    " #    #    #        # #  #   #      #    # #  # # #    #",
    " #    #    #   #    # #   #  #      #    # #   ## #    #",
    " #    #    #    ####  #    # ###### #    # #    #  #### ",
    "                                                        ",
    " #####   ####  #####   ####   ##### #    # #    # #    #",
    " #    # #    # #    # #         #   #    # #    # #    #",
    " #    # #    # #    #  ####     #   #    # #    # #    #",
    " #####  #  # # #####       #    #   #    # #    # # ## #",
    " #      #   #  #   #  #    #    #   #    #  #  #  ##  ##",
    " #       ### # #    #  ####     #    ####    ##   #    #",
    "                       ###     #     ###   ##    # # # #",
    " #    #  #   # ###### #        #        # #  #  # # # # ",
    "  #  #    # #      #  #        #        #     ## # # # #",
    "   ##      #      #  ##                 ##        # # # ",
    "   ##      #     #    #        #        #        # # # #",
    "  #  #     #    #     #        #        #         # # # ",
    " #    #    #   ######  ###     #     ###         # # # #"
}; // 0x10011e08

// ------------------------ Functions -------------------------

// Address range: 0x10000468 - 0x100005f3
int main(int argc, char ** argv) {
    int32_t v1; // bp-128
    v1 = &v1;
    int32_t * v2 = (int32_t *)((int32_t)malloc(12) + 4); // 0x100004b0_0
    *v2 = (int32_t)"HelloWorld";
    int32_t v3;
    int32_t v4 = &v3; // 0x10000574_0
    int32_t len = strlen("HelloWorld"); // 0x100004bc
    int32_t v5 = len > 10 ? 10 : len; // 0x100004c4
    int32_t v6 = 8 * v5 - 1; // 0x1000056c
    int32_t v7 = 0; // 0x100004984
    // branch -> 0x100004d8
    while (true) {
        // 0x100004d8
        int32_t v8; // 0x100005047
        if (v5 > 0) {
            int32_t v9 = v4; // 0x10000468_08
            int32_t v10 = 0;
            while (true) {
                int32_t v11 = (int32_t)*(char *)(*v2 + v10); // 0x10000500
                int32_t v12 = 31 - v11; // 0x10000508
                int32_t v13 = (v12 >> 31 & -2 | (int32_t)(v12 < 0)) & v11 - 32; // 0x10000510
                int32_t v14 = *(int32_t *)(4 * (7 * v13 / 8 + v7) + (int32_t)&g2); // 0x10000538
                int32_t v15 = v9 + 8; // 0x10000548
                int32_t v16 = 0;
                char v17 = *(char *)(7 * v13 + v14 + v16); // 0x10000544
                *(char *)(v16 + v15) = v17;
                int32_t v18 = 6; // 0x10000554
                // branch -> 0x10000540
                while (v18 != 0) {
                    // 0x10000540
                    v16++;
                    v17 = *(char *)(7 * v13 + v14 + v16);
                    *(char *)(v16 + v15) = v17;
                    v18--;
                    // continue -> 0x10000540
                }
                int32_t v19 = v10 + 1; // 0x10000558
                *(char *)(v9 + 15) = 32;
                if (v19 >= v5) {
                    // break -> 0x1000056c
                    break;
                }
                v9 = v15;
                v10 = v19;
                // continue -> 0x100004f4
            }
            // 0x1000056c
            int32_t str;
            if (v6 >= 0) {
                v8 = v6;
              lab_0x1000057c:
                while (true) {
                    char * v20 = (char *)(v4 + 8 + v8); // 0x10000584_0
                    if (*v20 == 32) {
                        int32_t v21 = v8 - 1; // 0x10000580
                        *v20 = 0;
                        if (v8 < 1) {
                            // break -> 0x10000598
                            break;
                        }
                        v8 = v21;
                        // continue -> 0x1000057c
                        continue;
                    }
                }
                // 0x10000598
                puts((char *)&str);
                if (v7 > 5) {
                    // break -> 0x100005c0
                    break;
                }
                v7++;
                // continue -> 0x100004d8
                continue;
            }
          lab_0x10000598:
            // 0x10000598
            puts((char *)&str);
            if (v7 > 5) {
                // break -> 0x100005c0
                break;
            }
            v7++;
            // continue -> 0x100004d8
            continue;
        }
        // 0x1000056c
        if (v6 < 0) {
            goto lab_0x10000598;
        }
        v8 = v6;
        goto lab_0x1000057c;
    }
    // 0x100005c0
    puts((char *)&g1);
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void * malloc(size_t size);
// int puts(const char * s);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (gcc-powerpc-elf) (4.5.1 - 4.5.2)
// Detected functions: 1
// Decompiler release: VERSION
// Decompilation date: DATE