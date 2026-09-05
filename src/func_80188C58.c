#include "common.h"
__asm__(
  ".globl func_80188C58\n"
  ".type func_80188C58, @function\n"
  "func_80188C58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_80188AE8\n\taddiu $a0, $zero, 0x3\n\tbnez $v0, .L80188D18\n\taddiu $v0, $zero, -0x1\n\tbeqz $s0, .L80188C8C\n\tnop\n\tlbu $v0, %gp_rel(D_8019EF44)($gp)\n\tj .L80188C98\n\tori $v0, $v0, 0x80\n\t.L80188C8C:\n\tlbu $v0, %gp_rel(D_8019EF44)($gp)\n\tnop\n\tandi $v0, $v0, 0x7F\n\t.L80188C98:\n\tsb $v0, %gp_rel(D_8019EF44)($gp)\n\taddu $a3, $zero, $zero\n\tlw $v1, %gp_rel(D_8019EF8C)($gp)\n\tlw $a2, %gp_rel(D_8019ED28)($gp)\n\tlw $t0, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $v1, 4\n\taddu $v0, $v0, $a2\n\tbeq $v1, $t0, .L80188CC0\n\tsh $zero, 0x0($v0)\n\taddiu $a3, $v1, 0x1\n\t.L80188CC0:\n\tsll $v0, $a3, 4\n\taddu $v0, $v0, $a2\n\taddiu $v1, $zero, 0x4\n\tsw $a3, %gp_rel(D_8019EF8C)($gp)\n\tsh $v1, 0x0($v0)\n\tlbu $a0, %gp_rel(D_8019EF44)($gp)\n\taddu $a1, $zero, $zero\n\tbeq $a3, $t0, .L80188CE8\n\tsw $a0, 0x4($v0)\n\taddiu $a1, $a3, 0x1\n\t.L80188CE8:\n\taddu $a3, $zero, $zero\n\tsll $v0, $a1, 4\n\taddu $v0, $v0, $a2\n\taddiu $v1, $zero, 0x200\n\taddiu $a0, $zero, 0x2\n\tsw $a1, %gp_rel(D_8019EF8C)($gp)\n\tsh $v1, 0x0($v0)\n\tbeq $a1, $t0, .L80188D10\n\tsw $a0, 0x4($v0)\n\taddiu $a3, $a1, 0x1\n\t.L80188D10:\n\tsw $a3, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $a3, $zero\n\t.L80188D18:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188C58, .-func_80188C58\n"
);
