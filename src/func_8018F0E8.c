#include "common.h"
__asm__(
  ".globl func_8018F0E8\n"
  ".type func_8018F0E8, @function\n"
  "func_8018F0E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0xAB\n\tnop\n\taddiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0xAC\n\tnop\n\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x14($sp)\n\tjal func_8018F158\n\taddu $s0, $a0, $zero\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x3F\n\tjal func_8018F148\n\taddu $a2, $zero, $zero\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F0E8, .-func_8018F0E8\n"
);
