#include "common.h"
__asm__(
  ".globl func_8015EB70\n"
  ".type func_8015EB70, @function\n"
  "func_8015EB70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80160AAC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38FE\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8015EBB8\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\tjal func_8006508C\n\tnop\n\tj .L8015EBD0\n\tnop\n\t.L8015EBB8:\n\tjal func_80160B8C\n\tnop\n\tjal func_80061860\n\tnop\n\tjal func_800654CC\n\tnop\n\t.L8015EBD0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015EB70, .-func_8015EB70\n"
);
