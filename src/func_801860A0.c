#include "common.h"
__asm__(
  ".globl func_801860A0\n"
  ".type func_801860A0, @function\n"
  "func_801860A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlh $v0, %gp_rel(D_8019EF02)($gp)\n\tlhu $v1, %gp_rel(D_8019EF02)($gp)\n\tblez $v0, .L801860BC\n\taddiu $v0, $v1, -0x1\n\tsh $v0, %gp_rel(D_8019EF02)($gp)\n\tjr $ra\n\tnop\n\t.L801860BC:\n\tbeqz $a0, .L801860C8\n\taddiu $v0, $zero, 0xA\n\tsh $v0, %gp_rel(D_8019EF02)($gp)\n\t.L801860C8:\n\taddiu $v1, $zero, 0x1\n\tbne $a0, $v1, .L801860E8\n\taddiu $v0, $zero, 0x2\n\tlhu $v0, %gp_rel(D_8019EEF8)($gp)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsh $v0, %gp_rel(D_8019EEF8)($gp)\n\taddiu $v0, $zero, 0x2\n\t.L801860E8:\n\tbne $a0, $v0, .L80186104\n\taddiu $v0, $zero, 0x3\n\tlhu $v0, %gp_rel(D_8019EEF8)($gp)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsh $v0, %gp_rel(D_8019EEF8)($gp)\n\taddiu $v0, $zero, 0x3\n\t.L80186104:\n\tbne $a0, $v0, .L80186118\n\tnop\n\tlh $v0, %gp_rel(D_8019EEF8)($gp)\n\tsw $v1, %gp_rel(D_8019EF24)($gp)\n\tsw $v0, %gp_rel(D_8019EF28)($gp)\n\t.L80186118:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801860A0, .-func_801860A0\n"
);
