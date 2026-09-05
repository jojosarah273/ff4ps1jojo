#include "common.h"
__asm__(
  ".globl func_80188A0C\n"
  ".type func_80188A0C, @function\n"
  "func_80188A0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED28)($gp)\n\taddiu $sp, $sp, -0x18\n\tbeqz $v0, .L80188A4C\n\tsw $ra, 0x10($sp)\n\tlw $a0, %gp_rel(D_8019EF50)($gp)\n\tjal func_80191838\n\tnop\n\tlw $a0, %gp_rel(D_8019EF58)($gp)\n\tjal func_801928A8\n\tnop\n\tlw $a0, %gp_rel(D_8019EF54)($gp)\n\tjal func_80191858\n\tnop\n\tsw $zero, %gp_rel(D_8019ED28)($gp)\n\tj .L80188A50\n\taddu $v0, $zero, $zero\n\t.L80188A4C:\n\taddiu $v0, $zero, -0x1\n\t.L80188A50:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188A0C, .-func_80188A0C\n"
);
