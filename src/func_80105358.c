#include "common.h"
__asm__(
  ".globl func_80105358\n"
  ".type func_80105358, @function\n"
  "func_80105358:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x20\n\tsw $ra, 0x14($sp)\n\tjal func_800F9644\n\tsw $s0, 0x10($sp)\n\tlui $a0, (0x7F48DE >> 16)\n\tjal func_800F65F0\n\tori $a0, $a0, (0x7F48DE & 0xFFFF)\n\tlw $v0, %gp_rel(D_8019ED44)($gp)\n\tlui $a0, (0x7F49DE >> 16)\n\tlhu $s0, 0x0($v0)\n\tori $a0, $a0, (0x7F49DE & 0xFFFF)\n\tandi $s0, $s0, 0x2000\n\tori $s0, $s0, 0x6F\n\tjal func_800F65F0\n\tandi $s0, $s0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tlui $a0, (0x7F4ADE >> 16)\n\tlhu $v0, 0x0($v1)\n\tori $a0, $a0, (0x7F4ADE & 0xFFFF)\n\tandi $v0, $v0, 0x2000\n\tsrl $v0, $v0, 1\n\tor $s0, $s0, $v0\n\tjal func_800F65F0\n\tandi $s0, $s0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tlui $a0, (0x7F4BDE >> 16)\n\tlhu $v0, 0x0($v1)\n\tori $a0, $a0, (0x7F4BDE & 0xFFFF)\n\tandi $v0, $v0, 0x2000\n\tsrl $v0, $v0, 2\n\tor $s0, $s0, $v0\n\tjal func_800F65F0\n\tandi $s0, $s0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x700\n\tandi $v0, $v0, 0x2000\n\tsrl $v0, $v0, 3\n\tor $s0, $s0, $v0\n\tjal func_800F81B0\n\tsh $s0, 0x0($v1)\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x702\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x704\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x706\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80105358, .-func_80105358\n"
);
