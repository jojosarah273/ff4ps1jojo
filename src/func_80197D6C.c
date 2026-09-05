#include "common.h"
__asm__(
  ".globl func_80197D6C\n"
  ".type func_80197D6C, @function\n"
  "func_80197D6C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $t1, %hi(jtbl_801FEC04)\n\tlw $t1, %lo(jtbl_801FEC04)($t1)\n\tnop\n\tjr $t1\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197D6C, .-func_80197D6C\n"
);
