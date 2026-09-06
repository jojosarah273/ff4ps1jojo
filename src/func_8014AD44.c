#include "common.h"
__asm__(
  ".globl func_8014AD44\n"
  ".type func_8014AD44, @function\n"
  "func_8014AD44:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\tori $a0, $zero, 0xF279\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F8188\n\tori $a0, $zero, 0xF27A\n\tjal func_800F8188\n\tori $a0, $zero, 0xF281\n\tjal func_800F8188\n\tori $a0, $zero, 0xF284\n\tjal func_8014D080\n\tnop\n\tjal func_8014D394\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\tori $a0, $zero, 0xF281\n\tjal func_800F93DC\n\tnop\n\tjal func_8014D14C\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF42E\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AD44, .-func_8014AD44\n"
);
