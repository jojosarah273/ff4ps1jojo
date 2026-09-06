#include "common.h"
__asm__(
  ".globl func_80197BB4\n"
  ".type func_80197BB4, @function\n"
  "func_80197BB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80197D18\n\tnop\n\tjal func_80197798\n\taddu $a0, $zero, $zero\n\tjal func_80197D58\n\tnop\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197BB4, .-func_80197BB4\n"
);
