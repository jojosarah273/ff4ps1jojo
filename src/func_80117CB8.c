#include "common.h"
__asm__(
  ".globl func_80117CB8\n"
  ".type func_80117CB8, @function\n"
  "func_80117CB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xB\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80117D60\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80117CF8:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1100\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1180\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80117CF8\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80117D30:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1200\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x10C0\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80117D30\n\tnop\n\t.L80117D60:\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L80117D70:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0xAD6\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1000\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F3C3C\n\tsb $v1, 0x0($a1)\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80117DC0\n\tnop\n\tjal func_80117E64\n\tnop\n\t.L80117DC0:\n\tjal func_80117DF8\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80117D70\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80117CB8, .-func_80117CB8\n"
);
