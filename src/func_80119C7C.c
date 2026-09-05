#include "common.h"
__asm__(
  ".globl func_80119C7C\n"
  ".type func_80119C7C, @function\n"
  "func_80119C7C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $t1, %hi(D_8019EFA8)\n\taddiu $t0, $t1, %lo(D_8019EFA8)\n\tlui $a2, (0x800D0BDE >> 16)\n\tori $a2, $a2, (0x800D0BDE & 0xFFFF)\n\taddiu $a3, $zero, 0x3F\n\t.L80119C98:\n\tlbu $a1, -0x3($a2)\n\tlbu $v0, -0x2($a2)\n\tlbu $v1, -0x1($a2)\n\tlbu $a0, 0x0($a2)\n\taddiu $a2, $a2, 0x4\n\taddiu $a3, $a3, -0x1\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tsll $v1, $v1, 16\n\tor $a1, $a1, $v1\n\tsll $a0, $a0, 24\n\tor $a1, $a1, $a0\n\tsw $a1, 0x0($t0)\n\tbgez $a3, .L80119C98\n\taddiu $t0, $t0, 0x4\n\taddiu $a3, $zero, 0x40\n\tlui $v0, %hi(D_8019EFA8)\n\taddiu $v0, $v0, %lo(D_8019EFA8)\n\taddiu $t0, $v0, 0x100\n\tlui $a2, (0x800D0DDE >> 16)\n\tori $a2, $a2, (0x800D0DDE & 0xFFFF)\n\t.L80119CEC:\n\tlbu $a1, -0x3($a2)\n\tlbu $v0, -0x2($a2)\n\tlbu $v1, -0x1($a2)\n\tlbu $a0, 0x0($a2)\n\taddiu $a2, $a2, 0x4\n\taddiu $a3, $a3, 0x1\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tsll $v1, $v1, 16\n\tor $a1, $a1, $v1\n\tsll $a0, $a0, 24\n\tor $a1, $a1, $a0\n\tsw $a1, 0x0($t0)\n\tslti $v0, $a3, 0x80\n\tbnez $v0, .L80119CEC\n\taddiu $t0, $t0, 0x4\n\tjal func_8017F5C0\n\taddiu $a0, $t1, %lo(D_8019EFA8)\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tsb $v0, %gp_rel(D_8019ED04)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119C7C, .-func_80119C7C\n"
);
