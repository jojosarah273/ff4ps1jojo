#include "common.h"
__asm__(
  ".globl func_8010B5DC\n"
  ".type func_8010B5DC, @function\n"
  "func_8010B5DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x18($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\tlbu $a2, 0xC($s0)\n\tlbu $v1, 0xB0($s0)\n\tlbu $a0, 0xAF($s0)\n\tlbu $a1, 0xD($s0)\n\tsb $zero, 0xD7($s0)\n\tsll $v1, $v1, 8\n\tor $a0, $a0, $v1\n\taddu $a0, $a0, $v0\n\tsll $a1, $a1, 8\n\tor $a2, $a2, $a1\n\tlbu $v0, 0x904($a0)\n\tlbu $v1, 0x5B($s0)\n\tsll $v0, $v0, 4\n\taddu $v0, $v0, $a2\n\tsll $v1, $v1, 8\n\tlbu $a2, 0x5A($s0)\n\tandi $v0, $v0, 0xFFFF\n\tor $a2, $a2, $v1\n\tsubu $v0, $v0, $a2\n\tandi $v0, $v0, 0x3FF\n\tsrl $v1, $v0, 8\n\tsb $v0, 0x18($s0)\n\tsltiu $v0, $v0, 0x100\n\tbeqz $v0, .L8010B6AC\n\tsb $v1, 0x19($s0)\n\tlbu $v1, 0xF($s0)\n\tlbu $a2, 0xE($s0)\n\tlbu $v0, 0x906($a0)\n\tsll $v1, $v1, 8\n\tor $a2, $a2, $v1\n\tsll $v0, $v0, 4\n\taddu $v0, $v0, $a2\n\tandi $v0, $v0, 0xFFFF\n\tlbu $v1, 0x5D($s0)\n\tlbu $a2, 0x5C($s0)\n\tsll $v1, $v1, 8\n\tor $a2, $a2, $v1\n\tsubu $v0, $v0, $a2\n\tandi $v0, $v0, 0x3FF\n\tsrl $v1, $v0, 8\n\tsb $v0, 0x1A($s0)\n\tsltiu $v0, $v0, 0xF0\n\tbnez $v0, .L8010B6D0\n\tsb $v1, 0x1B($s0)\n\t.L8010B6AC:\n\tlbu $v0, 0xD8($s0)\n\tlbu $a2, 0xD7($s0)\n\tsll $v0, $v0, 8\n\tor $a2, $a2, $v0\n\taddiu $v1, $a2, 0x1\n\tandi $a2, $v1, 0xFFFF\n\tsrl $v0, $a2, 8\n\tsb $a2, 0xD7($s0)\n\tsb $v0, 0xD8($s0)\n\t.L8010B6D0:\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tlw $ra, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tsb $zero, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010B5DC, .-func_8010B5DC\n"
);
