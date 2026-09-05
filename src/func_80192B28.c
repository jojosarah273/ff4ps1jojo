#include "common.h"
__asm__(
  ".globl func_80192B28\n"
  ".type func_80192B28, @function\n"
  "func_80192B28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019CEF4)\n\tlw $v0, %lo(D_8019CEF4)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlw $v0, 0x8($v0)\n\tnop\n\tjalr $v0\n\tnop\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192B28, .-func_80192B28\n"
);
