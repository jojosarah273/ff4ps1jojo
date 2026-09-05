#include "common.h"
__asm__(
  ".globl func_800FE8B4\n"
  ".type func_800FE8B4, @function\n"
  "func_800FE8B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tjal func_800F3B04\n\taddu $a0, $zero, $zero\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\taddu $s0, $v0, $zero\n\tsh $zero, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\taddiu $v0, $zero, 0xF0\n\tsb $v0, 0x0($a0)\n\t.L800FE8E8:\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\tlhu $v0, 0x0($v1)\n\tlbu $a1, 0x0($a0)\n\taddu $v0, $v0, $s0\n\tsb $a1, 0x301($v0)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x4\n\tsh $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v1, 0x0($a0)\n\taddiu $v0, $zero, 0x100\n\tbne $v1, $v0, .L800FE8E8\n\tnop\n\tsh $zero, 0x0($a0)\n\t.L800FE934:\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddu $v0, $v0, $s0\n\tjal func_800F6364\n\tsb $zero, 0x500($v0)\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $a0, 0x0($v0)\n\taddiu $v1, $zero, 0x20\n\tbne $a0, $v1, .L800FE934\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE8B4, .-func_800FE8B4\n"
);
