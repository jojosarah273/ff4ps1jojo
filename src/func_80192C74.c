#include "common.h"
__asm__(
  ".globl func_80192C74\n"
  ".type func_80192C74, @function\n"
  "func_80192C74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019CEFC)\n\tlw $v1, %lo(D_8019CEFC)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tjr $ra\n\tsh $a0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192C74, .-func_80192C74\n"
);
