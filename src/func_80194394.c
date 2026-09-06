#include "common.h"
__asm__(
  ".globl func_80194394\n"
  ".type func_80194394, @function\n"
  "func_80194394:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DB56)\n\tlbu $v0, %lo(D_8019DB56)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L801943D0\n\tsw $ra, 0x14($sp)\n\tlui $a0, %hi(D_800F38FC)\n\taddiu $a0, $a0, %lo(D_800F38FC)\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s0, $zero\n\t.L801943D0:\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\tnop\n\tlw $v0, 0x3C($v0)\n\tnop\n\tjalr $v0\n\taddu $a0, $s0, $zero\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80194394, .-func_80194394\n"
);
