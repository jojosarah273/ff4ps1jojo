#include "common.h"
__asm__(
  ".globl func_8010D458\n"
  ".type func_8010D458, @function\n"
  "func_8010D458:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xC\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8010D4CC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8010D4CC\n\tnop\n\tjal func_8010D54C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x7F4C00 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F4C00 & 0xFFFF)\n\tj .L8010D4D4\n\tnop\n\t.L8010D4CC:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L8010D4D4:\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D458, .-func_8010D458\n"
);
