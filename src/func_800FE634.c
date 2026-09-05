#include "common.h"
__asm__(
  ".globl func_800FE634\n"
  ".type func_800FE634, @function\n"
  "func_800FE634:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x6FB\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\tlui $a0, (0x14EF00 >> 16)\n\tori $a0, $a0, (0x14EF00 & 0xFFFF)\n\taddu $s0, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tlbu $a0, 0x0($s0)\n\tlbu $a1, 0x0($v1)\n\tnop\n\taddu $a1, $a1, $a0\n\tandi $a1, $a1, 0xFF\n\tandi $v1, $a1, 0x7F\n\tsll $v1, $v1, 1\n\taddu $v0, $v0, $v1\n\tsb $a1, 0x6($s1)\n\tlbu $a0, 0x1($v0)\n\tlbu $v1, 0x0($v0)\n\tlbu $v0, 0xAD($s1)\n\tsll $a0, $a0, 8\n\tor $v1, $v1, $a0\n\tmult $v0, $v1\n\tandi $a1, $a1, 0x80\n\tmflo $v0\n\tbeqz $a1, .L800FE6C8\n\tsrl $v1, $v0, 8\n\tnor $v0, $zero, $v1\n\taddiu $v0, $v0, 0x1\n\tandi $v1, $v0, 0xFFFF\n\t.L800FE6C8:\n\tlw $v0, %gp_rel(D_8019ED58)($gp)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tsh $v1, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE634, .-func_800FE634\n"
);
