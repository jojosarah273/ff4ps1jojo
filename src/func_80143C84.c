#include "common.h"
__asm__(
  ".globl func_80143C84\n"
  ".type func_80143C84, @function\n"
  "func_80143C84:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80145278\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\tori $a0, $zero, 0xF326\n\tjal func_800F971C\n\tnop\n\tjal func_8014A488\n\tnop\n\tjal func_801452C8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80143C84, .-func_80143C84\n"
);
