#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef volatile uint8_t vu8;
typedef volatile uint16_t vu16;
typedef volatile uint32_t vu32;
typedef volatile int8_t vs8;
typedef volatile int16_t vs16;
typedef volatile int32_t vs32;
typedef float f32;
typedef double f64;

/* Include a non-matched function's disassembly verbatim.
 * Builds the object content for functions we haven't decompiled yet,
 * so the full ELF still links and asm-differ can keep its baseline. */
#define INCLUDE_ASM(FOLDER, NAME)                                             \
    __asm__(                                                                  \
        ".section .text\n"                                                    \
        "glabel " #NAME "\n"                                                  \
        ".include \"asm/nonmatchings/" #FOLDER "/" #NAME ".s\"\n");

#endif /* COMMON_H */