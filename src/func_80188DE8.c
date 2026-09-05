#include "common.h"
__asm__(
  ".globl func_80188DE8\n"
  ".type func_80188DE8, @function\n"
  "func_80188DE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_80188AE8\n\taddiu $a0, $zero, 0x3\n\tbnez $v0, .L80188E98\n\taddiu $v0, $zero, -0x1\n\taddu $a1, $zero, $zero\n\tlw $a0, %gp_rel(D_8019EF8C)($gp)\n\tlw $a2, %gp_rel(D_8019ED28)($gp)\n\tlw $v1, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $a0, 4\n\taddu $v0, $v0, $a2\n\tbeq $a0, $v1, .L80188E2C\n\tsh $zero, 0x0($v0)\n\taddiu $a1, $a0, 0x1\n\t.L80188E2C:\n\tsll $v0, $a1, 4\n\taddu $v0, $v0, $a2\n\taddiu $v1, $zero, 0x3\n\tsw $a1, %gp_rel(D_8019EF8C)($gp)\n\tsh $v1, 0x0($v0)\n\tlwl $v1, 0x3($s0)\n\tlwr $v1, 0x0($s0)\n\tnop\n\tswl $v1, 0xB($v0)\n\tswr $v1, 0x8($v0)\n\tlw $v0, %gp_rel(D_8019EF8C)($gp)\n\tlw $a3, %gp_rel(D_8019EF40)($gp)\n\tnop\n\tbeq $v0, $a3, .L80188E6C\n\taddu $a1, $zero, $zero\n\taddiu $a1, $v0, 0x1\n\t.L80188E6C:\n\taddu $a2, $zero, $zero\n\tsll $v1, $a1, 4\n\tlw $v0, %gp_rel(D_8019ED28)($gp)\n\taddiu $a0, $zero, 0x7\n\tsw $a1, %gp_rel(D_8019EF8C)($gp)\n\taddu $v1, $v1, $v0\n\tbeq $a1, $a3, .L80188E90\n\tsh $a0, 0x0($v1)\n\taddiu $a2, $a1, 0x1\n\t.L80188E90:\n\tsw $a2, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $a2, $zero\n\t.L80188E98:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188DE8, .-func_80188DE8\n"
);
