#include "common.h"
__asm__(
  ".globl func_801026EC\n"
  ".type func_801026EC, @function\n"
  "func_801026EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\taddu $a0, $v0, $zero\n\tlbu $v0, 0x5A($a0)\n\tnop\n\tandi $v0, $v0, 0xF\n\tbnez $v0, .L80102760\n\tnop\n\tlbu $v0, 0x5C($a0)\n\tnop\n\tandi $v0, $v0, 0xF\n\tbnez $v0, .L80102760\n\tnop\n\tlbu $v0, 0x3($a0)\n\tnop\n\tandi $v0, $v0, 0x80\n\tbnez $v0, .L80102760\n\taddiu $v0, $zero, 0x2\n\tlbu $v1, %gp_rel(D_8019ED30)($gp)\n\tnop\n\tbne $v1, $v0, .L80102760\n\tnop\n\tsb $zero, %gp_rel(D_8019ED30)($gp)\n\tsb $zero, 0xAB($a0)\n\tlbu $v0, %gp_rel(D_8019ED31)($gp)\n\tnop\n\tsb $v0, 0xAC($a0)\n\t.L80102760:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801026EC, .-func_801026EC\n"
);
