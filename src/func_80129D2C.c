#include "common.h"
__asm__(
  ".globl func_80129D2C\n"
  ".type func_80129D2C, @function\n"
  "func_80129D2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B49\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80129D54\n\tnop\n\tjal func_80132C0C\n\tnop\n\t.L80129D54:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129D2C, .-func_80129D2C\n"
);
