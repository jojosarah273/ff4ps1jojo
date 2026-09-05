#include "common.h"
__asm__(
  ".globl func_80179930\n"
  ".type func_80179930, @function\n"
  "func_80179930:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, %hi(func_80177F3C)\n\tsw $ra, 0x10($sp)\n\tsh $zero, %gp_rel(D_8019EE32)($gp)\n\tjal func_80192B88\n\taddiu $a0, $a0, %lo(func_80177F3C)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80179930, .-func_80179930\n"
);
