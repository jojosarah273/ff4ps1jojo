#include "common.h"
__asm__(
  ".globl func_8015F7E8\n"
  ".type func_8015F7E8, @function\n"
  "func_8015F7E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2706\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2706\n\tori $v0, $v0, 0x40\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD6\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCF\n\tjal func_8015A374\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_80153374\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCF\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x29EB\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x29EB\n\tori $v0, $v0, 0x20\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015F7E8, .-func_8015F7E8\n"
);
