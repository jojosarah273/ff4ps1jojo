#include "common.h"
__asm__(
  ".globl func_80137B18\n"
  ".type func_80137B18, @function\n"
  "func_80137B18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80123FB4\n\tnop\n\tjal func_801241B8\n\tnop\n\tjal func_801266F0\n\tnop\n\tjal func_8011F6A4\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_801387D8\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x17FC\n\tjal func_80138730\n\tnop\n\tjal func_80127408\n\tnop\n\tjal func_801210AC\n\tnop\n\tlui $v0, %hi(D_80199230)\n\tlhu $a0, %lo(D_80199230)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_80126330\n\tnop\n\tjal func_801241B8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B9A\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80137B18, .-func_80137B18\n"
);
