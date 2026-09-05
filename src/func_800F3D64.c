#include "common.h"
__asm__(
  ".globl func_800F3D64\n"
  ".type func_800F3D64, @function\n"
  "func_800F3D64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED70)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tsb $s0, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED70)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED6C)($gp)\n\tsll $v0, $v0, 16\n\tsw $v0, 0x0($a0)\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\tlw $v0, %gp_rel(D_8019ED6C)($gp)\n\tlhu $a2, 0x0($v1)\n\tlw $a0, 0x0($v0)\n\taddu $a1, $zero, $zero\n\tjal func_800F3B9C\n\taddu $a0, $a0, $a2\n\taddu $a1, $zero, $zero\n\tsll $s0, $s0, 8\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tlui $a2, (0xFF0000 >> 16)\n\tlhu $a0, 0x0($v1)\n\tand $s0, $s0, $a2\n\tor $a0, $s0, $a0\n\tjal func_800F3B9C\n\taddu $s0, $v0, $zero\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\taddu $a1, $zero, $zero\n\tlhu $a0, 0x0($v1)\n\tnop\n\taddiu $a2, $a0, 0x1\n\tbeqz $a2, .L800F3E0C\n\taddu $a3, $v0, $zero\n\t.L800F3DF0:\n\taddu $a0, $s0, $a1\n\taddu $v0, $a3, $a1\n\taddiu $a1, $a1, 0x1\n\tlbu $v1, 0x0($v0)\n\tslt $v0, $a1, $a2\n\tbnez $v0, .L800F3DF0\n\tsb $v1, 0x0($a0)\n\t.L800F3E0C:\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddu $v0, $v0, $a2\n\tsh $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED58)($gp)\n\tlw $ra, 0x14($sp)\n\tlhu $v0, 0x0($a0)\n\tlw $s0, 0x10($sp)\n\taddu $v0, $v0, $a2\n\tsh $v0, 0x0($a0)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tori $v0, $zero, 0xFFFF\n\tsh $v0, 0x0($v1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3D64, .-func_800F3D64\n"
);
