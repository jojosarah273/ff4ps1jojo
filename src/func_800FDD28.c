#include "common.h"
__asm__(
  ".globl func_800FDD28\n"
  ".type func_800FDD28, @function\n"
  "func_800FDD28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\taddu $a0, $zero, $zero\n\tlui $a3, %hi(D_800E7C00)\n\tlui $v0, %hi(D_801CFD68)\n\taddiu $a2, $v0, %lo(D_801CFD68)\n\t.L800FDD50:\n\taddu $a1, $a0, $a3\n\taddiu $v0, $a0, 0x3800\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a2\n\taddiu $a0, $a0, 0x1\n\tandi $a0, $a0, 0xFFFF\n\tlhu $v1, 0x0($v0)\n\tsltiu $v0, $a0, 0x100\n\tsrl $v1, $v1, 8\n\tbnez $v0, .L800FDD50\n\tsb $v1, %lo(D_800E7C00)($a1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FDD28, .-func_800FDD28\n"
);
