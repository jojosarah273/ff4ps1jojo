#include "common.h"
__asm__(
  ".globl func_800FF54C\n"
  ".type func_800FF54C, @function\n"
  "func_800FF54C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800FF5EC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_8011B6B4\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FF5D4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3D\n\tjal func_8011B6B4\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L800FF5D4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC6\n\tjal func_801163E8\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xB1\n\t.L800FF5D4:\n\tjal func_800FF704\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FF54C, .-func_800FF54C\n"
);
