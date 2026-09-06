#include "common.h"
__asm__(
  ".globl func_8010D61C\n"
  ".type func_8010D61C, @function\n"
  "func_8010D61C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xFE5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8010D664\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8010D66C\n\tnop\n\t.L8010D664:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x3E\n\t.L8010D66C:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x12F000 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x12F000 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_8010D6A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D61C, .-func_8010D61C\n"
);
