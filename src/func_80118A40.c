#include "common.h"
__asm__(
  ".globl func_80118A40\n"
  ".type func_80118A40, @function\n"
  "func_80118A40:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80118A80\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800FD85C\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tj .L80118A98\n\tnop\n\t.L80118A80:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800FD914\n\tnop\n\tjal func_8011EA5C\n\tnop\n\t.L80118A98:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80118A40, .-func_80118A40\n"
);
