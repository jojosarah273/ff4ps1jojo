#include "common.h"
__asm__(
  ".globl func_80100978\n"
  ".type func_80100978, @function\n"
  "func_80100978:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80100A98\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x12A0\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\t.L80100998:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80100998\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80100978, .-func_80100978\n"
);
