#include "common.h"
__asm__(
  ".globl func_801690AC\n"
  ".type func_801690AC, @function\n"
  "func_801690AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tlui $a0, (0x800E1150 >> 16)\n\tjal func_8017F5C0\n\tori $a0, $a0, (0x800E1150 & 0xFFFF)\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801690AC, .-func_801690AC\n"
);
