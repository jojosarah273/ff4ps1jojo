#include "common.h"
__asm__(
  ".globl func_800F3CC4\n"
  ".type func_800F3CC4, @function\n"
  "func_800F3CC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a2, 0x7FFC\n\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\tori $a2, $a2, 0x8000\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x14($sp)\n\tlhu $v1, 0x0($v0)\n\taddiu $v0, $zero, 0x7FFF\n\taddu $v1, $v1, $a0\n\tslt $v0, $v0, $v1\n\tbnez $v0, .L800F3CF8\n\taddu $s0, $a1, $zero\n\tlui $a2, 0x800D\n\t.L800F3CF8:\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a2)\n\tnop\n\tsw $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x1($a2)\n\tlw $v1, 0x0($a0)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tsw $v1, 0x0($a0)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tlw $a0, 0x0($v0)\n\tjal func_800F3B04\n\tnop\n\taddu $v0, $v0, $s0\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3CC4, .-func_800F3CC4\n"
);
