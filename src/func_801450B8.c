#include "common.h"
__asm__(
  ".globl func_801450B8\n"
  ".type func_801450B8, @function\n"
  "func_801450B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8013EF78\n\tnop\n\tjal func_8013D12C\n\tnop\n\tjal func_801444D4\n\tnop\n\tjal func_80144C78\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x40\n\t.L801450E8:\n\tjal func_800F9330\n\tnop\n\tjal func_80140558\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF42B\n\tjal func_80144C78\n\tnop\n\tjal func_801449D0\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF42B\n\tjal func_800F95A0\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801450E8\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF466\n\tjal func_8013DC04\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x38E2\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801450B8, .-func_801450B8\n"
);
