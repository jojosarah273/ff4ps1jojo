#include "common.h"
__asm__(
  ".globl func_80191C58\n"
  ".type func_80191C58, @function\n"
  "func_80191C58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80191C78\n\tnop\n\tlw $ra, 0x10($sp)\n\tsltiu $v0, $v0, 0x1\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191C58, .-func_80191C58\n"
);
