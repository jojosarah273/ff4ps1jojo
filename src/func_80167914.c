#include "common.h"
__asm__(
  ".globl func_80167914\n"
  ".type func_80167914, @function\n"
  "func_80167914:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x7992\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\taddu $s2, $v0, $zero\n\tlbu $v0, 0x74A9($s2)\n\tnop\n\tbnez $v0, .L80167A14\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1802\n\tlbu $v1, 0x0($v0)\n\taddiu $v0, $zero, 0x10\n\tbne $v1, $v0, .L80167A14\n\tlui $v0, %hi(D_8019A158)\n\taddu $t0, $zero, $zero\n\taddiu $t3, $zero, -0x1\n\taddiu $t2, $v0, %lo(D_8019A158)\n\taddiu $t1, $zero, 0x12\n\taddu $v0, $t0, $s2\n\t.L80167988:\n\tlbu $a1, 0x7488($v0)\n\tsb $zero, 0x11($s0)\n\tandi $v0, $a1, 0x80\n\tbeqz $v0, .L801679A0\n\tsb $a1, 0x10($s0)\n\tsb $t3, 0x11($s0)\n\t.L801679A0:\n\tsll $v0, $t0, 5\n\tandi $a3, $v0, 0xFFFF\n\taddu $v1, $s1, $a3\n\taddu $a0, $t0, $t2\n\tlbu $a1, 0x0($a0)\n\taddiu $a0, $t0, 0x1\n\tlbu $a2, 0x0($v1)\n\tlbu $v0, 0x1($v1)\n\tlbu $v1, 0x11($s0)\n\tsll $v0, $v0, 8\n\tor $a2, $a2, $v0\n\tlbu $v0, 0x10($s0)\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddu $v0, $a2, $v0\n\tbeqz $a1, .L80167A08\n\tandi $a2, $v0, 0xFFFF\n\tsrl $t0, $a2, 8\n\t.L801679E8:\n\taddiu $v0, $a1, -0x1\n\tandi $a1, $v0, 0xFF\n\taddu $v1, $s1, $a3\n\taddiu $v0, $a3, 0x4\n\tandi $a3, $v0, 0xFFFF\n\tsb $a2, 0x0($v1)\n\tbnez $a1, .L801679E8\n\tsb $t0, 0x1($v1)\n\t.L80167A08:\n\tandi $t0, $a0, 0xFFFF\n\tbne $t0, $t1, .L80167988\n\taddu $v0, $t0, $s2\n\t.L80167A14:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tsb $zero, 0xE($s0)\n\tsb $zero, 0xF($s0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80167914, .-func_80167914\n"
);
