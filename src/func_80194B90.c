#include "common.h"
__asm__(
  ".globl func_80194B90\n"
  ".type func_80194B90, @function\n"
  "func_80194B90:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tlui $a1, %hi(D_8019DB64)\n\taddiu $a1, $a1, %lo(D_8019DB64)\n\tsw $ra, 0x14($sp)\n\tjal func_80190088\n\taddiu $a2, $zero, 0x5C\n\taddu $v0, $s0, $zero\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80194B90, .-func_80194B90\n"
);
