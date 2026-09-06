#include "common.h"
__asm__(
  ".globl func_80145AA0\n"
  ".type func_80145AA0, @function\n"
  "func_80145AA0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801CFD68)\n\taddiu $v0, $v0, %lo(D_801CFD68)\n\tori $v1, $zero, 0x8000\n\taddu $v0, $v0, $v1\n\taddiu $a0, $zero, 0x20F7\n\taddiu $v1, $zero, 0x20F8\n\taddiu $a1, $zero, 0x20FA\n\tsh $a0, 0x52A4($v0)\n\taddiu $a0, $zero, 0x20FC\n\tsh $v1, 0x52A6($v0)\n\tsh $v1, 0x52A8($v0)\n\tsh $v1, 0x52AA($v0)\n\tsh $v1, 0x52AC($v0)\n\taddiu $v1, $zero, 0x20FD\n\tsh $a1, 0x52E4($v0)\n\tsh $a1, 0x5324($v0)\n\tsh $a0, 0x5364($v0)\n\tsh $v1, 0x5366($v0)\n\tsh $v1, 0x5368($v0)\n\tsh $v1, 0x536A($v0)\n\tjr $ra\n\tsh $v1, 0x536C($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80145AA0, .-func_80145AA0\n"
);
