#include "common.h"
__asm__(
  ".globl func_80187AA0\n"
  ".type func_80187AA0, @function\n"
  "func_80187AA0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_801F6230)\n\tlui $v0, %hi(D_8019B074)\n\taddiu $a3, $v0, %lo(D_8019B074)\n\taddiu $a2, $v1, %lo(D_801F6230)\n\tlwl $a0, 0x3($a3)\n\tlwr $a0, 0x0($a3)\n\tnop\n\tswl $a0, 0x3($a2)\n\tswr $a0, 0x0($a2)\n\taddiu $v1, $v1, %lo(D_801F6230)\n\taddiu $v0, $v0, %lo(D_8019B074)\n\tlwl $a0, 0x13($v0)\n\tlwr $a0, 0x10($v0)\n\tnop\n\tswl $a0, 0x1B($v1)\n\tswr $a0, 0x18($v1)\n\tsh $zero, %gp_rel(D_8019EF0A)($gp)\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187AA0, .-func_80187AA0\n"
);
