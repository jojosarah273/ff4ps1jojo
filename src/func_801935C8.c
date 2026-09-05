#include "common.h"
__asm__(
  ".globl func_801935C8\n"
  ".type func_801935C8, @function\n"
  "func_801935C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s2, 0x28($sp)\n\taddu $s2, $a0, $zero\n\tsw $s1, 0x24($sp)\n\taddu $s1, $a1, $zero\n\tsw $s0, 0x20($sp)\n\tlui $s0, %hi(D_8019D0FC)\n\taddiu $s0, $s0, %lo(D_8019D0FC)\n\taddu $a0, $s0, $zero\n\taddu $a1, $s2, $zero\n\tsw $ra, 0x2C($sp)\n\tjal func_80197038\n\taddiu $a2, $s1, 0x80\n\taddiu $a0, $s0, 0x200\n\taddu $a1, $zero, $zero\n\taddu $a2, $zero, $zero\n\tlui $at, %hi(D_801FD352)\n\tsh $v0, %lo(D_801FD352)($at)\n\taddiu $v0, $zero, 0x80\n\tsw $v0, 0x14($sp)\n\taddiu $v0, $zero, 0x20\n\taddu $a3, $s2, $zero\n\tsw $s1, 0x10($sp)\n\tjal func_80196F48\n\tsw $v0, 0x18($sp)\n\tlui $a0, %hi(D_8019CF74)\n\taddiu $a0, $a0, %lo(D_8019CF74)\n\taddu $a1, $zero, $zero\n\tlui $at, %hi(D_801FD350)\n\tsh $v0, %lo(D_801FD350)($at)\n\tlui $at, %hi(D_8019D0F4)\n\tsw $zero, %lo(D_8019D0F4)($at)\n\tjal func_8018F098\n\taddiu $a2, $zero, 0x180\n\tlw $ra, 0x2C($sp)\n\tlw $s2, 0x28($sp)\n\tlw $s1, 0x24($sp)\n\tlw $s0, 0x20($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801935C8, .-func_801935C8\n"
);
