#include "common.h"
__asm__(
  ".globl func_801703E8\n"
  ".type func_801703E8, @function\n"
  "func_801703E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x11D\n\tjal func_800F71DC\n\tori $a0, $zero, 0xE600\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x11F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x121\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x122\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801703E8, .-func_801703E8\n"
);
