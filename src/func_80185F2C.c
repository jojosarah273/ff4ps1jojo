#include "common.h"
__asm__(
  ".globl func_80185F2C\n"
  ".type func_80185F2C, @function\n"
  "func_80185F2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80189820\n\tlui $a0, (0x80010000 >> 16)\n\tlui $a0, (0x80028000 >> 16)\n\tori $a0, $a0, (0x80028000 & 0xFFFF)\n\taddiu $a1, $zero, 0x1020\n\tsh $v0, %gp_rel(D_8019EF08)($gp)\n\tsll $v0, $v0, 16\n\tjal func_80189884\n\tsra $a2, $v0, 16\n\tsh $v0, %gp_rel(D_8019EF08)($gp)\n\tjal func_8018CAD8\n\taddiu $a0, $zero, 0x1\n\tjal func_8018A140\n\tnop\n\taddiu $a0, $zero, 0x7F\n\tjal func_80189AE8\n\taddiu $a1, $zero, 0x7F\n\taddu $a0, $zero, $zero\n\tlui $a1, (0xFFFFFF >> 16)\n\tsh $zero, %gp_rel(D_8019EEDE)($gp)\n\tsh $zero, %gp_rel(D_8019EF0C)($gp)\n\tjal func_8018C608\n\tori $a1, $a1, (0xFFFFFF & 0xFFFF)\n\tlw $ra, 0x10($sp)\n\tsh $zero, %gp_rel(D_8019EF1A)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80185F2C, .-func_80185F2C\n"
);
