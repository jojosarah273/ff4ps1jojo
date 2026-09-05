#include "common.h"
__asm__(
  ".globl func_800FE870\n"
  ".type func_800FE870, @function\n"
  "func_800FE870:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $a0, $zero, 0xF0\n\taddiu $v1, $zero, 0x1FC\n\tlui $v0, (0x800D04FD >> 16)\n\tori $v0, $v0, (0x800D04FD & 0xFFFF)\n\t.L800FE880:\n\tsb $a0, 0x0($v0)\n\taddiu $v1, $v1, -0x4\n\tbgez $v1, .L800FE880\n\taddiu $v0, $v0, -0x4\n\taddiu $v1, $zero, 0x1F\n\tlui $v0, (0x800D051F >> 16)\n\tori $v0, $v0, (0x800D051F & 0xFFFF)\n\t.L800FE89C:\n\tsb $zero, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L800FE89C\n\taddiu $v0, $v0, -0x1\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE870, .-func_800FE870\n"
);
