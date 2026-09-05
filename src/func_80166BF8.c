#include "common.h"
__asm__(
  ".globl func_80166BF8\n"
  ".type func_80166BF8, @function\n"
  "func_80166BF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_80166CA8\n\tnop\n\tjal func_800F6B68\n\tori $a0, $zero, 0xEFC5\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xEFC5\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80166BF8, .-func_80166BF8\n"
);
