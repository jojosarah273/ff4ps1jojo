#include "common.h"
__asm__(
  ".globl func_8018AB08\n"
  ".type func_8018AB08, @function\n"
  "func_8018AB08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B138)\n\tlw $v0, %lo(D_8019B138)($v0)\n\tnop\n\tbeqz $v0, .L8018AB58\n\taddu $a2, $a0, $zero\n\tlui $a0, %hi(D_8019B140)\n\tlw $a0, %lo(D_8019B140)($a0)\n\tnop\n\tdivu $zero,$a1,$a0\n\tbnez $a0, .L8018AB38\n\tnop\n\tbreak 7\n\t.L8018AB38:\n\tmfhi $v0\n\tbeqz $v0, .L8018AB58\n\tnop\n\tlui $v0, %hi(D_8019B144)\n\tlw $v0, %lo(D_8019B144)($v0)\n\taddu $a1, $a1, $a0\n\tnor $v0, $zero, $v0\n\tand $a1, $a1, $v0\n\t.L8018AB58:\n\tlui $v0, %hi(D_8019B13C)\n\tlw $v0, %lo(D_8019B13C)($v0)\n\tnop\n\tsrlv $a3, $a1, $v0\n\taddiu $v0, $zero, -0x2\n\tbeq $a2, $v0, .L8018AB88\n\taddu $v1, $a3, $zero\n\taddiu $v0, $zero, -0x1\n\tbne $a2, $v0, .L8018AB90\n\taddu $v0, $a1, $zero\n\tj .L8018ABA4\n\tandi $v0, $v1, 0xFFFF\n\t.L8018AB88:\n\tj .L8018ABA4\n\taddu $v0, $a1, $zero\n\t.L8018AB90:\n\tlui $a0, %hi(D_8019B114)\n\tlw $a0, %lo(D_8019B114)($a0)\n\tsll $v1, $a2, 1\n\taddu $v1, $v1, $a0\n\tsh $a3, 0x0($v1)\n\t.L8018ABA4:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AB08, .-func_8018AB08\n"
);
