#include "common.h"
__asm__(
  ".globl func_8018A058\n"
  ".type func_8018A058, @function\n"
  "func_8018A058:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x14($sp)\n\tjal func_80192AF8\n\taddu $s0, $a0, $zero\n\tjal func_8018A1B8\n\taddu $a0, $s0, $zero\n\tbnez $s0, .L8018A098\n\tori $a0, $zero, 0xC000\n\taddiu $v1, $zero, 0x17\n\tlui $v0, %hi(D_8019B0FE)\n\taddiu $v0, $v0, %lo(D_8019B0FE)\n\t.L8018A088:\n\tsh $a0, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L8018A088\n\taddiu $v0, $v0, -0x2\n\t.L8018A098:\n\tjal func_8018A140\n\tnop\n\taddiu $a0, $zero, 0xD1\n\tlui $v0, %hi(D_8019B0B8)\n\taddiu $v0, $v0, %lo(D_8019B0B8)\n\tlui $a1, %hi(D_8019B6D4)\n\tlw $a1, %lo(D_8019B6D4)($a1)\n\tlui $at, %hi(D_8019B0A8)\n\tsw $zero, %lo(D_8019B0A8)($at)\n\tlui $at, %hi(D_8019B0AC)\n\tsw $zero, %lo(D_8019B0AC)($at)\n\tsw $zero, 0x0($v0)\n\tsh $zero, 0x4($v0)\n\tsh $zero, 0x6($v0)\n\tsw $zero, 0x8($v0)\n\tsw $zero, 0xC($v0)\n\tlui $at, %hi(D_8019B0B0)\n\tsw $a1, %lo(D_8019B0B0)($at)\n\tjal func_8018AAC4\n\taddu $a2, $zero, $zero\n\tlui $at, %hi(D_8019B174)\n\tsw $zero, %lo(D_8019B174)($at)\n\tlui $at, %hi(D_8019B178)\n\tsw $zero, %lo(D_8019B178)($at)\n\tlui $at, %hi(D_8019B17C)\n\tsw $zero, %lo(D_8019B17C)($at)\n\tlui $at, %hi(D_8019B0A4)\n\tsw $zero, %lo(D_8019B0A4)($at)\n\tlui $at, %hi(D_8019B130)\n\tsw $zero, %lo(D_8019B130)($at)\n\tlui $at, %hi(D_8019B0A0)\n\tsw $zero, %lo(D_8019B0A0)($at)\n\tlui $at, %hi(D_8019B0CC)\n\tsw $zero, %lo(D_8019B0CC)($at)\n\tlui $at, %hi(D_8019B0C8)\n\tsw $zero, %lo(D_8019B0C8)($at)\n\tlui $at, %hi(D_8019B100)\n\tsw $zero, %lo(D_8019B100)($at)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018A058, .-func_8018A058\n"
);
