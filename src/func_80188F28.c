#include "common.h"
__asm__(
  ".globl func_80188F28\n"
  ".type func_80188F28, @function\n"
  "func_80188F28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80188AE8\n\taddiu $a0, $zero, 0x3\n\tbnez $v0, .L80188FC0\n\taddiu $v0, $zero, -0x1\n\tlbu $v0, %gp_rel(D_8019EF44)($gp)\n\tlw $a1, %gp_rel(D_8019EF8C)($gp)\n\tlw $t0, %gp_rel(D_8019ED28)($gp)\n\tlw $a3, %gp_rel(D_8019EF40)($gp)\n\tandi $v0, $v0, 0xBE\n\tsll $v1, $a1, 4\n\taddu $v1, $v1, $t0\n\tsb $v0, %gp_rel(D_8019EF44)($gp)\n\taddiu $v0, $zero, 0x4\n\tsh $v0, 0x0($v1)\n\tlbu $a0, %gp_rel(D_8019EF44)($gp)\n\taddu $a2, $zero, $zero\n\tbeq $a1, $a3, .L80188F7C\n\tsw $a0, 0x4($v1)\n\taddiu $a2, $a1, 0x1\n\t.L80188F7C:\n\taddu $a0, $zero, $zero\n\tsll $v0, $a2, 4\n\taddu $v0, $v0, $t0\n\tsw $a2, %gp_rel(D_8019EF8C)($gp)\n\tbeq $a2, $a3, .L80188F98\n\tsh $zero, 0x0($v0)\n\taddiu $a0, $a2, 0x1\n\t.L80188F98:\n\taddu $a1, $zero, $zero\n\tsll $v0, $a0, 4\n\taddu $v0, $v0, $t0\n\taddiu $v1, $zero, 0xA\n\tsw $a0, %gp_rel(D_8019EF8C)($gp)\n\tbeq $a0, $a3, .L80188FB8\n\tsh $v1, 0x0($v0)\n\taddiu $a1, $a0, 0x1\n\t.L80188FB8:\n\tsw $a1, %gp_rel(D_8019EF8C)($gp)\n\taddu $v0, $a1, $zero\n\t.L80188FC0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188F28, .-func_80188F28\n"
);
