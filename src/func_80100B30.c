#include "common.h"
__asm__(
  ".globl func_80100B30\n"
  ".type func_80100B30, @function\n"
  "func_80100B30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1702\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80100BA0\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x3E\n\t.L80100BA0:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x158200 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x158200 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x158201 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x158201 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3E\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80100B30, .-func_80100B30\n"
);
