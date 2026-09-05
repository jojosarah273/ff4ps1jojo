#include "common.h"
__asm__(
  ".globl func_8018AAC4\n"
  ".type func_8018AAC4, @function\n"
  "func_8018AAC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbnez $a2, .L8018AAE4\n\tsll $v0, $a0, 1\n\tlui $v1, %hi(D_8019B114)\n\tlw $v1, %lo(D_8019B114)($v1)\n\tnop\n\taddu $v0, $v0, $v1\n\tj .L8018AB00\n\tsh $a1, 0x0($v0)\n\t.L8018AAE4:\n\tlui $a0, %hi(D_8019B114)\n\tlw $a0, %lo(D_8019B114)($a0)\n\tlui $v1, %hi(D_8019B13C)\n\tlw $v1, %lo(D_8019B13C)($v1)\n\taddu $v0, $v0, $a0\n\tsrlv $v1, $a1, $v1\n\tsh $v1, 0x0($v0)\n\t.L8018AB00:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AAC4, .-func_8018AAC4\n"
);
