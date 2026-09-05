#include "common.h"
__asm__(
  ".globl func_801972D8\n"
  ".type func_801972D8, @function\n"
  "func_801972D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a1, .L801972EC\n\tnop\n\tlbu $v0, 0x7($a0)\n\tj .L801972F8\n\tori $v0, $v0, 0x2\n\t.L801972EC:\n\tlbu $v0, 0x7($a0)\n\tnop\n\tandi $v0, $v0, 0xFD\n\t.L801972F8:\n\tjr $ra\n\tsb $v0, 0x7($a0)\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801972D8, .-func_801972D8\n"
);
