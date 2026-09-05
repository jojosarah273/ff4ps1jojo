#include "common.h"
__asm__(
  ".globl func_80119210\n"
  ".type func_80119210, @function\n"
  "func_80119210:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x19\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x64\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1A\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x1B\n\tjal func_80174F0C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x31\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A2\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x32\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A2\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801192E0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x16A2\n\t.L801192E0:\n\tjal func_800FE778\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119210, .-func_80119210\n"
);
