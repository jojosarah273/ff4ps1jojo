#include "common.h"
__asm__(
  ".globl func_80160DF8\n"
  ".type func_80160DF8, @function\n"
  "func_80160DF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38E6\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2003\n\tori $v0, $v0, 0x80\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x390A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF8\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x33C2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x33C3\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80160DF8, .-func_80160DF8\n"
);
