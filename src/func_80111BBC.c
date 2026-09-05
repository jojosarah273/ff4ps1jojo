#include "common.h"
__asm__(
  ".globl func_80111BBC\n"
  ".type func_80111BBC, @function\n"
  "func_80111BBC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0xD8210 >> 16)\n\t.L80111BD0:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD8210 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xE1B\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xAAD\n\tlui $a0, (0xD8220 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD8220 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xE3B\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80111BD0\n\tlui $a0, (0xD8210 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80111BBC, .-func_80111BBC\n"
);
