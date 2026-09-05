#include "common.h"
__asm__(
  ".globl func_8015310C\n"
  ".type func_8015310C, @function\n"
  "func_8015310C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $ra, 0x18($sp)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x2000\n\tlbu $v1, 0x1530($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tsb $v1, 0x10($sp)\n\tlbu $a0, 0x1531($v0)\n\tnop\n\tsb $a0, 0x11($sp)\n\tlbu $a2, 0x0($a1)\n\tlhu $v1, 0x10($sp)\n\tlw $ra, 0x18($sp)\n\taddu $v1, $v1, $a2\n\tsh $v1, 0x10($sp)\n\tlbu $a0, 0x10($sp)\n\tnop\n\tsb $a0, 0x1598($v0)\n\tlbu $v1, 0x11($sp)\n\tnop\n\tsb $v1, 0x1599($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015310C, .-func_8015310C\n"
);
