#include "common.h"
__asm__(
  ".globl func_80115BCC\n"
  ".type func_80115BCC, @function\n"
  "func_80115BCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xACD\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 5\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\tsh $v0, 0x0($v1)\n\t.L80115C20:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xACE\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80115C50\n\tlui $a0, (0xD81F0 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD81F0 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xDDB\n\tj .L80115C60\n\tnop\n\t.L80115C50:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD8200 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xDFB\n\t.L80115C60:\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80115C20\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80115C90:\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x3\n\tsrl $v0, $v0, 2\n\tjal func_800F4248\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xA6D\n\tnor $v0, $zero, $v0\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x40\n\taddiu $v0, $v0, 0x4\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80115C90\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80115BCC, .-func_80115BCC\n"
);
