#include "common.h"
__asm__(
  ".globl func_8013C50C\n"
  ".type func_8013C50C, @function\n"
  "func_8013C50C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801210AC\n\tnop\n\tlui $v0, %hi(D_80199268)\n\tlhu $a0, %lo(D_80199268)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_801263F0\n\tnop\n\tjal func_8013C094\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013C50C, .-func_8013C50C\n"
);
