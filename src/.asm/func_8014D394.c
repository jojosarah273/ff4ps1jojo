#include "common.h"
__asm__(
  ".globl func_8014D394\n"
  ".type func_8014D394, @function\n"
  "func_8014D394:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF279\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014D3CC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\tori $a0, $zero, 0xF283\n\tj .L8014D404\n\tnop\n\t.L8014D3CC:\n\tjal func_800F6564\n\tori $a0, $zero, 0xF282\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014D404\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\tori $a0, $zero, 0xF282\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800999C8\n\tnop\n\t.L8014D404:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D394, .-func_8014D394\n"
);
