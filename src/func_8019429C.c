#include "common.h"
__asm__(
  ".globl func_8019429C\n"
  ".type func_8019429C, @function\n"
  "func_8019429C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\tlui $s0, D_8019DB56\n\taddiu $s0, $s0, D_8019DB56\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tlbu $v0, 0x0($s0)\n\tnop\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L801942E0\n\taddu $s1, $a0, $0\n\tlui $v0, D_8019DB50\n\tlw $v0, D_8019DB50($v0)\n\tlui $a0, D_800F38CC\n\taddiu $a0, $a0, D_800F38CC\n\tjalr $v0\n\taddu $a1, $s1, $0\n\t.L801942E0:\n\tlw $v0, 0xA($s0)\n\tsw $s1, 0xA($s0)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019429C, .-func_8019429C\n"
);
