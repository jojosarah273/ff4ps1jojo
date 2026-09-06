#include "common.h"
__asm__(
  ".globl func_8018746C\n"
  ".type func_8018746C, @function\n"
  "func_8018746C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tbnez $a1, .L80187490\n\tsw $ra, 0x10($sp)\n\tsll $v0, $a0, 1\n\taddiu $v1, $gp, %gp_rel(D_8019ED1C)\n\taddu $v0, $v0, $v1\n\tlh $v1, 0x0($v0)\n\tj .L801874B8\n\taddu $a2, $zero, $zero\n\t.L80187490:\n\tsll $v1, $a0, 1\n\taddiu $a0, $gp, %gp_rel(D_8019ED1C)\n\taddu $v1, $v1, $a0\n\tlhu $v0, 0x0($v1)\n\taddiu $a2, $zero, 0x2000\n\tsll $v0, $v0, 16\n\tsra $v1, $v0, 16\n\tsrl $v0, $v0, 31\n\taddu $v1, $v1, $v0\n\tsra $v1, $v1, 1\n\t.L801874B8:\n\tlh $v0, %gp_rel(D_8019EEB8)($gp)\n\tlhu $a1, %gp_rel(D_8019EEB8)($gp)\n\tbltz $v0, .L801874F4\n\tsubu $v0, $a1, $v1\n\tsh $v0, %gp_rel(D_8019EEB8)($gp)\n\tsll $v0, $v0, 16\n\tsra $v0, $v0, 16\n\tslt $v0, $a2, $v0\n\tbnez $v0, .L801874E8\n\tnop\n\tsw $zero, %gp_rel(D_8019EF24)($gp)\n\tsh $a2, %gp_rel(D_8019EEB8)($gp)\n\t.L801874E8:\n\tlhu $a0, %gp_rel(D_8019EEB8)($gp)\n\tjal func_8018767C\n\tnop\n\t.L801874F4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018746C, .-func_8018746C\n"
);
