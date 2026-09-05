#include "common.h"
__asm__(
  ".globl func_80106CD4\n"
  ".type func_80106CD4, @function\n"
  "func_80106CD4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $v0, %hi(D_800D4200)\n\tlbu $v0, %lo(D_800D4200)($v0)\n\tnop\n\tandi $v0, $v0, 0x80\n\tbeqz $v0, .L80106D5C\n\taddiu $v0, $zero, 0x2\n\tlui $v1, %hi(D_800D0203)\n\tlbu $v1, %lo(D_800D0203)($v1)\n\tnop\n\tbeq $v1, $v0, .L80106D44\n\tslti $v0, $v1, 0x3\n\tbeqz $v0, .L80106D20\n\tnop\n\tbeqz $v1, .L80106D34\n\tnop\n\tj .L80106D5C\n\tnop\n\t.L80106D20:\n\taddiu $v0, $zero, 0x13\n\tbeq $v1, $v0, .L80106D54\n\tnop\n\tj .L80106D5C\n\tnop\n\t.L80106D34:\n\tjal func_80106D6C\n\tnop\n\tj .L80106D5C\n\tnop\n\t.L80106D44:\n\tjal func_80071D4C\n\tnop\n\tj .L80106D5C\n\tnop\n\t.L80106D54:\n\tjal func_8016CA94\n\tnop\n\t.L80106D5C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80106CD4, .-func_80106CD4\n"
);
