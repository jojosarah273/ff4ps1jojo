#include "common.h"
__asm__(
  ".globl func_80165C7C\n"
  ".type func_80165C7C, @function\n"
  "func_80165C7C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\taddu $a3, $v0, $zero\n\tsb $zero, 0x8($a3)\n\t.L80165C9C:\n\tlbu $a0, 0x0($a3)\n\tlbu $v0, 0x4($a3)\n\tlbu $v1, 0x1($a3)\n\tlbu $t0, 0x8($a3)\n\tsubu $a0, $a0, $v0\n\tsubu $a0, $a0, $s0\n\tandi $a0, $a0, 0xFFFF\n\tsrl $a1, $a0, 8\n\tandi $s0, $a1, 0x1\n\tlbu $v0, 0x5($a3)\n\tlbu $a1, 0x6($a3)\n\tsb $a0, 0x0($a3)\n\tsubu $v1, $v1, $v0\n\tsubu $v1, $v1, $s0\n\tandi $v1, $v1, 0xFFFF\n\tsrl $a2, $v1, 8\n\tlbu $v0, 0x2($a3)\n\tandi $s0, $a2, 0x1\n\tsb $v1, 0x1($a3)\n\tsubu $v0, $v0, $a1\n\tsubu $v0, $v0, $s0\n\tandi $a2, $v0, 0xFFFF\n\tsrl $a1, $a2, 8\n\tandi $s0, $a1, 0x1\n\taddiu $v0, $t0, 0x1\n\tsb $a2, 0x2($a3)\n\tbeqz $s0, .L80165C9C\n\tsb $v0, 0x8($a3)\n\tandi $a1, $a0, 0xFF\n\tandi $v1, $v1, 0xFF\n\tlbu $v0, 0x4($a3)\n\tlw $ra, 0x14($sp)\n\taddu $a1, $a1, $v0\n\tlbu $v0, 0x5($a3)\n\tsrl $s0, $a1, 8\n\taddu $v1, $v1, $v0\n\taddu $v1, $v1, $s0\n\tsrl $a0, $v1, 8\n\tlbu $v0, 0x6($a3)\n\tandi $s0, $a0, 0x1\n\taddu $v0, $a2, $v0\n\taddu $v0, $s0, $v0\n\tlw $s0, 0x10($sp)\n\tsb $t0, 0x8($a3)\n\tsb $a1, 0x0($a3)\n\tsb $v1, 0x1($a3)\n\tsb $v0, 0x2($a3)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80165C7C, .-func_80165C7C\n"
);
