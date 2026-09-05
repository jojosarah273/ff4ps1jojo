#include "common.h"
__asm__(
  ".globl func_80187D1C\n"
  ".type func_80187D1C, @function\n"
  "func_80187D1C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlh $v0, %gp_rel(D_8019ED88)($gp)\n\taddiu $sp, $sp, -0x18\n\tbnez $v0, .L80187D50\n\tsw $ra, 0x10($sp)\n\tlui $v0, (0x800D2200 >> 16)\n\tori $v0, $v0, (0x800D2200 & 0xFFFF)\n\taddiu $v1, $zero, 0x1FFF\n\t.L80187D38:\n\tsb $zero, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L80187D38\n\taddiu $v0, $v0, 0x1\n\tj .L80187D68\n\tnop\n\t.L80187D50:\n\tlh $v0, %gp_rel(D_8019EDAA)($gp)\n\tnop\n\tbnez $v0, .L80187D68\n\tnop\n\tjal func_80187CD0\n\taddiu $a0, $zero, 0x1\n\t.L80187D68:\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tsh $v0, %gp_rel(D_8019EDAA)($gp)\n\tsh $zero, %gp_rel(D_8019ED8C)($gp)\n\tsh $zero, %gp_rel(D_8019EDA8)($gp)\n\tsh $zero, %gp_rel(D_8019EDB8)($gp)\n\tsh $zero, %gp_rel(D_8019EDC2)($gp)\n\tsh $zero, %gp_rel(D_8019ED8A)($gp)\n\tsh $zero, %gp_rel(D_8019EDC8)($gp)\n\tsh $zero, %gp_rel(D_8019ED98)($gp)\n\tsh $zero, %gp_rel(D_8019EDC4)($gp)\n\tsh $zero, %gp_rel(D_8019ED9C)($gp)\n\tsh $zero, %gp_rel(D_8019EF0C)($gp)\n\tsh $zero, %gp_rel(D_8019EEEC)($gp)\n\tsh $zero, %gp_rel(D_8019ED90)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187D1C, .-func_80187D1C\n"
);
