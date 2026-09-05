#include "common.h"
__asm__(
  ".globl func_80178890\n"
  ".type func_80178890, @function\n"
  "func_80178890:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $t0, $zero, 0x24\n\taddiu $a3, $zero, 0x1\n\taddiu $a2, $zero, 0x100\n\tlui $a0, %hi(D_8019FFE8)\n\taddiu $v0, $a0, %lo(D_8019FFE8)\n\taddiu $a1, $zero, 0xF0\n\taddiu $v1, $zero, 0x9F\n\t.L801788AC:\n\tsh $zero, 0x6($v0)\n\tsh $zero, 0x4($v0)\n\tsh $zero, 0x2($v0)\n\tsh $zero, 0x0($v0)\n\tsb $t0, 0xC($v0)\n\tsb $a3, 0xD($v0)\n\tsh $a2, 0x8($v0)\n\tsh $a1, 0xA($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L801788AC\n\taddiu $v0, $v0, 0xE\n\taddiu $a0, $a0, %lo(D_8019FFE8)\n\taddiu $v0, $zero, 0x28\n\taddiu $v1, $zero, 0x100\n\tsb $v0, 0x28($a0)\n\taddiu $v0, $zero, 0x50\n\tsb $zero, 0x1A($a0)\n\tsb $zero, 0xC($a0)\n\tsh $v1, 0x12($a0)\n\tsh $v0, 0xC0($a0)\n\tsh $v0, 0xCE($a0)\n\tsw $zero, %gp_rel(D_8019EE28)($gp)\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178890, .-func_80178890\n"
);
