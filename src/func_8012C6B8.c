#include "common.h"
__asm__(
  ".globl func_8012C6B8\n"
  ".type func_8012C6B8, @function\n"
  "func_8012C6B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x3\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x60\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8012C6FC\n\tlui $v0, %hi(D_801991B0)\n\tlhu $a0, %lo(D_801991B0)($v0)\n\tjal func_800F7500\n\taddiu $s0, $zero, 0x1\n\tjal func_8012C2F8\n\tnop\n\t.L8012C6FC:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x60\n\tjal func_800F63BC\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x60\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x60\n\tbnez $s0, .L8012C73C\n\tnop\n\tjal func_801221EC\n\tnop\n\t.L8012C73C:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C6B8, .-func_8012C6B8\n"
);
