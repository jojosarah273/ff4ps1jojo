#include "common.h"
__asm__(
  ".globl func_80188BA8\n"
  ".type func_80188BA8, @function\n"
  "func_80188BA8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a2, $zero\n\tsw $ra, 0x1C($sp)\n\tjal func_80188AE8\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80188C40\n\taddiu $v0, $zero, -0x1\n\taddu $a3, $zero, $zero\n\taddiu $v1, $zero, 0x101\n\tlw $a0, %gp_rel(D_8019EF8C)($gp)\n\tlw $a1, %gp_rel(D_8019ED28)($gp)\n\tlw $t0, %gp_rel(D_8019EF40)($gp)\n\tsll $v0, $a0, 4\n\taddu $v0, $v0, $a1\n\tsh $v1, 0x0($v0)\n\tbeq $a0, $t0, .L80188C04\n\tsw $s0, 0xC($v0)\n\taddiu $a3, $a0, 0x1\n\t.L80188C04:\n\taddu $a2, $zero, $zero\n\tsll $v0, $a3, 4\n\taddu $v0, $v0, $a1\n\tlw $v1, %gp_rel(D_8019EF88)($gp)\n\taddiu $a0, $zero, 0x102\n\tsw $a3, %gp_rel(D_8019EF8C)($gp)\n\tsh $a0, 0x0($v0)\n\tsll $v1, $v1, 4\n\taddu $v1, $v1, $a1\n\tsw $s1, 0x4($v1)\n\tbeq $a3, $t0, .L80188C38\n\tsw $s2, 0xC($v0)\n\taddiu $a2, $a3, 0x1\n\t.L80188C38:\n\tsw $a2, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $a2, $zero\n\t.L80188C40:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188BA8, .-func_80188BA8\n"
);
