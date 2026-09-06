#include "common.h"
__asm__(
  ".globl func_80189F6C\n"
  ".type func_80189F6C, @function\n"
  "func_80189F6C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a1, 0xFF\n\tori $a1, $a1, 0xFFFF\n\tsw $ra, 0x10($sp)\n\tjal func_8018C608\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189F6C, .-func_80189F6C\n"
);
