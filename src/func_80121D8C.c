#include "common.h"
__asm__(
  ".globl func_80121D8C\n"
  ".type func_80121D8C, @function\n"
  "func_80121D8C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x65\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x63\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFA\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xFF\n\taddiu $v0, $v0, 0x2\n\tjal func_800F654C\n\tsh $v0, 0x0($v1)\n\tjal func_80121E0C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80121D8C, .-func_80121D8C\n"
);
