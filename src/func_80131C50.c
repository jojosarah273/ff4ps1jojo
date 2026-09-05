#include "common.h"
__asm__(
  ".globl func_80131C50\n"
  ".type func_80131C50, @function\n"
  "func_80131C50:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BBD\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80131CC8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE8\n\tjal func_80124EAC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B93\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0xB\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0xB\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80131CC8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80131C50, .-func_80131C50\n"
);
