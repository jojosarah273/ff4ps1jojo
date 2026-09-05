#include "common.h"
__asm__(
  ".globl func_80122F2C\n"
  ".type func_80122F2C, @function\n"
  "func_80122F2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9330\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x48\n\tjal func_800F6764\n\tsh $v1, 0x0($a1)\n\tjal func_8011F3F8\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x4\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5E\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x6\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80122F2C, .-func_80122F2C\n"
);
