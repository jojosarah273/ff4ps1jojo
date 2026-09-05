#include "common.h"
__asm__(
  ".globl func_8010D0D8\n"
  ".type func_8010D0D8, @function\n"
  "func_8010D0D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\t.L8010D170:\n\tlui $a0, (0xD80D0 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD80D0 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xE5B\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010D170\n\tnop\n\t.L8010D1C4:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xE5B\n\tjal func_800F63BC\n\tnop\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010D1C4\n\tnop\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010D170\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D0D8, .-func_8010D0D8\n"
);
