#include "common.h"
__asm__(
  ".globl func_800FF0AC\n"
  ".type func_800FF0AC, @function\n"
  "func_800FF0AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L800FF0C4:\n\tlui $a0, (0xFA900 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFA900 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x14\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FF0C4\n\tnop\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L800FF108:\n\tlui $a0, (0xFA900 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFA900 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x102D\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FF108\n\tnop\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tlui $a0, (0xFA900 >> 16)\n\t.L800FF150:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFA900 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1037\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x9\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FF150\n\tlui $a0, (0xFA900 >> 16)\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tjal func_800F8EBC\n\taddiu $a0, $zero, 0x3D\n\tjal func_801183B0\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_80150A30\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FF0AC, .-func_800FF0AC\n"
);
