#include "common.h"
__asm__(
  ".globl func_8018F5C8\n"
  ".type func_8018F5C8, @function\n"
  "func_8018F5C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801911E8\n\tnop\n\tbnez $v0, .L8018F5F0\n\tnop\n\tjal func_801910AC\n\tnop\n\tj .L8018F5F4\n\tsltiu $v0, $v0, 0x1\n\t.L8018F5F0:\n\taddu $v0, $zero, $zero\n\t.L8018F5F4:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F5C8, .-func_8018F5C8\n"
);
