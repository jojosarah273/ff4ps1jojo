#include "common.h"
__asm__(
  ".globl func_8015ABEC\n"
  ".type func_8015ABEC, @function\n"
  "func_8015ABEC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\taddu $s0, $v0, $zero\n\tlbu $v1, 0xA9($s1)\n\tlbu $a0, 0x1979($s0)\n\tlbu $v0, 0x197A($s0)\n\tsb $v1, 0x193D($s0)\n\tlbu $v1, 0xAA($s1)\n\tsb $a0, 0x193F($s0)\n\tsb $v0, 0x1940($s0)\n\tjal func_8015236C\n\tsb $v1, 0x193E($s0)\n\tlbu $v1, 0x1941($s0)\n\tlbu $a0, 0x1942($s0)\n\taddiu $v0, $zero, 0x10\n\tsb $v0, 0x1947($s0)\n\tsb $zero, 0x1948($s0)\n\tsb $v1, 0x1945($s0)\n\tjal func_8015254C\n\tsb $a0, 0x1946($s0)\n\tlbu $v0, 0x1949($s0)\n\tlw $ra, 0x18($sp)\n\tsb $v0, 0xAB($s1)\n\tlbu $v1, 0x194A($s0)\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0xAC($s1)\n\tlw $s1, 0x14($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015ABEC, .-func_8015ABEC\n"
);
