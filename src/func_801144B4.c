#include "common.h"
__asm__(
  ".globl func_801144B4\n"
  ".type func_801144B4, @function\n"
  "func_801144B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800FE870\n\tsw $s0, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD5\n\tjal func_8010543C\n\tlui $s1, %hi(D_80198C78)\n\tjal func_80102770\n\tnop\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L801144F8:\n\tlui $v1, %hi(D_8019ED60)\n\tlw $v1, %lo(D_8019ED60)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v0, 0x0($a0)\n\tnop\n\tsh $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\taddiu $s0, $s1, %lo(D_80198C78)\n\tlhu $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xC\n\tjal func_800F824C\n\tsb $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x1($v0)\n\taddiu $a0, $zero, 0xE\n\tjal func_800F824C\n\tsb $v1, 0x0($a1)\n\tjal func_80115A34\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x91\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x78\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8F\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xF\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x92\n\tjal func_8011581C\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x50\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801144F8\n\tnop\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801144B4, .-func_801144B4\n"
);
