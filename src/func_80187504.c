#include "common.h"
__asm__(
  ".globl func_80187504\n"
  ".type func_80187504, @function\n"
  "func_80187504:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tbnez $a1, .L80187538\n\tsw $ra, 0x10($sp)\n\tsll $v0, $a0, 1\n\taddiu $v1, $gp, %gp_rel(D_8019ED1C)\n\taddu $v0, $v0, $v1\n\tlh $v0, 0x0($v0)\n\tnop\n\tbgez $v0, .L80187530\n\taddiu $a1, $zero, 0x2FFF\n\taddiu $v0, $v0, 0x3\n\t.L80187530:\n\tj .L80187560\n\tsra $a0, $v0, 2\n\t.L80187538:\n\tsll $v1, $a0, 1\n\taddiu $a0, $gp, %gp_rel(D_8019ED1C)\n\taddu $v1, $v1, $a0\n\tlhu $v0, 0x0($v1)\n\taddiu $a1, $zero, 0x17FF\n\tsll $v0, $v0, 16\n\tsra $v1, $v0, 16\n\tsrl $v0, $v0, 31\n\taddu $v1, $v1, $v0\n\tsra $a0, $v1, 1\n\t.L80187560:\n\tlh $v0, %gp_rel(D_8019EEB8)($gp)\n\tlhu $v1, %gp_rel(D_8019EEB8)($gp)\n\tbltz $v0, .L8018759C\n\taddu $v0, $a0, $v1\n\tsh $v0, %gp_rel(D_8019EEB8)($gp)\n\tsll $v0, $v0, 16\n\tsra $v0, $v0, 16\n\tslt $v0, $v0, $a1\n\tbnez $v0, .L80187590\n\tnop\n\tsw $zero, %gp_rel(D_8019EF24)($gp)\n\tsh $a1, %gp_rel(D_8019EEB8)($gp)\n\t.L80187590:\n\tlhu $a0, %gp_rel(D_8019EEB8)($gp)\n\tjal func_8018767C\n\tnop\n\t.L8018759C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187504, .-func_80187504\n"
);
