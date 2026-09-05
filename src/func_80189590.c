#include "common.h"
__asm__(
  ".globl func_80189590\n"
  ".type func_80189590, @function\n"
  "func_80189590:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\taddiu $a0, $zero, 0x1\n\tsw $ra, 0x14($sp)\n\tjal func_801917F8\n\taddu $a1, $zero, $zero\n\taddu $v1, $v0, $zero\n\taddiu $v0, $zero, 0x2\n\tbeq $v1, $v0, .L801895CC\n\taddiu $v0, $zero, 0x5\n\tbeq $v1, $v0, .L801895F8\n\taddu $v0, $s0, $zero\n\tj .L801895FC\n\tnop\n\t.L801895CC:\n\taddu $a2, $zero, $zero\n\tlw $a1, %gp_rel(D_8019EF88)($gp)\n\tlw $v1, %gp_rel(D_8019ED28)($gp)\n\tlw $a0, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $a1, 4\n\taddu $v0, $v0, $v1\n\taddiu $v1, $zero, -0x1\n\tbeq $a1, $a0, .L801895F4\n\tsh $v1, 0x0($v0)\n\taddiu $a2, $a1, 0x1\n\t.L801895F4:\n\tsw $a2, %gp_rel(D_8019EF88)($gp)\n\t.L801895F8:\n\taddu $v0, $zero, $zero\n\t.L801895FC:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189590, .-func_80189590\n"
);
