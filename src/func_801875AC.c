#include "common.h"
__asm__(
  ".globl func_801875AC\n"
  ".type func_801875AC, @function\n"
  "func_801875AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $v0, %hi(D_800D16B6)\n\tlbu $v0, %lo(D_800D16B6)($v0)\n\tnop\n\tsh $v0, %gp_rel(D_8019EF36)($gp)\n\tbnez $v0, .L801875E8\n\taddiu $a0, $zero, 0x5F\n\taddiu $a0, $zero, 0x7F\n\taddu $a1, $zero, $zero\n\taddiu $a2, $zero, 0x7F\n\tjal func_80188EF8\n\taddu $a3, $zero, $zero\n\tj .L801875F8\n\tnop\n\t.L801875E8:\n\taddiu $a1, $zero, 0x5F\n\taddiu $a2, $zero, 0x5F\n\tjal func_80188EF8\n\taddiu $a3, $zero, 0x5F\n\t.L801875F8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801875AC, .-func_801875AC\n"
);
