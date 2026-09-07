#include "common.h"
__asm__(
  ".globl func_80197A78\n"
  ".type func_80197A78, @function\n"
  "func_80197A78:\n"
	".set\tnoreorder\n"
	".set noreorder\n"
  "\tlui $at, %hi(D_8019DCB4)\n"
  "\tjr $ra\n"
  "\tsw $a0, %lo(D_8019DCB4)($at)\n"
	".set reorder\n"
	".set\treorder\n"
  ".size func_80197A78, .-func_80197A78\n"
);
