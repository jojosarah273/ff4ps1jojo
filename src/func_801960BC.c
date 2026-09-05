#include "common.h"
__asm__(
  ".globl func_801960BC\n"
  ".type func_801960BC, @function\n"
  "func_801960BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, (0x10000000 >> 16)\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\tor $a0, $a0, $v0\n\tsw $a0, 0x0($v1)\n\tlui $v0, %hi(D_8019DC58)\n\tlw $v0, %lo(D_8019DC58)($v0)\n\tlui $v1, (0xFFFFFF >> 16)\n\tlw $v0, 0x0($v0)\n\tori $v1, $v1, (0xFFFFFF & 0xFFFF)\n\tjr $ra\n\tand $v0, $v0, $v1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801960BC, .-func_801960BC\n"
);
