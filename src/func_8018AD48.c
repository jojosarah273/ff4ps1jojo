#include "common.h"
__asm__(
  ".globl func_8018AD48\n"
  ".type func_8018AD48, @function\n"
  "func_8018AD48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v1, %hi(D_8019B104)\n\tlw $v1, %lo(D_8019B104)($v1)\n\taddiu $v0, $zero, 0x1\n\tbne $v1, $v0, .L8018ADAC\n\tsw $ra, 0x10($sp)\n\tlui $at, %hi(D_8019B104)\n\tjal func_801976E8\n\tsw $zero, %lo(D_8019B104)($at)\n\taddu $a0, $zero, $zero\n\tlui $at, %hi(D_8019B14C)\n\tsw $zero, %lo(D_8019B14C)($at)\n\tlui $at, %hi(D_8019B150)\n\tjal func_8018ACF8\n\tsw $zero, %lo(D_8019B150)($at)\n\tlui $a0, %hi(D_8019B09C)\n\tlw $a0, %lo(D_8019B09C)($a0)\n\tjal func_80197668\n\tnop\n\tlui $a0, %hi(D_8019B09C)\n\tlw $a0, %lo(D_8019B09C)($a0)\n\tjal func_801976A8\n\tnop\n\tjal func_801976F8\n\tnop\n\t.L8018ADAC:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AD48, .-func_8018AD48\n"
);
