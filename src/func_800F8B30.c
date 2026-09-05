#include "common.h"
__asm__(
  ".globl func_800F8B30\n"
  ".type func_800F8B30, @function\n"
  "func_800F8B30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, (0x1F8003C0 >> 16)\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C94\n\tori $s0, $s0, (0x1F8003C0 & 0xFFFF)\n\tlbu $a0, 0x8($s0)\n\tlw $ra, 0x14($sp)\n\tsb $a0, 0x0($v0)\n\tlbu $v1, 0x9($s0)\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0x1($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F8B30, .-func_800F8B30\n"
);
