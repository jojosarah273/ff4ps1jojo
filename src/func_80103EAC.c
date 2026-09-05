#include "common.h"
__asm__(
  ".globl func_80103EAC\n"
  ".type func_80103EAC, @function\n"
  "func_80103EAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x79\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F9690\n\tnop\n\tlui $a0, (0x14FAF6 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FAF6 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB9\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103EAC, .-func_80103EAC\n"
);
