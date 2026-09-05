#include "common.h"
__asm__(
  ".globl func_8011F360\n"
  ".type func_8011F360, @function\n"
  "func_8011F360:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x45\n\t.L8011F370:\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xA\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8011F3A0\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x45\n\tj .L8011F370\n\tnop\n\t.L8011F3A0:\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F3D48\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x45\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011F3D8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tj .L8011F3E8\n\tnop\n\t.L8011F3D8:\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x80\n\t.L8011F3E8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011F360, .-func_8011F360\n"
);
