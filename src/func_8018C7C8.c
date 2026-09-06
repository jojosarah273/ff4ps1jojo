#include "common.h"
__asm__(
  ".globl func_8018C7C8\n"
  ".type func_8018C7C8, @function\n"
  "func_8018C7C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x14($sp)\n\tjal func_8018E4E8\n\taddu $s0, $a0, $zero\n\tlw $a1, 0x0($s0)\n\tjal func_8018C608\n\taddiu $a0, $zero, 0x1\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018C7C8, .-func_8018C7C8\n"
);
