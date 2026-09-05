#include "common.h"
__asm__(
  ".globl func_80193560\n"
  ".type func_80193560, @function\n"
  "func_80193560:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a1, .L8019357C\n\taddiu $v0, $a1, -0x1\n\taddiu $v1, $zero, -0x1\n\t.L8019356C:\n\tsw $zero, 0x0($a0)\n\taddiu $v0, $v0, -0x1\n\tbne $v0, $v1, .L8019356C\n\taddiu $a0, $a0, 0x4\n\t.L8019357C:\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80193560, .-func_80193560\n"
);
