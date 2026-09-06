#include "common.h"
__asm__(
  ".globl func_80187404\n"
  ".type func_80187404, @function\n"
  "func_80187404:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlh $v0, %gp_rel(D_8019EF0A)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tsh $a0, %gp_rel(D_8019EF30)($gp)\n\tbeqz $v0, .L80187440\n\tnop\n\tbnez $a0, .L80187434\n\taddiu $v0, $zero, 0x4F\n\taddiu $v0, $zero, 0x9F\n\tsh $v0, %gp_rel(D_8019EF16)($gp)\n\tj .L8018745C\n\tnop\n\t.L80187434:\n\tsh $v0, %gp_rel(D_8019EF16)($gp)\n\tj .L8018745C\n\tnop\n\t.L80187440:\n\tbnez $a0, .L8018744C\n\taddiu $v0, $zero, 0x17FF\n\taddiu $v0, $zero, 0x2FFF\n\t.L8018744C:\n\tsh $v0, %gp_rel(D_8019EEB8)($gp)\n\tlhu $a0, %gp_rel(D_8019EEB8)($gp)\n\tjal func_8018767C\n\tnop\n\t.L8018745C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187404, .-func_80187404\n"
);
