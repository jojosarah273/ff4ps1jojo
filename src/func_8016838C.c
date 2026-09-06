#include "common.h"
__asm__(
  ".globl func_8016838C\n"
  ".type func_8016838C, @function\n"
  "func_8016838C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x7000\n\tsw $ra, 0x14($sp)\n\tjal func_800F3B04\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddu $a3, $v0, $zero\n\taddu $v1, $zero, $zero\n\taddiu $t0, $zero, 0x80\n\t.L801683B8:\n\taddu $a0, $v1, $a3\n\taddu $a1, $v1, $s0\n\taddiu $v1, $v1, 0x1\n\tlbu $a2, 0xC32($a0)\n\tlbu $v0, 0xE12($a1)\n\tandi $v1, $v1, 0xFFFF\n\tsb $v0, 0xC32($a0)\n\tbne $v1, $t0, .L801683B8\n\tsb $a2, 0xE12($a1)\n\tlui $v0, %hi(D_8019EEB0)\n\tlhu $v0, %lo(D_8019EEB0)($v0)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\txori $v0, $v0, 0x1\n\tlui $at, %hi(D_8019EEB0)\n\tsh $v0, %lo(D_8019EEB0)($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016838C, .-func_8016838C\n"
);
