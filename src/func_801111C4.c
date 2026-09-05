#include "common.h"
__asm__(
  ".globl func_801111C4\n"
  ".type func_801111C4, @function\n"
  "func_801111C4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x10\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $v1, 0x0($v0)\n\tlui $at, %hi(D_8019EE6A)\n\tsh $v1, %lo(D_8019EE6A)($at)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x61\n\tjal func_800F8058\n\taddu $a0, $zero, $zero\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tlw $ra, 0x10($sp)\n\tlbu $a0, 0x0($v0)\n\tlui $v0, %hi(D_8019EE6A)\n\tlhu $v0, %lo(D_8019EE6A)($v0)\n\taddiu $v1, $zero, 0x1\n\tsb $v1, %gp_rel(D_8019ECFE)($gp)\n\tsll $a0, $a0, 8\n\tor $v0, $v0, $a0\n\tlui $at, %hi(D_8019EE6A)\n\tsh $v0, %lo(D_8019EE6A)($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801111C4, .-func_801111C4\n"
);
