#include "common.h"
__asm__(
  ".globl func_80188B34\n"
  ".type func_80188B34, @function\n"
  "func_80188B34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsw $ra, 0x18($sp)\n\tjal func_80188AE8\n\taddiu $a0, $zero, 0x1\n\tbnez $v0, .L80188B94\n\taddiu $v0, $zero, -0x1\n\taddu $a2, $zero, $zero\n\tlw $a1, %gp_rel(D_8019EF8C)($gp)\n\tlw $v1, %gp_rel(D_8019ED28)($gp)\n\tlw $a0, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $a1, 4\n\taddu $v0, $v0, $v1\n\taddiu $v1, $zero, 0x100\n\tsh $v1, 0x0($v0)\n\tsw $s0, 0xC($v0)\n\tbeq $a1, $a0, .L80188B8C\n\tsw $s1, 0x4($v0)\n\taddiu $a2, $a1, 0x1\n\t.L80188B8C:\n\tsw $a2, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $a2, $zero\n\t.L80188B94:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188B34, .-func_80188B34\n"
);
