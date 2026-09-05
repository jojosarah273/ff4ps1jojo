#include "common.h"
__asm__(
  ".globl func_8018960C\n"
  ".type func_8018960C, @function\n"
  "func_8018960C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tandi $a0, $a0, 0xFF\n\taddiu $v0, $zero, 0x1\n\tbne $a0, $v0, .L80189660\n\tsw $ra, 0x10($sp)\n\tlw $v0, %gp_rel(D_8019EF48)($gp)\n\tnop\n\tblez $v0, .L80189668\n\taddiu $a1, $zero, 0x200\n\tlw $v0, %gp_rel(D_8019EF48)($gp)\n\tlw $a0, %gp_rel(D_8019EF4C)($gp)\n\taddiu $v0, $v0, -0x1\n\tsw $v0, %gp_rel(D_8019EF48)($gp)\n\tjal func_80191C58\n\tnop\n\tlw $v1, %gp_rel(D_8019EF4C)($gp)\n\tnop\n\taddiu $v1, $v1, 0x800\n\tsw $v1, %gp_rel(D_8019EF4C)($gp)\n\tj .L80189668\n\tnop\n\t.L80189660:\n\taddiu $v0, $zero, -0x1\n\tsw $v0, %gp_rel(D_8019EF48)($gp)\n\t.L80189668:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018960C, .-func_8018960C\n"
);
