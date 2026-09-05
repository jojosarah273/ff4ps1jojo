#include "common.h"
__asm__(
  ".globl func_80178C14\n"
  ".type func_80178C14, @function\n"
  "func_80178C14:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019FFE8)\n\taddiu $v0, $v0, %lo(D_8019FFE8)\n\taddiu $v1, $zero, 0x100\n\taddiu $a0, $zero, 0xF0\n\tsh $zero, 0x30($v0)\n\tsh $zero, 0x2E($v0)\n\tsh $v1, 0x32($v0)\n\tsh $a0, 0x50($v0)\n\tsh $a0, 0x34($v0)\n\tlhu $t0, %gp_rel(D_8019EE64)($gp)\n\tlhu $t1, %gp_rel(D_8019EE6C)($gp)\n\tlhu $a0, 0x4($v0)\n\tlhu $a1, 0x6($v0)\n\tlhu $a2, 0x8($v0)\n\tlhu $a3, 0xA($v0)\n\tlhu $t2, %gp_rel(D_8019EE62)($gp)\n\tlhu $t3, %gp_rel(D_8019EE6A)($gp)\n\tlhu $t4, %gp_rel(D_8019EE66)($gp)\n\tlhu $t5, %gp_rel(D_8019EE6E)($gp)\n\taddiu $v1, $zero, 0x1\n\tsb $v1, 0x37($v0)\n\tsb $v1, 0xFB($v0)\n\tsb $v1, 0x23D($v0)\n\tsh $t0, 0x2A($v0)\n\tsh $t1, 0x2C($v0)\n\tsh $a0, 0xF2($v0)\n\tsh $a1, 0xF4($v0)\n\tsh $a2, 0xF6($v0)\n\tsh $a3, 0xF8($v0)\n\tsh $t2, 0xEE($v0)\n\tsh $t3, 0xF0($v0)\n\tsh $a0, 0x234($v0)\n\tsh $a1, 0x236($v0)\n\tsh $a2, 0x238($v0)\n\tsh $a3, 0x23A($v0)\n\tsh $t4, 0x230($v0)\n\tsh $t5, 0x232($v0)\n\tsh $a0, 0x242($v0)\n\tsh $a1, 0x244($v0)\n\tlui $a1, %hi(D_801E01B8)\n\tsb $v1, 0x24B($v0)\n\taddiu $v1, $zero, 0x2A\n\tsh $a2, 0x246($v0)\n\tsh $a3, 0x248($v0)\n\tsw $v1, %lo(D_801E01B8)($a1)\n\taddiu $a1, $a1, %lo(D_801E01B8)\n\taddiu $v1, $zero, 0x12\n\taddiu $a0, $zero, 0x6\n\tlui $a2, %hi(D_801DFDE8)\n\tsw $v1, 0x4($a1)\n\tsw $a0, 0x8($a1)\n\tlhu $a0, %gp_rel(D_8019EE60)($gp)\n\tlhu $a1, %gp_rel(D_8019EE68)($gp)\n\taddiu $v1, $zero, -0x1\n\tsh $v1, %lo(D_801DFDE8)($a2)\n\tsh $zero, %gp_rel(D_8019EE26)($gp)\n\tsh $a0, 0x23E($v0)\n\tjr $ra\n\tsh $a1, 0x240($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178C14, .-func_80178C14\n"
);
