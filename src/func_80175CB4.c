#include "common.h"
__asm__(
  ".globl func_80175CB4\n"
  ".type func_80175CB4, @function\n"
  "func_80175CB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80175CCC:\n\tlui $a0, (0xD8000 >> 16)\n\t.L80175CD0:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD8000 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xDDB\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80175CCC\n\tnop\n\t.L80175D20:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xDDB\n\tjal func_800F63BC\n\tnop\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80175D20\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80175CD0\n\tlui $a0, (0xD8000 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175CB4, .-func_80175CB4\n"
);
