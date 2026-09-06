#include "common.h"
__asm__(
  ".globl func_80189750\n"
  ".type func_80189750, @function\n"
  "func_80189750:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a0, %gp_rel(D_8019EF50)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80191838\n\tnop\n\tlw $a0, %gp_rel(D_8019EF58)($gp)\n\tjal func_801928A8\n\tnop\n\tlw $a0, %gp_rel(D_8019EF54)($gp)\n\tjal func_80191858\n\tnop\n\tlw $ra, 0x10($sp)\n\taddu $v0, $zero, $zero\n\tsw $zero, %gp_rel(D_8019ED28)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189750, .-func_80189750\n"
);
