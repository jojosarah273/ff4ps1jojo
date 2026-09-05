#include "common.h"
__asm__(
  ".globl func_80175B60\n"
  ".type func_80175B60, @function\n"
  "func_80175B60:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddiu $a0, $zero, 0xD4\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F6630\n\tsw $s0, 0x10($sp)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80175CA0\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD4\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x6FE\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $s0, 0x0($v0)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x700\n\taddiu $a0, $zero, 0x702\n\tlui $s1, %hi(D_801CFD68)\n\taddiu $s1, $s1, %lo(D_801CFD68)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tsll $v0, $s0, 1\n\taddu $v0, $v0, $s1\n\taddiu $s0, $s0, 0x1\n\tlhu $a1, 0x0($v1)\n\tandi $s0, $s0, 0xFFFF\n\tjal func_800F7210\n\tsh $a1, 0x0($v0)\n\taddiu $a0, $zero, 0x6FE\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tsll $s0, $s0, 1\n\tlhu $v1, 0x0($v0)\n\taddu $s0, $s0, $s1\n\tjal func_800F6564\n\tsh $v1, 0x0($s0)\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6FE\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x6FF\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6FF\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x6FE\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $s0, 0x0($v0)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x704\n\taddiu $a0, $zero, 0x706\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tsll $v0, $s0, 1\n\taddu $v0, $v0, $s1\n\taddiu $s0, $s0, 0x1\n\tlhu $a1, 0x0($v1)\n\tandi $s0, $s0, 0xFFFF\n\tjal func_800F7210\n\tsh $a1, 0x0($v0)\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tsll $s0, $s0, 1\n\tlhu $v1, 0x0($v0)\n\taddu $s0, $s0, $s1\n\tsh $v1, 0x0($s0)\n\t.L80175CA0:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175B60, .-func_80175B60\n"
);
