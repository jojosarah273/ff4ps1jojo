#include "common.h"
__asm__(
  ".globl func_80177DEC\n"
  ".type func_80177DEC, @function\n"
  "func_80177DEC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_801A0A90)\n\tlh $a1, %gp_rel(D_8019EE40)($gp)\n\taddiu $s0, $s0, %lo(D_801A0A90)\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tsll $v0, $a1, 3\n\taddu $v0, $v0, $a1\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $a1\n\tsll $v1, $v0, 3\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 4\n\taddu $v0, $v0, $a1\n\tsll $v0, $v0, 4\n\tjal func_80194394\n\taddu $s1, $v0, $s0\n\taddiu $v0, $zero, 0x1\n\tsh $v0, %gp_rel(D_8019EE32)($gp)\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\tjal func_80194988\n\taddiu $a0, $s1, 0x70\n\tlhu $a1, %gp_rel(D_8019EE40)($gp)\n\tnop\n\txori $a1, $a1, 0x1\n\tsll $a0, $a1, 16\n\tsra $a0, $a0, 16\n\tsll $v0, $a0, 3\n\taddu $v0, $v0, $a0\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $a0\n\tsll $v1, $v0, 3\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 4\n\taddu $v0, $v0, $a0\n\tsll $v0, $v0, 4\n\tsh $a1, %gp_rel(D_8019EE40)($gp)\n\tjal func_8017841C\n\taddu $s1, $v0, $s0\n\tlui $v1, (0x800D2126 >> 16)\n\tori $v1, $v1, (0x800D2126 & 0xFFFF)\n\tlui $a0, %hi(D_8019FFE8)\n\taddiu $a0, $a0, %lo(D_8019FFE8)\n\tlbu $a2, 0x0($v1)\n\tlui $v0, %hi(D_800D2127)\n\tlbu $v0, %lo(D_800D2127)($v0)\n\taddu $a1, $a2, $zero\n\tsubu $v0, $v0, $a1\n\tsh $a2, 0x4($a0)\n\tjal func_80178C14\n\tsh $v0, 0x8($a0)\n\tjal func_8011EF0C\n\tnop\n\tjal func_800FEF7C\n\tnop\n\taddiu $a0, $s1, 0x70\n\tsh $zero, %gp_rel(D_8019EE70)($gp)\n\tsh $zero, %gp_rel(D_8019EDEC)($gp)\n\tjal func_801947B8\n\taddiu $a1, $zero, 0x29\n\taddu $a0, $s1, $zero\n\tlui $s0, %hi(D_800D212C)\n\tlbu $s0, %lo(D_800D212C)($s0)\n\taddu $a2, $zero, $zero\n\tandi $s0, $s0, 0x1F\n\tjal func_8017D078\n\taddu $a1, $s0, $zero\n\taddu $a0, $s1, $zero\n\tlui $a1, (0x800D0300 >> 16)\n\tori $a1, $a1, (0x800D0300 & 0xFFFF)\n\tjal func_8017E220\n\taddu $a2, $s0, $zero\n\tjal func_8017E740\n\taddu $a0, $s1, $zero\n\tjal func_80178D00\n\taddu $a0, $s1, $zero\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80177DEC, .-func_80177DEC\n"
);
