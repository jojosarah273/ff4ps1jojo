#include "common.h"
__asm__(
  ".globl func_801360AC\n"
  ".type func_801360AC, @function\n"
  "func_801360AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlh $v1, %gp_rel(D_8019EDC2)($gp)\n\taddiu $v0, $zero, 0x8\n\tbne $v1, $v0, .L801360DC\n\tsw $ra, 0x10($sp)\n\tjal func_80135F7C\n\tnop\n\taddiu $v0, $zero, -0x1\n\tsw $v0, %gp_rel(D_8019EDD4)($gp)\n\tsw $v0, %gp_rel(D_8019EDD0)($gp)\n\tsw $zero, %gp_rel(D_8019EDD8)($gp)\n\tsw $zero, %gp_rel(D_8019EDDC)($gp)\n\t.L801360DC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801360AC, .-func_801360AC\n"
);
