#include "common.h"
__asm__(
  ".globl func_80174348\n"
  ".type func_80174348, @function\n"
  "func_80174348:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x128A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801743D0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5A00\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x600\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F71DC\n\tori $a0, $zero, 0x9E00\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x49\n\tjal func_80170458\n\tnop\n\tlui $a0, %hi(D_801D7D68)\n\taddiu $a0, $a0, %lo(D_801D7D68)\n\taddiu $a1, $zero, 0x300\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, -0x1\n\t.L801743D0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80174348, .-func_80174348\n"
);
