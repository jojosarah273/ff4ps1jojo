#include "common.h"
__asm__(
  ".globl func_80177F3C\n"
  ".type func_80177F3C, @function\n"
  "func_80177F3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlh $v1, %gp_rel(D_8019EE32)($gp)\n\taddiu $v0, $zero, 0x2\n\tsw $ra, 0x14($sp)\n\tbeq $v1, $v0, .L80177FBC\n\tsw $s0, 0x10($sp)\n\tslti $v0, $v1, 0x3\n\tbeqz $v0, .L80177F70\n\taddiu $v0, $zero, 0x1\n\tbeq $v1, $v0, .L80177F84\n\tnop\n\tj .L80178044\n\tnop\n\t.L80177F70:\n\taddiu $v0, $zero, 0x3\n\tbeq $v1, $v0, .L80178004\n\tnop\n\tj .L80178044\n\tnop\n\t.L80177F84:\n\tlh $v1, %gp_rel(D_8019EE40)($gp)\n\tnop\n\tsll $s0, $v1, 3\n\taddu $s0, $s0, $v1\n\tsll $s0, $s0, 2\n\taddu $s0, $s0, $v1\n\tsll $v0, $s0, 3\n\taddu $s0, $s0, $v0\n\tsll $s0, $s0, 4\n\taddu $s0, $s0, $v1\n\tsll $s0, $s0, 4\n\tlui $v0, %hi(D_801A0A90)\n\tj .L80177FE8\n\taddiu $v0, $v0, %lo(D_801A0A90)\n\t.L80177FBC:\n\tlh $v0, %gp_rel(D_8019EE40)($gp)\n\tnop\n\tsll $s0, $v0, 3\n\tsubu $s0, $s0, $v0\n\tsll $s0, $s0, 3\n\taddu $s0, $s0, $v0\n\tsll $s0, $s0, 4\n\tsubu $s0, $s0, $v0\n\tsll $s0, $s0, 3\n\tlui $v0, %hi(D_80096330)\n\taddiu $v0, $v0, %lo(D_80096330)\n\t.L80177FE8:\n\taddu $s0, $s0, $v0\n\tjal func_80194BC4\n\taddiu $a0, $s0, 0x5C\n\tjal func_801949F8\n\taddu $a0, $s0, $zero\n\tj .L80178044\n\tnop\n\t.L80178004:\n\tlh $v0, %gp_rel(D_8019EE40)($gp)\n\tnop\n\tsll $s0, $v0, 3\n\taddu $s0, $s0, $v0\n\tsll $s0, $s0, 2\n\tsubu $s0, $s0, $v0\n\tsll $s0, $s0, 2\n\taddu $s0, $s0, $v0\n\tsll $s0, $s0, 3\n\tlui $v0, %hi(D_8009A968)\n\taddiu $v0, $v0, %lo(D_8009A968)\n\taddu $s0, $s0, $v0\n\tjal func_80194BC4\n\taddiu $a0, $s0, 0x5C\n\tjal func_801949F8\n\taddu $a0, $s0, $zero\n\t.L80178044:\n\tlui $v1, %hi(D_800D2100)\n\tlbu $v1, %lo(D_800D2100)($v1)\n\tsh $zero, %gp_rel(D_8019EE32)($gp)\n\tandi $v0, $v1, 0x80\n\tbnez $v0, .L80178064\n\tnop\n\tbnez $v1, .L80178074\n\tnop\n\t.L80178064:\n\tjal func_801942FC\n\taddu $a0, $zero, $zero\n\tj .L8017807C\n\tnop\n\t.L80178074:\n\tjal func_801942FC\n\taddiu $a0, $zero, 0x1\n\t.L8017807C:\n\tjal func_80186810\n\tnop\n\tlw $v0, %gp_rel(D_8019EE04)($gp)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsw $v0, %gp_rel(D_8019EE04)($gp)\n\tjal func_80179958\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80177F3C, .-func_80177F3C\n"
);
