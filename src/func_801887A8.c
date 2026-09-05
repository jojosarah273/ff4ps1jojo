#include "common.h"
__asm__(
  ".globl func_801887A8\n"
  ".type func_801887A8, @function\n"
  "func_801887A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tandi $a0, $a0, 0xFF\n\tlui $v0, %hi(D_801F6678)\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $v0, %lo(D_801F6678)\n\taddiu $v1, $zero, 0x1\n\tbne $a0, $v1, .L801888A4\n\tsw $ra, 0x14($sp)\n\tlw $v0, %gp_rel(D_8019EF48)($gp)\n\tnop\n\tblez $v0, .L801888AC\n\tnop\n\tlhu $v0, 0x14($s0)\n\tnop\n\tbeqz $v0, .L80188850\n\taddiu $a1, $zero, 0x200\n\tlw $a0, %gp_rel(D_8019EF78)($gp)\n\tnop\n\tbgez $a0, .L80188800\n\taddu $v1, $a0, $zero\n\taddiu $v1, $a0, 0x7\n\taddiu $a1, $zero, 0x200\n\t.L80188800:\n\tsra $v1, $v1, 3\n\tsll $v1, $v1, 14\n\tsll $v0, $a0, 10\n\tandi $v0, $v0, 0x1800\n\tandi $a0, $a0, 0x1\n\tlw $a2, 0x8($s0)\n\tsll $a0, $a0, 13\n\taddu $a2, $a2, $v1\n\taddu $a2, $a2, $v0\n\tlw $v0, %gp_rel(D_8019EF48)($gp)\n\taddu $a0, $a2, $a0\n\taddiu $v0, $v0, -0x1\n\tsw $v0, %gp_rel(D_8019EF48)($gp)\n\tjal func_80191C58\n\tnop\n\tlw $v1, %gp_rel(D_8019EF78)($gp)\n\tlw $v0, 0xC($s0)\n\taddiu $v1, $v1, 0x1\n\tj .L80188884\n\tsll $v0, $v0, 3\n\t.L80188850:\n\tlw $a0, %gp_rel(D_8019EF78)($gp)\n\tlw $v1, 0x8($s0)\n\tlw $v0, %gp_rel(D_8019EF48)($gp)\n\tsll $a0, $a0, 11\n\taddu $a0, $v1, $a0\n\taddiu $v0, $v0, -0x1\n\tsw $v0, %gp_rel(D_8019EF48)($gp)\n\tjal func_80191C58\n\tnop\n\tlw $v1, %gp_rel(D_8019EF78)($gp)\n\tlw $v0, 0xC($s0)\n\taddiu $v1, $v1, 0x1\n\tsll $v0, $v0, 2\n\t.L80188884:\n\tdiv $zero,$v1,$v0\n\tmfhi $a0\n\tbnez $v0, .L80188898\n\tnop\n\t.word 0x000001CD\n\t.L80188898:\n\tsw $a0, %gp_rel(D_8019EF78)($gp)\n\tj .L801888AC\n\tnop\n\t.L801888A4:\n\taddiu $v0, $zero, -0x1\n\tsw $v0, %gp_rel(D_8019EF48)($gp)\n\t.L801888AC:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801887A8, .-func_801887A8\n"
);
