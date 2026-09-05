#include "common.h"
__asm__(
  ".globl func_80192B88\n"
  ".type func_80192B88, @function\n"
  "func_80192B88:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v0, %hi(D_8019CEF4)\n\tlw $v0, %lo(D_8019CEF4)($v0)\n\taddu $a1, $a0, $zero\n\tsw $ra, 0x10($sp)\n\tlw $v0, 0x14($v0)\n\tnop\n\tjalr $v0\n\taddiu $a0, $zero, 0x4\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192B88, .-func_80192B88\n"
);
