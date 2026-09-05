#include "common.h"
__asm__(
  ".globl func_8018F2DC\n"
  ".type func_8018F2DC, @function\n"
  "func_8018F2DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlhu $t7, 0xA($v1)\n\tlui $t0, (0x0 >> 16)\n\tor $t8, $t7, $v0\n\tori $t9, $t8, 0x12\n\tsh $t9, 0xA($v1)\n\taddiu $t0, $zero, 0x28\n\t.L8018F2F4:\n\taddiu $t0, $t0, -0x1\n\tbnez $t0, .L8018F2F4\n\tnop\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F2DC, .-func_8018F2DC\n"
);
