#include "common.h"
__asm__(
  ".globl func_800F3D48\n"
  ".type func_800F3D48, @function\n"
  "func_800F3D48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, 0x1F80\n\tori $v0, $v0, 0x3C0\n\tlbu $v1, 0x9($v0)\n\tlbu $a0, 0x8($v0)\n\tsb $v1, 0x8($v0)\n\tjr $ra\n\tsb $a0, 0x9($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3D48, .-func_800F3D48\n"
);
