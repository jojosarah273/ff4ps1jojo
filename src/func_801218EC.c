#include "common.h"
__asm__(
  ".globl func_801218EC\n"
  ".type func_801218EC, @function\n"
  "func_801218EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8012191C\n\tnop\n\tjal func_80121E94\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x66\n\tj .L8012192C\n\tnop\n\t.L8012191C:\n\tjal func_80121D64\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x66\n\t.L8012192C:\n\tjal func_80121CE4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x65\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x63\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFC\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xFD\n\taddiu $v0, $v0, 0x2\n\tjal func_800F654C\n\tsh $v0, 0x0($v1)\n\t.L80121994:\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1D\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5DA0\n\tsh $v0, 0x0($v1)\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80121994\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801218EC, .-func_801218EC\n"
);
