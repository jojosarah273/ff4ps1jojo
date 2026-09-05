#include "common.h"
__asm__(
  ".globl func_80152CDC\n"
  ".type func_80152CDC, @function\n"
  "func_80152CDC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\taddu $s1, $v0, $zero\n\tlbu $a0, 0x0($v1)\n\taddiu $v0, $zero, 0x80\n\tsb $a0, 0x152F($s1)\n\tsb $a0, 0xDF($s0)\n\tjal func_8015240C\n\tsb $v0, 0xE1($s0)\n\tlbu $v0, 0xE3($s0)\n\tlbu $v1, 0xE4($s0)\n\tsb $v0, 0xA6($s0)\n\tsb $v1, 0xA7($s0)\n\tlbu $a0, 0x152F($s1)\n\taddiu $v0, $zero, 0x15\n\tsb $v0, 0xE1($s0)\n\tjal func_8015240C\n\tsb $a0, 0xDF($s0)\n\tlbu $v0, 0xE3($s0)\n\tlbu $a0, 0x152F($s1)\n\tsb $v0, 0x1530($s1)\n\tlbu $v1, 0xE4($s0)\n\taddiu $v0, $zero, 0x37\n\tsb $v1, 0x1531($s1)\n\tsb $a0, 0xDF($s0)\n\tjal func_8015240C\n\tsb $v0, 0xE1($s0)\n\tlbu $v0, 0xE3($s0)\n\tlbu $a0, 0x152F($s1)\n\tsb $v0, 0x1532($s1)\n\tlbu $v1, 0xE4($s0)\n\taddiu $v0, $zero, 0x1C\n\tsb $v1, 0x1533($s1)\n\tsb $a0, 0xDF($s0)\n\tjal func_8015240C\n\tsb $v0, 0xE1($s0)\n\tlbu $v0, 0xE3($s0)\n\tlbu $v1, 0x152F($s1)\n\tsb $v0, 0x1534($s1)\n\tlbu $a0, 0xE4($s0)\n\taddiu $v0, $zero, 0x20\n\tsb $v1, 0x193D($s1)\n\taddiu $v1, $zero, 0x1\n\tsb $zero, 0x193E($s1)\n\tsb $v0, 0x193F($s1)\n\tsb $v1, 0x1940($s1)\n\tjal func_8015236C\n\tsb $a0, 0x1535($s1)\n\tlbu $v0, 0x1941($s1)\n\tlbu $v1, 0x1942($s1)\n\tlw $ra, 0x18($sp)\n\tlw $s0, 0x10($sp)\n\tsb $v0, 0x1536($s1)\n\tsb $v1, 0x1537($s1)\n\tlw $s1, 0x14($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152CDC, .-func_80152CDC\n"
);
