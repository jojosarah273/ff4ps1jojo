#include "common.h"
__asm__(
  ".globl func_801410B0\n"
  ".type func_801410B0, @function\n"
  "func_801410B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x38F7\n\tjal func_800F6240\n\tori $a0, $zero, 0xF44C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_80141334\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF41A\n\tjal func_80140EA8\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF41A\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801410B0, .-func_801410B0\n"
);
