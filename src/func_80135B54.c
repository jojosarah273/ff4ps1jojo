#include "common.h"
__asm__(
  ".globl func_80135B54\n"
  ".type func_80135B54, @function\n"
  "func_80135B54:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, D_8019EE42\n\tlbu $v1, D_8019EE42($v1)\n\taddiu $v0, $0, 0x2\n\tlui $at, D_8019EE56\n\tsh $0, D_8019EE56($at)\n\tbeq $v1, $v0, .L80135BAC\n\tslti $v0, $v1, 0x3\n\tbeqz $v0, .L80135B88\n\taddiu $v0, $0, 0x1\n\tbeq $v1, $v0, .L80135B9C\n\tnop\n\tjr $ra\n\tnop\n\t.L80135B88:\n\taddiu $v0, $0, 0x3\n\tbeq $v1, $v0, .L80135BBC\n\tlui $v0, D_8019A068\n\tjr $ra\n\tnop\n\t.L80135B9C:\n\tlui $v1, D_800D1A37\n\tlbu $v1, D_800D1A37($v1)\n\tj .L80135BC4\n\tlui $v0, D_8019A068\n\t.L80135BAC:\n\tlui $v1, D_800D1A38\n\tlbu $v1, D_800D1A38($v1)\n\tj .L80135BC4\n\tlui $v0, D_8019A068\n\t.L80135BBC:\n\tlui $v1, D_800D1A39\n\tlbu $v1, D_800D1A39($v1)\n\t.L80135BC4:\n\taddiu $v0, $v0, D_8019A068\n\tsll $v1, $v1, 1\n\taddu $v1, $v1, $v0\n\tlhu $a0, 0x0($v1)\n\tlui $at, D_8019EE56\n\tsh $a0, D_8019EE56($at)\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80135B54, .-func_80135B54\n"
);
