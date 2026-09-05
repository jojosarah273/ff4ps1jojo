#include "common.h"
__asm__(
  ".globl func_8016046C\n"
  ".type func_8016046C, @function\n"
  "func_8016046C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x29B5\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x29CA\n\tjal func_800F6048\n\taddu $a0, $v0, $zero\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x29CD\n\tjal func_800F5410\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x5\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x88\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE1\n\tjal func_8015240C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xE3\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2004\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2005\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2006\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2009\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2007\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x200A\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2008\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD6\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x88\n\tjal func_8015A374\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_80153374\n\tnop\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x88\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x40\n\tjal func_800F654C\n\tsh $v1, 0x0($a1)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x29EB\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x8A\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016046C, .-func_8016046C\n"
);
