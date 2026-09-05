#include "common.h"
__asm__(
  ".globl func_8016BD2C\n"
  ".type func_8016BD2C, @function\n"
  "func_8016BD2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tlui $a0, (0x800D4503 >> 16)\n\tjal func_8017F5C0\n\tori $a0, $a0, (0x800D4503 & 0xFFFF)\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BD2C, .-func_8016BD2C\n"
);
