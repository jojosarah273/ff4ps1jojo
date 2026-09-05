#include "common.h"
__asm__(
  ".globl func_8010D24C\n"
  ".type func_8010D24C, @function\n"
  "func_8010D24C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x7F4C00 >> 16)\n\t.L8010D268:\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F4C00 & 0xFFFF)\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x400\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010D268\n\tlui $a0, (0x7F4C00 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D24C, .-func_8010D24C\n"
);
