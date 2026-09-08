#include "common.h"
__asm__(
  ".globl func_80197D58\n"
  ".type func_80197D58, @function\n"
  "func_80197D58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $t1, jtbl_801FEC00\n\tlw $t1, jtbl_801FEC00($t1)\n\tnop\n\tjr $t1\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197D58, .-func_80197D58\n"
);
