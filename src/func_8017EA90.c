#include "common.h"
__asm__(
  ".globl func_8017EA90\n"
  ".type func_8017EA90, @function\n"
  "func_8017EA90:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a0, $a0, 0xFF\n\tandi $v0, $a0, 0x80\n\tbeqz $v0, .L8017EAA4\n\tandi $v1, $a0, 0x1F\n\tsh $v1, %gp_rel(D_8019EE7A)($gp)\n\t.L8017EAA4:\n\tandi $v0, $a0, 0x40\n\tbeqz $v0, .L8017EAB4\n\tandi $v0, $a0, 0x20\n\tsh $v1, %gp_rel(D_8019EE7C)($gp)\n\t.L8017EAB4:\n\tbeqz $v0, .L8017EAC0\n\tnop\n\tsh $v1, %gp_rel(D_8019EE7E)($gp)\n\t.L8017EAC0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017EA90, .-func_8017EA90\n"
);
