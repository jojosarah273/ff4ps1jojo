#include "common.h"
__asm__(
  ".globl func_8015240C\n"
  ".type func_8015240C, @function\n"
  "func_8015240C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $zero, $zero\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x394D\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddiu $a3, $zero, 0x10\n\taddu $a1, $v0, $zero\n\tsb $zero, 0xE0($s0)\n\tsb $zero, 0xE2($s0)\n\tsb $zero, 0xE3($s0)\n\tsb $zero, 0xE4($s0)\n\tsb $zero, 0x0($a1)\n\tsb $zero, 0x1($a1)\n\t.L80152454:\n\tsll $v1, $s1, 15\n\tlbu $v0, 0xE2($s0)\n\tlbu $a0, 0xE1($s0)\n\tsll $v0, $v0, 8\n\tor $a0, $a0, $v0\n\tandi $a2, $a0, 0x1\n\tsrl $v0, $a0, 1\n\taddu $v0, $v0, $v1\n\tandi $a0, $v0, 0xFFFF\n\tsrl $v0, $a0, 8\n\tsb $a0, 0xE1($s0)\n\tbeqz $a2, .L801524C0\n\tsb $v0, 0xE2($s0)\n\tlbu $v0, 0x1($a1)\n\tlbu $a0, 0x0($a1)\n\tlbu $v1, 0xE0($s0)\n\tsll $v0, $v0, 8\n\tor $a0, $a0, $v0\n\tlbu $v0, 0xDF($s0)\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddu $v0, $v0, $a0\n\tsltu $a2,$zero,$v0\n\tandi $v0, $v0, 0xFFFF\n\tsb $v0, 0x0($a1)\n\tsrl $v0, $v0, 8\n\tsb $v0, 0x1($a1)\n\t.L801524C0:\n\taddiu $v0, $a3, -0x1\n\tandi $a3, $v0, 0xFFFF\n\tlbu $v1, 0x1($a1)\n\tlbu $a0, 0x0($a1)\n\tsll $v1, $v1, 8\n\tor $a0, $a0, $v1\n\tandi $s1, $a0, 0x1\n\tsrl $v0, $a0, 1\n\tsll $v1, $a2, 15\n\taddu $v0, $v0, $v1\n\tandi $a0, $v0, 0xFFFF\n\tsrl $v0, $a0, 8\n\tsb $a0, 0x0($a1)\n\tsb $v0, 0x1($a1)\n\tlbu $v1, 0xE4($s0)\n\tlbu $a0, 0xE3($s0)\n\tsll $v1, $v1, 8\n\tor $a0, $a0, $v1\n\tandi $a2, $a0, 0x1\n\tsrl $v0, $a0, 1\n\tsll $v1, $s1, 15\n\taddu $v0, $v0, $v1\n\tandi $a0, $v0, 0xFFFF\n\taddu $s1, $a2, $zero\n\tsrl $v0, $a0, 8\n\tsb $a0, 0xE3($s0)\n\tbnez $a3, .L80152454\n\tsb $v0, 0xE4($s0)\n\tjal func_800F971C\n\tnop\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015240C, .-func_8015240C\n"
);
