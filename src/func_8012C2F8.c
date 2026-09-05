#include "common.h"
__asm__(
  ".globl func_8012C2F8\n"
  ".type func_8012C2F8, @function\n"
  "func_8012C2F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1A82\n\tjal func_800F939C\n\tnop\n\tjal func_801210AC\n\tnop\n\tlui $v0, %hi(D_801991AC)\n\tlhu $a0, %lo(D_801991AC)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_801263F0\n\tnop\n\tjal func_8012C250\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C2F8, .-func_8012C2F8\n"
);
