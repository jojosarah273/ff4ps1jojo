#include "common.h"
__asm__(
  ".globl func_80197038\n"
  ".type func_80197038, @function\n"
  "func_80197038:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\taddu $v0, $a0, $zero\n\tsw $s0, 0x18($sp)\n\taddu $s0, $a1, $zero\n\tsw $s1, 0x1C($sp)\n\taddu $s1, $a2, $zero\n\taddiu $a0, $sp, 0x10\n\taddu $a1, $v0, $zero\n\taddiu $v0, $zero, 0x10\n\tsh $v0, 0x14($sp)\n\taddiu $v0, $zero, 0x1\n\tsw $ra, 0x20($sp)\n\tsh $s0, 0x10($sp)\n\tsh $s1, 0x12($sp)\n\tjal func_80194640\n\tsh $v0, 0x16($sp)\n\taddu $a0, $s0, $zero\n\tjal func_801971E8\n\taddu $a1, $s1, $zero\n\tandi $v0, $v0, 0xFFFF\n\tlw $ra, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197038, .-func_80197038\n"
);
