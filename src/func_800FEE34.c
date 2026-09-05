#include "common.h"
__asm__(
  ".globl func_800FEE34\n"
  ".type func_800FEE34, @function\n"
  "func_800FEE34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F92D8\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F922C\n\tnop\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F926C\n\tnop\n\tjal func_800F9298\n\tnop\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x600\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x4211\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD9\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FEEE4\n\tnop\n\tjal func_800FE9F8\n\tnop\n\tj .L800FEF2C\n\tnop\n\t.L800FEEE4:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FEF0C\n\tnop\n\tjal func_80109774\n\tnop\n\tj .L800FEF2C\n\tnop\n\t.L800FEF0C:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xDA\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FEF2C\n\tnop\n\tjal func_801069E0\n\tnop\n\t.L800FEF2C:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F94B8\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F9410\n\tnop\n\tjal func_800F9538\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FEE34, .-func_800FEE34\n"
);
