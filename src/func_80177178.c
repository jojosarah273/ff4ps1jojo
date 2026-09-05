#include "common.h"
__asm__(
  ".globl func_80177178\n"
  ".type func_80177178, @function\n"
  "func_80177178:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801773D4\n\tnop\n\tlui $a0, (0x1EFD66 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x1EFD66 & 0xFFFF)\n\tjal func_8012224C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80177178, .-func_80177178\n"
);
