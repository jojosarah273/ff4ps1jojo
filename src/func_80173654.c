#include "common.h"
__asm__(
  ".globl func_80173654\n"
  ".type func_80173654, @function\n"
  "func_80173654:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x15\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xC8\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80173768\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80173768\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB9\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x10\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801736EC\n\tnop\n\tjal func_800F5CCC\n\tnop\n\t.L801736EC:\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\tsh $v0, 0x0($v1)\n\t.L80173730:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xBB6A\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4C0\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80173730\n\tnop\n\t.L80173768:\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80173654, .-func_80173654\n"
);
