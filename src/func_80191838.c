#include "common.h"
__asm__(
  ".globl func_80191838\n"
  ".type func_80191838, @function\n"
  "func_80191838:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B9EC)\n\tlw $v0, %lo(D_8019B9EC)($v0)\n\tlui $at, %hi(D_8019B9EC)\n\tjr $ra\n\tsw $a0, %lo(D_8019B9EC)($at)\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191838, .-func_80191838\n"
);
