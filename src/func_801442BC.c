#include "common.h"
__asm__(
  ".globl func_801442BC\n"
  ".type func_801442BC, @function\n"
  "func_801442BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF326\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF485\n\tjal func_8013EF78\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x78\n\t.L801442E4:\n\tjal func_80140558\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF326\n\tjal func_800F61E8\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF326\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801442E4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\tori $a0, $zero, 0xF326\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801442BC, .-func_801442BC\n"
);
