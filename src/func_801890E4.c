#include "common.h"
__asm__(
  ".globl func_801890E4\n"
  ".type func_801890E4, @function\n"
  "func_801890E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a0, $zero\n\taddiu $a0, $zero, 0x4\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x1C($sp)\n\tjal func_80188AE8\n\taddu $s0, $a2, $zero\n\tbnez $v0, .L80189178\n\taddiu $v0, $zero, -0x1\n\tjal func_80188D28\n\taddu $a0, $s0, $zero\n\taddiu $v0, $zero, 0x2\n\tlw $v1, %gp_rel(D_8019EF8C)($gp)\n\tlw $a0, %gp_rel(D_8019ED28)($gp)\n\tsll $v1, $v1, 4\n\taddu $v1, $v1, $a0\n\tsh $v0, 0x0($v1)\n\tsw $s1, 0x4($v1)\n\tlwl $v0, 0x3($s0)\n\tlwr $v0, 0x0($s0)\n\tnop\n\tswl $v0, 0xB($v1)\n\tswr $v0, 0x8($v1)\n\taddu $a2, $zero, $zero\n\tlw $a1, %gp_rel(D_8019EF8C)($gp)\n\tlw $v1, %gp_rel(D_8019ED28)($gp)\n\tlw $a0, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $a1, 4\n\taddu $v0, $v0, $v1\n\tbeq $a1, $a0, .L80189170\n\tsw $s2, 0xC($v0)\n\taddiu $a2, $a1, 0x1\n\t.L80189170:\n\tsw $a2, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $a2, $zero\n\t.L80189178:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801890E4, .-func_801890E4\n"
);
