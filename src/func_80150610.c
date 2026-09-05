#include "common.h"
__asm__(
  ".globl func_80150610\n"
  ".type func_80150610, @function\n"
  "func_80150610:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0xCF3C0 >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0xCF3C0 & 0xFFFF)\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x3FF\n\tjal func_800F516C\n\tnop\n\tlui $a0, (0x7FF000 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x7FF000 & 0xFFFF)\n\tjal func_800F6CF4\n\tsh $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\tori $a0, $zero, 0xDBE6\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC\n\tjal func_8007411C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80150610, .-func_80150610\n"
);
