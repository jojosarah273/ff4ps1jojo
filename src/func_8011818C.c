#include "common.h"
__asm__(
  ".globl func_8011818C\n"
  ".type func_8011818C, @function\n"
  "func_8011818C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x40\n\tsll $v0, $v0, 6\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x40\n\t.L801181F4:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1140\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1140\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801181F4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011818C, .-func_8011818C\n"
);
