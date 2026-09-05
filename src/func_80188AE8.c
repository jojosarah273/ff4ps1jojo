#include "common.h"
__asm__(
  ".globl func_80188AE8\n"
  ".type func_80188AE8, @function\n"
  "func_80188AE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019EF88)($gp)\n\tlw $v1, %gp_rel(D_8019EF8C)($gp)\n\tnop\n\tslt $v0, $v1, $a1\n\tbnez $v0, .L80188B18\n\tnop\n\tlw $v0, %gp_rel(D_8019EF40)($gp)\n\taddiu $v1, $v1, -0x1\n\tsubu $v0, $v0, $v1\n\taddu $v0, $v0, $a1\n\tjr $ra\n\tslt $v0, $v0, $a0\n\t.L80188B18:\n\tsubu $v0, $a1, $v1\n\tslt $v0, $a0, $v0\n\tjr $ra\n\txori $v0, $v0, 0x1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188AE8, .-func_80188AE8\n"
);
