#include "common.h"
__asm__(
  ".globl func_801360EC\n"
  ".type func_801360EC, @function\n"
  "func_801360EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlh $v1, %gp_rel(D_8019EDC2)($gp)\n\taddiu $v0, $zero, 0x8\n\tbne $v1, $v0, .L80136134\n\tsw $ra, 0x10($sp)\n\tjal func_80135BE4\n\tnop\n\tlh $v0, %gp_rel(D_8019ED8E)($gp)\n\taddiu $v1, $gp, %gp_rel(D_8019EDD0)\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $v1\n\tlw $a0, 0x0($v0)\n\tnop\n\tblez $a0, .L80136134\n\taddiu $v0, $zero, 0x42\n\tsh $v0, %gp_rel(D_8019EDC4)($gp)\n\tj .L80136138\n\taddiu $v0, $zero, -0x1\n\t.L80136134:\n\taddu $v0, $zero, $zero\n\t.L80136138:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801360EC, .-func_801360EC\n"
);
