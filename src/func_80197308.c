#include "common.h"
__asm__(
  ".globl func_80197308\n"
  ".type func_80197308, @function\n"
  "func_80197308:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a1, .L8019731C\n\tnop\n\tlbu $v0, 0x7($a0)\n\tj .L80197328\n\tori $v0, $v0, 0x1\n\t.L8019731C:\n\tlbu $v0, 0x7($a0)\n\tnop\n\tandi $v0, $v0, 0xFE\n\t.L80197328:\n\tjr $ra\n\tsb $v0, 0x7($a0)\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197308, .-func_80197308\n"
);
