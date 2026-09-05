#include "common.h"
__asm__(
  ".globl func_80113C04\n"
  ".type func_80113C04, @function\n"
  "func_80113C04:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x300\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x23\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80113C44\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_801714C4\n\tnop\n\t.L80113C44:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80113C04, .-func_80113C04\n"
);
