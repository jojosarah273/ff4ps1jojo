#include "common.h"
__asm__(
  ".globl func_8017F9FC\n"
  ".type func_8017F9FC, @function\n"
  "func_8017F9FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, %hi(D_801A0A90)\n\tsw $ra, 0x10($sp)\n\tjal func_8017F644\n\taddiu $a0, $a0, %lo(D_801A0A90)\n\tlui $a0, %hi(D_801B57A0)\n\tjal func_8017F644\n\taddiu $a0, $a0, %lo(D_801B57A0)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017F9FC, .-func_8017F9FC\n"
);
