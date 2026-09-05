#include "common.h"
__asm__(
  ".globl func_8014B454\n"
  ".type func_8014B454, @function\n"
  "func_8014B454:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\tori $a0, $zero, 0xE3E0\n\tjal func_8014B294\n\tnop\n\tjal func_800F7210\n\tori $a0, $zero, 0xF321\n\tjal func_800F9330\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\tori $a0, $zero, 0xF115\n\tjal func_800F7210\n\tori $a0, $zero, 0xF321\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF111\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x49\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF2A1\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 2\n\tjal func_800F5410\n\tsb $v0, 0x0($v1)\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF043\n\tjal func_800F3B04\n\taddu $a0, $v1, $a0\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\tori $a0, $zero, 0xF113\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF044\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\tori $a0, $zero, 0xF114\n\tjal func_801490CC\n\tnop\n\tjal func_8014B5A8\n\tnop\n\tjal func_80141FEC\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF113\n\tjal func_800F7210\n\tori $a0, $zero, 0xF321\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF111\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\tori $a0, $zero, 0xF115\n\tjal func_801490CC\n\tnop\n\tjal func_8014B5A8\n\tnop\n\tjal func_800953F4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B454, .-func_8014B454\n"
);
