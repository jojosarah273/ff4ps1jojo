#include "common.h"
__asm__(
  ".globl func_801943FC\n"
  ".type func_801943FC, @function\n"
  "func_801943FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $t0, $a0, $zero\n\tsw $s0, 0x18($sp)\n\tlui $a0, %hi(D_8019DB56)\n\taddiu $a0, $a0, %lo(D_8019DB56)\n\tsw $ra, 0x1C($sp)\n\tlbu $v1, 0x0($a0)\n\taddiu $v0, $zero, 0x1\n\tbeq $v1, $v0, .L80194438\n\taddu $s0, $a1, $zero\n\taddiu $v0, $zero, 0x2\n\tbeq $v1, $v0, .L801944C4\n\tnop\n\tj .L80194508\n\tnop\n\t.L80194438:\n\tlh $a1, 0x4($s0)\n\tlh $v1, 0x2($a0)\n\tnop\n\tslt $v0, $v1, $a1\n\tbnez $v0, .L801944B8\n\tnop\n\tlh $a3, 0x0($s0)\n\tnop\n\taddu $v0, $a1, $a3\n\tslt $v0, $v1, $v0\n\tbnez $v0, .L801944B8\n\tnop\n\tlh $v1, 0x2($s0)\n\tlh $a0, 0x4($a0)\n\tnop\n\tslt $v0, $a0, $v1\n\tbnez $v0, .L801944B8\n\tnop\n\tlh $a2, 0x6($s0)\n\tnop\n\taddu $v0, $v1, $a2\n\tslt $v0, $a0, $v0\n\tbnez $v0, .L801944B8\n\tnop\n\tblez $a1, .L801944B8\n\tnop\n\tbltz $a3, .L801944B8\n\tnop\n\tbltz $v1, .L801944B8\n\tnop\n\tbgtz $a2, .L80194508\n\tnop\n\t.L801944B8:\n\tlui $a0, %hi(D_800F3910)\n\tj .L801944CC\n\taddiu $a0, $a0, %lo(D_800F3910)\n\t.L801944C4:\n\tlui $a0, %hi(D_800F3930)\n\taddiu $a0, $a0, %lo(D_800F3930)\n\t.L801944CC:\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $t0, $zero\n\tlh $a1, 0x0($s0)\n\tlh $a2, 0x2($s0)\n\tlh $a3, 0x4($s0)\n\tlh $v1, 0x6($s0)\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tlui $a0, %hi(D_800F391C)\n\taddiu $a0, $a0, %lo(D_800F391C)\n\tjalr $v0\n\tsw $v1, 0x10($sp)\n\t.L80194508:\n\tlw $ra, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801943FC, .-func_801943FC\n"
);
