#include "common.h"
__asm__(
  ".globl func_8014C57C\n"
  ".type func_8014C57C, @function\n"
  "func_8014C57C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF487\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L8014C654\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF487\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8014C5AC:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xED70\n\tjal func_800F8768\n\tori $a0, $zero, 0xF3C4\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014C5AC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1802\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tlui $a0, (0xDFFED >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDFFED & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L8014C62C:\n\tjal func_8007259C\n\tnop\n\tjal func_8014C664\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014C62C\n\tnop\n\t.L8014C654:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014C57C, .-func_8014C57C\n"
);
