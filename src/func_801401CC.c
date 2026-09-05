#include "common.h"
__asm__(
  ".globl func_801401CC\n"
  ".type func_801401CC, @function\n"
  "func_801401CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\tori $a0, $zero, 0xF408\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x2A\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x2\n\tjal func_80140224\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801401CC, .-func_801401CC\n"
);
