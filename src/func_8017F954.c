#include "common.h"
__asm__(
  ".globl func_8017F954\n"
  ".type func_8017F954, @function\n"
  "func_8017F954:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tandi $a1, $a1, 0xFFFF\n\tandi $a2, $a2, 0xFFFF\n\tsll $a3, $a3, 16\n\tsw $ra, 0x10($sp)\n\tlui $v0, %hi(D_800D2105)\n\tlbu $v0, %lo(D_800D2105)($v0)\n\taddiu $v1, $zero, 0x7\n\tandi $v0, $v0, 0x7\n\tbeq $v0, $v1, .L8017F990\n\tsra $a3, $a3, 16\n\tjal func_80181C20\n\tnop\n\tj .L8017F998\n\tnop\n\t.L8017F990:\n\tjal func_8017FFE8\n\tnop\n\t.L8017F998:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017F954, .-func_8017F954\n"
);
