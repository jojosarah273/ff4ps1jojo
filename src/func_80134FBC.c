#include "common.h"
__asm__(
  ".globl func_80134FBC\n"
  ".type func_80134FBC, @function\n"
  "func_80134FBC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80134E74\n\tnop\n\tlui $v0, %hi(D_801991FE)\n\tlhu $a0, %lo(D_801991FE)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80134FBC, .-func_80134FBC\n"
);
