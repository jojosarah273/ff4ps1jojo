#include "common.h"
__asm__(
  ".globl func_8015A374\n"
  ".type func_8015A374, @function\n"
  "func_8015A374:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x3558\n\tsw $ra, 0x14($sp)\n\tjal func_800F8F74\n\tsw $s0, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015A3A8\n\tnop\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x3558\n\t.L8015A3A8:\n\tjal func_80152CDC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2060\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2061\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x203B\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3979\n\tjal func_800F8E50\n\tsh $v1, 0x0($a1)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD6\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tnop\n\tlbu $s0, 0x0($v1)\n\tjal func_800F95A0\n\tnop\n\tsltiu $v0, $s0, 0x19\n\tbeqz $v0, .L8015A514\n\tlui $v0, %hi(jtbl_800F2D2C)\n\taddiu $v0, $v0, %lo(jtbl_800F2D2C)\n\tsll $v1, $s0, 2\n\taddu $v1, $v1, $v0\n\tlw $a0, 0x0($v1)\n\tnop\n\tjr $a0\n\tnop\n\tjal func_8015A524\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A5B8\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A670\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A784\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A89C\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A91C\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A9BC\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015AA6C\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015A614\n\tnop\n\tj .L8015A514\n\tnop\n\tjal func_8015AACC\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A374, .-func_8015A374\n"
);
