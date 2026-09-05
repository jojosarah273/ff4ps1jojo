#include "common.h"
__asm__(
  ".globl func_8018C3E8\n"
  ".type func_8018C3E8, @function\n"
  "func_8018C3E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tbeqz $a0, .L8018C418\n\tsw $ra, 0x10($sp)\n\tlui $a0, %hi(D_8019B0B0)\n\tlw $a0, %lo(D_8019B0B0)($a0)\n\tjal func_8018B9A8\n\tnop\n\tbnez $v0, .L8018C418\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019B0AC)\n\tj .L8018C424\n\tsw $v0, %lo(D_8019B0AC)($at)\n\t.L8018C418:\n\tlui $at, %hi(D_8019B0AC)\n\tsw $zero, %lo(D_8019B0AC)($at)\n\taddu $v0, $zero, $zero\n\t.L8018C424:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018C3E8, .-func_8018C3E8\n"
);
