#include "common.h"
__asm__(
  ".globl func_801794A8\n"
  ".type func_801794A8, @function\n"
  "func_801794A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $v0, $zero, 0x1\n\tsw $ra, 0x10($sp)\n\tsh $v0, %gp_rel(D_8019EE54)($gp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\tjal func_801792D0\n\tnop\n\tjal func_80093110\n\tnop\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\tjal func_801792D0\n\tnop\n\tlw $ra, 0x10($sp)\n\tsh $zero, %gp_rel(D_8019EE54)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801794A8, .-func_801794A8\n"
);
