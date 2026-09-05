#include "common.h"
__asm__(
  ".globl func_8013AFA4\n"
  ".type func_8013AFA4, @function\n"
  "func_8013AFA4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16AE\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x16AF\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013B034\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x16B0\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013B034\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16AF\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x16B0\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013B034\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_8013B04C\n\tnop\n\tj .L8013B03C\n\tnop\n\t.L8013B034:\n\tjal func_8012219C\n\tnop\n\t.L8013B03C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013AFA4, .-func_8013AFA4\n"
);
