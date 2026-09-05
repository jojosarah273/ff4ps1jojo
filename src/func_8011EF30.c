#include "common.h"
__asm__(
  ".globl func_8011EF30\n"
  ".type func_8011EF30, @function\n"
  "func_8011EF30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tjal func_800F939C\n\taddu $s0, $v0, $zero\n\tjal func_800F926C\n\tnop\n\tlui $v0, %hi(D_8019ED4C)\n\tlw $v0, %lo(D_8019ED4C)($v0)\n\tlui $a0, %hi(D_800D0000)\n\tlhu $v1, 0x0($v0)\n\taddiu $v0, $zero, 0x1\n\taddu $v1, $v1, $a0\n\tsb $v0, %lo(D_800D0000)($v1)\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tjal func_800F9448\n\tsh $v0, 0x0($a0)\n\tlui $v0, (0xFFFF24AF >> 16)\n\tori $v0, $v0, (0xFFFF24AF & 0xFFFF)\n\tlui $v1, (0xFFFF24B0 >> 16)\n\tori $v1, $v1, (0xFFFF24B0 & 0xFFFF)\n\tlui $a0, (0xFFFF24B1 >> 16)\n\tlui $a3, %hi(D_80199374)\n\tlui $a2, %hi(D_8019ED58)\n\tlw $a2, %lo(D_8019ED58)($a2)\n\taddiu $a3, $a3, %lo(D_80199374)\n\tlhu $a1, 0x0($a2)\n\tori $a0, $a0, (0xFFFF24B1 & 0xFFFF)\n\taddu $v0, $a1, $v0\n\taddu $v0, $v0, $a3\n\taddu $v1, $a1, $v1\n\tlbu $a2, 0x0($v0)\n\tlui $v0, (0xFFFF24B2 >> 16)\n\taddu $a0, $a1, $a0\n\tori $v0, $v0, (0xFFFF24B2 & 0xFFFF)\n\taddu $a1, $a1, $v0\n\tlbu $v0, 0x34($s0)\n\taddu $v1, $v1, $a3\n\tsb $a2, 0x2B($s0)\n\tlbu $a2, 0x0($v1)\n\taddu $a0, $a0, $a3\n\tsb $a2, 0x2C($s0)\n\tlbu $v1, 0x0($a0)\n\taddu $a1, $a1, $a3\n\tsb $v1, 0x2D($s0)\n\tlbu $v1, 0x0($a1)\n\tsb $v0, 0x2F($s0)\n\tjal func_800F9448\n\tsb $v1, 0x2E($s0)\n\tjal func_8011F030\n\tnop\n\tjal func_800F960C\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011EF30, .-func_8011EF30\n"
);
