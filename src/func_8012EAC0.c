#include "common.h"
__asm__(
  ".globl func_8012EAC0\n"
  ".type func_8012EAC0, @function\n"
  "func_8012EAC0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L8012EAC8:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x23\n\tjal func_800F6E30\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012EBA8\n\tnop\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\t.L8012EB10:\n\tjal func_800F6D70\n\taddu $a0, $zero, $zero\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8012EB78\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8012EB78\n\tnop\n\tjal func_800F8A18\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8A18\n\taddiu $a0, $zero, 0x23\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1\n\tj .L8012EBA8\n\tnop\n\t.L8012EB78:\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x25\n\tjal func_800F5804\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8012EB10\n\tnop\n\t.L8012EBA8:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x21\n\tjal func_800F56AC\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8012EAC8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012EAC0, .-func_8012EAC0\n"
);
