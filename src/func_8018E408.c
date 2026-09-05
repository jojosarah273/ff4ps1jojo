#include "common.h"
__asm__(
  ".globl func_8018E408\n"
  ".type func_8018E408, @function\n"
  "func_8018E408:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a1, $a0, $zero\n\tlui $v0, (0x7FFF8 >> 16)\n\tori $v0, $v0, (0x7FFF8 & 0xFFFF)\n\tsltu $v0,$v0,$a1\n\tbnez $v0, .L8018E434\n\tsw $ra, 0x10($sp)\n\tjal func_8018AB08\n\taddiu $a0, $zero, 0xD2\n\tj .L8018E438\n\tnop\n\t.L8018E434:\n\taddu $v0, $zero, $zero\n\t.L8018E438:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018E408, .-func_8018E408\n"
);
