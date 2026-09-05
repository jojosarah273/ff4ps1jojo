#include "common.h"
__asm__(
  ".globl func_8010D4EC\n"
  ".type func_8010D4EC, @function\n"
  "func_8010D4EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_8010D54C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAE\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlui $a0, (0x7F4C00 >> 16)\n\tlbu $v0, 0x0($v1)\n\tori $a0, $a0, (0x7F4C00 & 0xFFFF)\n\tori $v0, $v0, 0x80\n\tjal func_800F885C\n\tsb $v0, 0x0($v1)\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D4EC, .-func_8010D4EC\n"
);
