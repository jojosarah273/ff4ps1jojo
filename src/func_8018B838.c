#include "common.h"
__asm__(
  ".globl func_8018B838\n"
  ".type func_8018B838, @function\n"
  "func_8018B838:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tbeqz $s0, .L8018B860\n\tsw $ra, 0x14($sp)\n\taddiu $v0, $zero, 0x1\n\tbeq $s0, $v0, .L8018B89C\n\tnop\n\tj .L8018B908\n\tnop\n\t.L8018B860:\n\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\tnop\n\tlhu $a0, 0x1AA($v0)\n\tlui $at, %hi(D_8019B0A8)\n\tsw $zero, %lo(D_8019B0A8)($at)\n\tandi $v1, $a0, 0xFF7F\n\tsh $v1, 0x1AA($v0)\n\tsh $zero, 0x184($v0)\n\tsh $zero, 0x186($v0)\n\tlui $v0, %hi(D_8019B0BC)\n\taddiu $v0, $v0, %lo(D_8019B0BC)\n\tsh $zero, 0x0($v0)\n\tj .L8018B908\n\tsh $zero, 0x2($v0)\n\t.L8018B89C:\n\tlui $v0, %hi(D_8019B0AC)\n\tlw $v0, %lo(D_8019B0AC)($v0)\n\tnop\n\tbeq $v0, $s0, .L8018B8E8\n\tnop\n\tlui $a0, %hi(D_8019B0B0)\n\tlw $a0, %lo(D_8019B0B0)($a0)\n\tjal func_8018B9A8\n\tnop\n\tbeqz $v0, .L8018B8E8\n\tnop\n\tlui $v1, %hi(D_8019B114)\n\tlw $v1, %lo(D_8019B114)($v1)\n\tnop\n\tlhu $a0, 0x1AA($v1)\n\tlui $at, %hi(D_8019B0A8)\n\tsw $zero, %lo(D_8019B0A8)($at)\n\tj .L8018B904\n\tandi $v0, $a0, 0xFF7F\n\t.L8018B8E8:\n\tlui $v1, %hi(D_8019B114)\n\tlw $v1, %lo(D_8019B114)($v1)\n\tnop\n\tlhu $a0, 0x1AA($v1)\n\tlui $at, %hi(D_8019B0A8)\n\tsw $s0, %lo(D_8019B0A8)($at)\n\tori $v0, $a0, 0x80\n\t.L8018B904:\n\tsh $v0, 0x1AA($v1)\n\t.L8018B908:\n\tlui $v0, %hi(D_8019B0A8)\n\tlw $v0, %lo(D_8019B0A8)($v0)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018B838, .-func_8018B838\n"
);
