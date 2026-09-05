#include "common.h"
__asm__(
  ".globl func_8015A9BC\n"
  ".type func_8015A9BC, @function\n"
  "func_8015A9BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddu $a1, $v0, $zero\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlbu $v1, 0x1558($a1)\n\tlhu $a0, 0x0($v0)\n\tbeqz $v1, .L8015AA0C\n\taddu $v0, $a0, $a1\n\tlbu $a0, 0x2F($v0)\n\taddiu $v1, $zero, 0x4\n\tsb $v1, 0xAE($s0)\n\tj .L8015AA24\n\tsb $v1, 0xE2($s0)\n\t.L8015AA0C:\n\tlbu $a0, 0x17($v0)\n\tlbu $a1, 0x18($v0)\n\taddiu $v1, $zero, 0x2\n\tsb $v1, 0xAE($s0)\n\tsb $v1, 0xE2($s0)\n\taddu $a0, $a0, $a1\n\t.L8015AA24:\n\tsb $a0, 0xAD($s0)\n\tjal func_8015240C\n\tsb $a0, 0xDF($s0)\n\tlbu $v0, 0xE3($s0)\n\tnop\n\taddiu $a0, $v0, 0x1E\n\tlbu $v0, 0xE4($s0)\n\tsb $a0, 0xA9($s0)\n\tsrl $a0, $a0, 8\n\taddu $v0, $v0, $a0\n\tjal func_8015ABEC\n\tsb $v0, 0xAA($s0)\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A9BC, .-func_8015A9BC\n"
);
