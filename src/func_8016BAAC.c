#include "common.h"
__asm__(
  ".globl func_8016BAAC\n"
  ".type func_8016BAAC, @function\n"
  "func_8016BAAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F71DC\n\tori $a0, $zero, 0xDF3F\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4352\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4350\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4351\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x13\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4354\n\tjal func_800F8E50\n\taddiu $a0, $zero, 0x4355\n\tjal func_800F9868\n\taddiu $a0, $zero, 0x50\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BAAC, .-func_8016BAAC\n"
);
