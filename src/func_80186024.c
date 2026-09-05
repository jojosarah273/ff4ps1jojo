#include "common.h"
__asm__(
  ".globl func_80186024\n"
  ".type func_80186024, @function\n"
  "func_80186024:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlh $v0, %gp_rel(D_8019EF02)($gp)\n\tlhu $v1, %gp_rel(D_8019EF02)($gp)\n\tblez $v0, .L80186040\n\taddiu $v0, $v1, -0x1\n\tsh $v0, %gp_rel(D_8019EF02)($gp)\n\tjr $ra\n\tnop\n\t.L80186040:\n\tbeqz $a0, .L8018604C\n\taddiu $v0, $zero, 0xA\n\tsh $v0, %gp_rel(D_8019EF02)($gp)\n\t.L8018604C:\n\taddiu $v0, $zero, 0x1\n\tbne $a0, $v0, .L80186068\n\taddiu $v1, $zero, 0x2\n\tlhu $v0, %gp_rel(D_8019EEFE)($gp)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsh $v0, %gp_rel(D_8019EEFE)($gp)\n\t.L80186068:\n\tbne $a0, $v1, .L80186084\n\taddiu $v0, $zero, 0x3\n\tlhu $v0, %gp_rel(D_8019EEFE)($gp)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsh $v0, %gp_rel(D_8019EEFE)($gp)\n\taddiu $v0, $zero, 0x3\n\t.L80186084:\n\tbne $a0, $v0, .L80186098\n\tnop\n\tlhu $v0, %gp_rel(D_8019EEFE)($gp)\n\tsw $v1, %gp_rel(D_8019EF24)($gp)\n\tsw $v0, %gp_rel(D_8019EF28)($gp)\n\t.L80186098:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80186024, .-func_80186024\n"
);
