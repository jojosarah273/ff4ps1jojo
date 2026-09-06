#include "common.h"
__asm__(
  ".globl func_80170348\n"
  ".type func_80170348, @function\n"
  "func_80170348:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16AA\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA002\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA00A\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA012\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA01A\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA042\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA04A\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA052\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA05A\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA082\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA08A\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA092\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA09A\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA0C2\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA0CA\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA0D2\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA0DA\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80170348, .-func_80170348\n"
);
