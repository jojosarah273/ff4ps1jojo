#include "common.h"
__asm__(
  ".globl func_8014BAA4\n"
  ".type func_8014BAA4, @function\n"
  "func_8014BAA4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF24E\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x26\n\tsll $v0, $v0, 3\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2D\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x26\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2D\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014BAA4, .-func_8014BAA4\n"
);
