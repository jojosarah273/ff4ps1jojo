#include "common.h"
__asm__(
  ".globl func_80138620\n"
  ".type func_80138620, @function\n"
  "func_80138620:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801CFD68)\n\taddiu $v0, $v0, %lo(D_801CFD68)\n\tori $v1, $zero, 0x8000\n\taddu $v0, $v0, $v1\n\taddiu $a0, $zero, 0x2061\n\taddiu $v1, $zero, 0x205C\n\tsh $a0, 0x5330($v0)\n\taddiu $a0, $zero, 0x2064\n\tsh $v1, 0x5332($v0)\n\taddiu $v1, $zero, 0x2067\n\tsh $a0, 0x5334($v0)\n\taddiu $a0, $zero, 0x2060\n\tsh $v1, 0x5336($v0)\n\taddiu $v1, $zero, 0x205F\n\tsh $a0, 0x5338($v0)\n\tjr $ra\n\tsh $v1, 0x533A($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80138620, .-func_80138620\n"
);
