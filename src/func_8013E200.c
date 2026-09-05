#include "common.h"
__asm__(
  ".globl func_8013E200\n"
  ".type func_8013E200, @function\n"
  "func_8013E200:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_80143D64\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_80143D14\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF173\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x5\n\tjal func_8013DE38\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1\n\tnor $v0, $zero, $v0\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_8013DE38\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013E200, .-func_8013E200\n"
);
