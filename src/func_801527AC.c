#include "common.h"
__asm__(
  ".globl func_801527AC\n"
  ".type func_801527AC, @function\n"
  "func_801527AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED68)\n\tlw $v1, %lo(D_8019ED68)($v1)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x20\n\tbeqz $v0, .L801527E8\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tj .L801527F8\n\tnop\n\t.L801527E8:\n\tjal func_800F516C\n\tnop\n\tjal func_800F5050\n\tnop\n\t.L801527F8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801527AC, .-func_801527AC\n"
);
