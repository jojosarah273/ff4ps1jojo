#include "common.h"
__asm__(
  ".globl func_801004D4\n"
  ".type func_801004D4, @function\n"
  "func_801004D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x31\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A2\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x32\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A2\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x98\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801005CC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x96\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801005CC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801005CC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A0\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x96\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A1\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x98\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16A2\n\t.L801005CC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801004D4, .-func_801004D4\n"
);
