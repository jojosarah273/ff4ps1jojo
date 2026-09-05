#include "common.h"
__asm__(
  ".globl func_8018767C\n"
  ".type func_8018767C, @function\n"
  "func_8018767C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0xA0\n\tsw $s1, 0x94($sp)\n\tandi $s1, $a0, 0xFFFF\n\taddiu $a0, $sp, 0x10\n\tsw $s0, 0x90($sp)\n\taddiu $s0, $zero, 0x3\n\tlui $v0, (0x800000 >> 16)\n\tsw $ra, 0x98($sp)\n\tsw $s0, 0x14($sp)\n\tsw $v0, 0x10($sp)\n\tsh $s1, 0x18($sp)\n\tjal func_8018E4E8\n\tsh $zero, 0x1A($sp)\n\taddiu $a0, $sp, 0x50\n\tlui $v0, (0x400000 >> 16)\n\tsw $s0, 0x54($sp)\n\tsw $v0, 0x50($sp)\n\tsh $zero, 0x58($sp)\n\tjal func_8018E4E8\n\tsh $s1, 0x5A($sp)\n\tlw $ra, 0x98($sp)\n\tlw $s1, 0x94($sp)\n\tlw $s0, 0x90($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0xA0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018767C, .-func_8018767C\n"
);
