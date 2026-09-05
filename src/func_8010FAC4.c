#include "common.h"
__asm__(
  ".globl func_8010FAC4\n"
  ".type func_8010FAC4, @function\n"
  "func_8010FAC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\t.L8010FAD4:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x4\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tjal func_80115684\n\tsh $v1, 0x0($a0)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x92\n\tjal func_8011581C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010FAD4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010FAC4, .-func_8010FAC4\n"
);
