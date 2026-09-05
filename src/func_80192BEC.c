#include "common.h"
__asm__(
  ".globl func_80192BEC\n"
  ".type func_80192BEC, @function\n"
  "func_80192BEC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019CEF4)\n\tlw $v0, %lo(D_8019CEF4)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlw $v0, 0x10($v0)\n\tnop\n\tjalr $v0\n\tnop\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192BEC, .-func_80192BEC\n"
);
