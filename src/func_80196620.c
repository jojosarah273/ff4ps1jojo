#include "common.h"
__asm__(
  ".globl func_80196620\n"
  ".type func_80196620, @function\n"
  "func_80196620:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_80192C74\n\taddu $a0, $zero, $zero\n\tlui $at, %hi(D_8019DC80)\n\tsw $zero, %lo(D_8019DC80)($at)\n\tlui $v1, %hi(D_8019DC80)\n\tlw $v1, %lo(D_8019DC80)($v1)\n\tlui $at, %hi(D_8019DC8C)\n\tsw $v0, %lo(D_8019DC8C)($at)\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019DC7C)\n\tsw $v1, %lo(D_8019DC7C)($at)\n\tandi $v1, $s0, 0x7\n\tbeq $v1, $v0, .L801966DC\n\tslti $v0, $v1, 0x2\n\tbeqz $v0, .L80196680\n\taddiu $v0, $zero, 0x3\n\tbeqz $v1, .L80196690\n\tnop\n\tj .L80196728\n\tnop\n\t.L80196680:\n\tbeq $v1, $v0, .L801966DC\n\taddiu $v0, $zero, 0x5\n\tbne $v1, $v0, .L80196728\n\tnop\n\t.L80196690:\n\tlui $v1, %hi(D_8019DC68)\n\tlw $v1, %lo(D_8019DC68)($v1)\n\taddiu $v0, $zero, 0x401\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC78)\n\tlw $v1, %lo(D_8019DC78)($v1)\n\tlui $a0, %hi(D_801FD3A8)\n\taddiu $a0, $a0, %lo(D_801FD3A8)\n\tlw $v0, 0x0($v1)\n\taddu $a1, $zero, $zero\n\tori $v0, $v0, 0x800\n\tsw $v0, 0x0($v1)\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\taddiu $a2, $zero, 0x1800\n\tjal func_80196EF0\n\tsw $zero, 0x0($v0)\n\tj .L80196728\n\tnop\n\t.L801966DC:\n\tlui $v1, %hi(D_8019DC68)\n\tlw $v1, %lo(D_8019DC68)($v1)\n\taddiu $v0, $zero, 0x401\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC78)\n\tlw $v1, %lo(D_8019DC78)($v1)\n\tnop\n\tlw $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x800\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\tlui $v0, (0x2000000 >> 16)\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\tlui $v0, (0x1000000 >> 16)\n\tsw $v0, 0x0($v1)\n\t.L80196728:\n\tlui $a0, %hi(D_8019DC8C)\n\tlw $a0, %lo(D_8019DC8C)($a0)\n\tjal func_80192C74\n\tnop\n\tandi $v0, $s0, 0x7\n\tbnez $v0, .L8019674C\n\taddu $v0, $zero, $zero\n\tjal func_80196A10\n\taddu $a0, $s0, $zero\n\t.L8019674C:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196620, .-func_80196620\n"
);
