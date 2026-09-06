#include "common.h"
__asm__(
  ".globl func_80126550\n"
  ".type func_80126550, @function\n"
  "func_80126550:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x7000\n\tjal func_800F7500\n\tori $a0, $zero, 0xD600\n\tjal func_80126368\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80126550, .-func_80126550\n"
);
