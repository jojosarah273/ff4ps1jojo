#include "common.h"
__asm__(
  ".globl func_801798F0\n"
  ".type func_801798F0, @function\n"
  "func_801798F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80187C54\n\tnop\n\tjal func_80187B00\n\tnop\n\tlui $a0, %hi(D_8019EF08)\n\tlh $a0, %lo(D_8019EF08)($a0)\n\tjal func_80189A90\n\tnop\n\tjal func_8018AD48\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801798F0, .-func_801798F0\n"
);
