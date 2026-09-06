#include "common.h"
__asm__(
  ".globl func_80191C38\n"
  ".type func_80191C38, @function\n"
  "func_80191C38:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80190F50\n\tnop\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191C38, .-func_80191C38\n"
);
