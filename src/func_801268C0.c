#include "common.h"
__asm__(
  ".globl func_801268C0\n"
  ".type func_801268C0, @function\n"
  "func_801268C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5CCC\n\tnop\n\tjal func_801224D0\n\tnop\n\tlui $v0, %hi(D_80199BFC)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\taddiu $v0, $v0, %lo(D_80199BFC)\n\tlhu $v1, 0x0($a0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x43\n\tjal func_800F824C\n\tsb $v0, 0x0($a1)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801268C0, .-func_801268C0\n"
);
