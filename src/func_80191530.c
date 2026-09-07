#include "common.h"
__asm__(
  ".globl func_80191530\n"
  ".type func_80191530, @function\n"
  "func_80191530:\n"
	".set\tnoreorder\n"
	".set noreorder\n"
  "\tlui $at, %hi(D_8019BC94)\n"
  "\tjr $ra\n"
  "\tsw $a0, %lo(D_8019BC94)($at)\n"
	".set reorder\n"
	".set\treorder\n"
  ".size func_80191530, .-func_80191530\n"
);
