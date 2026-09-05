#include "common.h"
__asm__(
  ".globl func_80174710\n"
  ".type func_80174710, @function\n"
  "func_80174710:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0xD87D0 >> 16)\n\t.L80174724:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD87D0 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xCDB\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80174724\n\tlui $a0, (0xD87D0 >> 16)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16AA\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0xCDD\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80174710, .-func_80174710\n"
);
