#include "common.h"
__asm__(
  ".globl func_801382C8\n"
  ".type func_801382C8, @function\n"
  "func_801382C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A3C\n\tjal func_800F5CCC\n\tnop\n\tlui $a1, (0x800D2200 >> 16)\n\tori $a1, $a1, (0x800D2200 & 0xFFFF)\n\tlui $a3, (0x800D1000 >> 16)\n\tori $a3, $a3, (0x800D1000 & 0xFFFF)\n\taddu $a2, $zero, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlui $a0, %hi(D_8019F7E8)\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $a0, %lo(D_8019F7E8)\n\tsll $v0, $v0, 11\n\tandi $v0, $v0, 0xFFFF\n\taddu $a1, $v0, $a1\n\t.L8013831C:\n\tbnez $s0, .L80138330\n\tnop\n\tlbu $v0, 0x0($a1)\n\tj .L80138348\n\tsb $v0, 0x0($a0)\n\t.L80138330:\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsb $v0, 0x0($a1)\n\tlbu $v1, 0x0($a0)\n\taddu $v0, $a3, $a2\n\tsb $v1, 0x0($v0)\n\t.L80138348:\n\taddiu $a1, $a1, 0x1\n\taddiu $a2, $a2, 0x1\n\tslti $v0, $a2, 0x800\n\tbnez $v0, .L8013831C\n\taddiu $a0, $a0, 0x1\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801382C8, .-func_801382C8\n"
);
