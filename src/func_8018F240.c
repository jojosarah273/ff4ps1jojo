#include "common.h"
__asm__(
  ".globl func_8018F240\n"
  ".type func_8018F240, @function\n"
  "func_8018F240:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8018F288\n\tnop\n\tjal func_8018F4B8\n\tnop\n\tlw $ra, 0x10($sp)\n\taddu $v0, $zero, $zero\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F240, .-func_8018F240\n"
);
