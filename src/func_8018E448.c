#include "common.h"
__asm__(
  ".globl func_8018E448\n"
  ".type func_8018E448, @function\n"
  "func_8018E448:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019B150)\n\tlw $s0, %lo(D_8019B150)($s0)\n\tnop\n\tbeq $a0, $s0, .L8018E470\n\tsw $ra, 0x14($sp)\n\tlui $at, %hi(D_8019B150)\n\tjal func_8018E488\n\tsw $a0, %lo(D_8019B150)($at)\n\t.L8018E470:\n\taddu $v0, $s0, $zero\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018E448, .-func_8018E448\n"
);
