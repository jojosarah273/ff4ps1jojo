#include "common.h"
__asm__(
  ".globl func_8012371C\n"
  ".type func_8012371C, @function\n"
  "func_8012371C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80123724:\n\tlui $a0, (0xFA764 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFA764 & 0xFFFF)\n\tjal func_801245B4\n\tnop\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x40\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x34\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x40\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80123724\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012371C, .-func_8012371C\n"
);
