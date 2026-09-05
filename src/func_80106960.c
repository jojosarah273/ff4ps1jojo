#include "common.h"
__asm__(
  ".globl func_80106960\n"
  ".type func_80106960, @function\n"
  "func_80106960:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x8F\n\tsw $ra, 0x14($sp)\n\tjal func_800F71DC\n\tsw $s0, 0x10($sp)\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4209\n\taddiu $a0, $zero, 0xA1\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tlui $s0, %hi(D_8019FFE8)\n\tlhu $v0, 0x0($v1)\n\taddiu $s0, $s0, %lo(D_8019FFE8)\n\taddiu $v0, $v0, 0x1\n\tjal func_800F654C\n\tsh $v0, 0x34($s0)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\taddiu $a0, $zero, 0x7F\n\taddiu $v0, $zero, 0x88\n\tsh $zero, 0x2A($s0)\n\tjal func_800F8FB8\n\tsh $v0, 0x2C($s0)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x8F6\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x8F6\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80106960, .-func_80106960\n"
);
