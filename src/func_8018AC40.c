#include "common.h"
__asm__(
  ".globl func_8018AC40\n"
  ".type func_8018AC40, @function\n"
  "func_8018AC40:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a0, %hi(D_8019B128)\n\tlw $a0, %lo(D_8019B128)($a0)\n\tlui $v1, 0xF0FF\n\tlw $v0, 0x0($a0)\n\tori $v1, $v1, 0xFFFF\n\tand $v0, $v0, $v1\n\tlui $v1, 0x2000\n\tor $v0, $v0, $v1\n\tjr $ra\n\tsw $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AC40, .-func_8018AC40\n"
);
