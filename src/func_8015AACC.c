#include "common.h"
__asm__(
  ".globl func_8015AACC\n"
  ".type func_8015AACC, @function\n"
  "func_8015AACC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s2, $v0, $zero\n\tlui $a0, (0x138000 >> 16)\n\tori $a0, $a0, (0x138000 & 0xFFFF)\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\taddu $a0, $v0, $zero\n\tlbu $s0, 0x197B($s1)\n\taddiu $v0, $zero, 0x6\n\tbeq $s0, $v0, .L8015ABB8\n\taddiu $v1, $zero, 0x4\n\taddu $v0, $s0, $a0\n\tlbu $s0, 0x7E89($v0)\n\tnop\n\tbnez $s0, .L8015AB3C\n\tandi $v0, $s0, 0x80\n\tjal func_8015A5B8\n\tnop\n\tandi $v0, $s0, 0x80\n\t.L8015AB3C:\n\tbeqz $v0, .L8015AB7C\n\tandi $v0, $s0, 0x7F\n\tsb $v0, 0x193F($s1)\n\tsb $zero, 0x1940($s1)\n\tlbu $v0, 0xA9($s2)\n\tnop\n\tsb $v0, 0x193D($s1)\n\tlbu $v1, 0xAA($s2)\n\tjal func_8015236C\n\tsb $v1, 0x193E($s1)\n\tlbu $v0, 0x1941($s1)\n\tnop\n\tsb $v0, 0xA9($s2)\n\tlbu $v1, 0x1942($s1)\n\tj .L8015ABC4\n\tsb $v1, 0xAA($s2)\n\t.L8015AB7C:\n\tsb $s0, 0x1947($s1)\n\tsb $zero, 0x1948($s1)\n\tlbu $v0, 0xA9($s2)\n\tnop\n\tsb $v0, 0x1945($s1)\n\tlbu $v1, 0xAA($s2)\n\tjal func_8015254C\n\tsb $v1, 0x1946($s1)\n\tlbu $v0, 0x194A($s1)\n\tlbu $v1, 0x1949($s1)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tbnez $v1, .L8015ABBC\n\tsrl $v0, $v1, 8\n\taddiu $v1, $zero, 0x1\n\t.L8015ABB8:\n\tsrl $v0, $v1, 8\n\t.L8015ABBC:\n\tsb $v1, 0xA9($s2)\n\tsb $v0, 0xAA($s2)\n\t.L8015ABC4:\n\tjal func_8015ABEC\n\tnop\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015AACC, .-func_8015AACC\n"
);
