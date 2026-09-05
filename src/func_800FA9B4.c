#include "common.h"
__asm__(
  ".globl func_800FA9B4\n"
  ".type func_800FA9B4, @function\n"
  "func_800FA9B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F9690\n\tnop\n\tlui $v0, %hi(func_80198A00)\n\tlw $a0, %gp_rel(D_8019ED54)($gp)\n\taddiu $v0, $v0, %lo(func_80198A00)\n\tlhu $v1, 0x0($a0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xAC\n\tjal func_800F824C\n\tsb $v0, 0x0($a1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FA9B4, .-func_800FA9B4\n"
);
