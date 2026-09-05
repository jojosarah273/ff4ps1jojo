#include "common.h"
__asm__(
  ".globl func_8018ADC8\n"
  ".type func_8018ADC8, @function\n"
  "func_8018ADC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $v0, $a0, $zero\n\tbgtz $v0, .L8018ADDC\n\tlui $v1, (0x40001010 >> 16)\n\tj .L8018AE14\n\taddu $v0, $zero, $zero\n\t.L8018ADDC:\n\tlui $a0, %hi(D_8019B13C)\n\tlw $a0, %lo(D_8019B13C)($a0)\n\tori $v1, $v1, (0x40001010 & 0xFFFF)\n\tsw $v1, 0x0($a1)\n\tlui $v1, (0x10000 >> 16)\n\tlui $at, %hi(D_8019B17C)\n\tsw $a1, %lo(D_8019B17C)($at)\n\tlui $at, %hi(D_8019B178)\n\tsw $zero, %lo(D_8019B178)($at)\n\tlui $at, %hi(D_8019B174)\n\tsw $v0, %lo(D_8019B174)($at)\n\tsllv $v1, $v1, $a0\n\taddiu $v1, $v1, -0x1010\n\tsw $v1, 0x4($a1)\n\t.L8018AE14:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018ADC8, .-func_8018ADC8\n"
);
