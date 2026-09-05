#include "common.h"
__asm__(
  ".globl func_80185FA0\n"
  ".type func_80185FA0, @function\n"
  "func_80185FA0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a1, %hi(D_801F6260)\n\taddiu $a0, $zero, 0x40\n\tsw $ra, 0x10($sp)\n\tjal func_80188940\n\taddiu $a1, $a1, %lo(D_801F6260)\n\tjal func_80189790\n\tnop\n\tjal func_80185F2C\n\tnop\n\taddiu $v0, $zero, 0x2FFF\n\tsh $zero, %gp_rel(D_8019EF36)($gp)\n\tsh $zero, %gp_rel(D_8019EF30)($gp)\n\tsh $v0, %gp_rel(D_8019EEB8)($gp)\n\tjal func_80187608\n\tnop\n\tjal func_80187AA0\n\tnop\n\tsh $zero, %gp_rel(D_8019EF0A)($gp)\n\tsh $zero, %gp_rel(D_8019EF20)($gp)\n\tsh $zero, %gp_rel(D_8019EECC)($gp)\n\tjal func_80187D1C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80185FA0, .-func_80185FA0\n"
);
