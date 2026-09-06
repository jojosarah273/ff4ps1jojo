#include "common.h"
__asm__(
  ".globl func_801449A0\n"
  ".type func_801449A0, @function\n"
  "func_801449A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\tori $a0, $zero, 0xF446\n\tjal func_801444FC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801449A0, .-func_801449A0\n"
);
