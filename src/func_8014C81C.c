#include "common.h"
__asm__(
  ".globl func_8014C81C\n"
  ".type func_8014C81C, @function\n"
  "func_8014C81C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8014C834:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF3C4\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF3C5\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_80094D14\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xED70\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8768\n\tori $a0, $zero, 0xED71\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x40\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014C834\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014C81C, .-func_8014C81C\n"
);
