#include "common.h"
__asm__(
  ".globl func_8011DA88\n"
  ".type func_8011DA88, @function\n"
  "func_8011DA88:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L8011DAC0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tj .L8011DAE0\n\tnop\n\t.L8011DAC0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L8011DBE0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\t.L8011DAE0:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800FCC84\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x99\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xADB\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x95\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x9B\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x97\n\tjal func_800F7170\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8011DB70\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\t.L8011DB70:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x9D\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xB1B\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x95\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x9F\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x97\n\tjal func_800F7170\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8011DBE0\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\t.L8011DBE0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011DA88, .-func_8011DA88\n"
);
