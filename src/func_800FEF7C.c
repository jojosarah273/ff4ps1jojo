#include "common.h"
__asm__(
  ".globl func_800FEF7C\n"
  ".type func_800FEF7C, @function\n"
  "func_800FEF7C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x4\n\tbnez $v0, .L800FF014\n\taddiu $v0, $zero, 0x1\n\tlui $v1, %hi(D_800D0207)\n\tlbu $v1, %lo(D_800D0207)($v1)\n\tnop\n\tbeq $v1, $v0, .L800FEFF4\n\tslti $v0, $v1, 0x2\n\tbeqz $v0, .L800FEFC8\n\tnop\n\tbeqz $v1, .L800FEFDC\n\tnop\n\tj .L800FF014\n\tnop\n\t.L800FEFC8:\n\taddiu $v0, $zero, 0x2\n\tbeq $v1, $v0, .L800FF00C\n\tnop\n\tj .L800FF014\n\tnop\n\t.L800FEFDC:\n\tjal func_800FEE34\n\tnop\n\tjal func_800FEE34\n\tnop\n\tj .L800FF014\n\tnop\n\t.L800FEFF4:\n\tjal func_80138F68\n\tnop\n\tjal func_80138F68\n\tnop\n\tj .L800FF014\n\tnop\n\t.L800FF00C:\n\tjal func_80073D58\n\tnop\n\t.L800FF014:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FEF7C, .-func_800FEF7C\n"
);
