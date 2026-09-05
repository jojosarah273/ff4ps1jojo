#include "common.h"
__asm__(
  ".globl func_80166458\n"
  ".type func_80166458, @function\n"
  "func_80166458:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\tori $a0, $zero, 0xF4A2\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8274\n\taddu $a0, $zero, $zero\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L801664D0:\n\tjal func_800F6658\n\taddu $a0, $zero, $zero\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x7612\n\tjal func_800F5DD4\n\taddiu $a0, $zero, 0x2\n\tjal func_800F5C64\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80166560\n\tnop\n\tjal func_800F658C\n\tori $a0, $zero, 0xF406\n\tjal func_800F8274\n\taddu $a0, $zero, $zero\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80166560\n\tnop\n\tjal func_800F6BE0\n\tori $a0, $zero, 0xDBE6\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x4\n\tjal func_800F6658\n\taddu $a0, $zero, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F5F70\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddu $a0, $zero, $zero\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\t.L80166560:\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x230\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801664D0\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80166458, .-func_80166458\n"
);
