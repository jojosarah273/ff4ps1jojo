#include "common.h"
__asm__(
  ".globl func_80191618\n"
  ".type func_80191618, @function\n"
  "func_80191618:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\t.word 0x00017350 # mfhi $t6 # 00010340 <InstrIdType: CPU_SPECIAL>\n\t.word 0x00470000 # sll $zero, $a3, 0 # 00400000 <InstrIdType: CPU_SPECIAL>\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191618, .-func_80191618\n"
);
