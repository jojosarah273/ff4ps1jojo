#include "common.h"
__asm__(
  ".globl func_80188FD0\n"
  ".type func_80188FD0, @function\n"
  "func_80188FD0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_80188AE8\n\taddiu $a0, $zero, 0x3\n\tbnez $v0, .L801890D4\n\taddiu $v0, $zero, -0x1\n\taddu $a1, $zero, $zero\n\tlw $v1, %gp_rel(D_8019EF8C)($gp)\n\tlw $a2, %gp_rel(D_8019ED28)($gp)\n\tlw $a3, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $v1, 4\n\taddu $v0, $v0, $a2\n\tbeq $v1, $a3, .L80189014\n\tsh $zero, 0x0($v0)\n\taddiu $a1, $v1, 0x1\n\t.L80189014:\n\tsw $a1, %gp_rel(D_8019EF8C)($gp)\n\tbeqz $s0, .L80189030\n\taddiu $v0, $zero, 0x1\n\tbeq $s0, $v0, .L80189074\n\tsll $v1, $a1, 4\n\tj .L801890B4\n\tnop\n\t.L80189030:\n\tsll $v1, $a1, 4\n\tlbu $v0, %gp_rel(D_8019EF44)($gp)\n\taddu $v1, $v1, $a2\n\tandi $v0, $v0, 0xBE\n\tsb $v0, %gp_rel(D_8019EF44)($gp)\n\taddiu $v0, $zero, 0x4\n\tsh $v0, 0x0($v1)\n\tlbu $a0, %gp_rel(D_8019EF44)($gp)\n\taddu $v0, $zero, $zero\n\tbeq $a1, $a3, .L80189060\n\tsw $a0, 0x4($v1)\n\taddiu $v0, $a1, 0x1\n\t.L80189060:\n\tsw $v0, %gp_rel(D_8019EF8C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v0, $v0, $a2\n\tj .L801890B0\n\taddiu $v1, $zero, 0x9\n\t.L80189074:\n\tlbu $v0, %gp_rel(D_8019EF44)($gp)\n\taddu $v1, $v1, $a2\n\tori $v0, $v0, 0x41\n\tsb $v0, %gp_rel(D_8019EF44)($gp)\n\taddiu $v0, $zero, 0x4\n\tsh $v0, 0x0($v1)\n\tlbu $a0, %gp_rel(D_8019EF44)($gp)\n\taddu $v0, $zero, $zero\n\tbeq $a1, $a3, .L801890A0\n\tsw $a0, 0x4($v1)\n\taddiu $v0, $a1, 0x1\n\t.L801890A0:\n\tsw $v0, %gp_rel(D_8019EF8C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v0, $v0, $a2\n\taddiu $v1, $zero, 0xB\n\t.L801890B0:\n\tsh $v1, 0x0($v0)\n\t.L801890B4:\n\tlw $a0, %gp_rel(D_8019EF8C)($gp)\n\tlw $v0, %gp_rel(D_8019EF40)($gp)\n\tnop\n\tbeq $a0, $v0, .L801890CC\n\taddu $v1, $zero, $zero\n\taddiu $v1, $a0, 0x1\n\t.L801890CC:\n\tsw $v1, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $v1, $zero\n\t.L801890D4:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188FD0, .-func_80188FD0\n"
);
