#include "common.h"
__asm__(
  ".globl func_80142BCC\n"
  ".type func_80142BCC, @function\n"
  "func_80142BCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF428\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddu $a0, $zero, $zero\n\tjal func_800F8FB8\n\tsh $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\t.L80142C14:\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xF133\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8768\n\tori $a0, $zero, 0xF173\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80142C14\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80142BCC, .-func_80142BCC\n"
);
