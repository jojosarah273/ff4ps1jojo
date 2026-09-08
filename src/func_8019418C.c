#include "common.h"
__asm__(
  ".globl func_8019418C\n"
  ".type func_8019418C, @function\n"
  "func_8019418C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v1, D_8019DB56\n\taddiu $v1, $v1, D_8019DB56\n\tsw $ra, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tlbu $s0, 0x0($v1)\n\tsb $a0, 0x0($v1)\n\tandi $a0, $a0, 0xFF\n\tbeqz $a0, .L801941D8\n\taddu $v0, $s0, $0\n\tlui $v0, D_8019DB50\n\tlw $v0, D_8019DB50($v0)\n\tlbu $a1, 0x0($v1)\n\tlbu $a2, -0x2($v1)\n\tlbu $a3, 0x1($v1)\n\tlui $a0, D_800F388C\n\tjalr $v0\n\taddiu $a0, $a0, D_800F388C\n\taddu $v0, $s0, $0\n\t.L801941D8:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019418C, .-func_8019418C\n"
);
