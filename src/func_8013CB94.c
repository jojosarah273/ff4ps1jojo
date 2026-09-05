#include "common.h"
__asm__(
  ".globl func_8013CB94\n"
  ".type func_8013CB94, @function\n"
  "func_8013CB94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_80199190)\n\taddiu $s0, $s0, %lo(D_80199190)\n\tsw $ra, 0x14($sp)\n\tlhu $a0, 0xD0($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0xD4($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FB74\n\tnop\n\tjal func_801263F0\n\tnop\n\tjal func_800F5480\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013CB94, .-func_8013CB94\n"
);
