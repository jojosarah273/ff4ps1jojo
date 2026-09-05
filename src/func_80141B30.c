#include "common.h"
__asm__(
  ".globl func_80141B30\n"
  ".type func_80141B30, @function\n"
  "func_80141B30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80141B5C:\n\tjal func_80140558\n\tnop\n\tjal func_80140310\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\tori $a0, $zero, 0xF406\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x8\n\tjal func_800F81B0\n\tori $a0, $zero, 0xF406\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x15\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80141B5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141B30, .-func_80141B30\n"
);
