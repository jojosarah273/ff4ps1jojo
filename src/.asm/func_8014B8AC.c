#include "common.h"
__asm__(
  ".globl func_8014B8AC\n"
  ".type func_8014B8AC, @function\n"
  "func_8014B8AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014B904\n\tnop\n\tjal func_800F71DC\n\tori $a0, $zero, 0x80B0\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF289\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\tori $a0, $zero, 0xF2D0\n\tjal func_8014B98C\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF289\n\t.L8014B904:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B8AC, .-func_8014B8AC\n"
);
