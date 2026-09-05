#include "common.h"
__asm__(
  ".globl func_80140CFC\n"
  ".type func_80140CFC, @function\n"
  "func_80140CFC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_800F971C\n\tsw $s0, 0x10($sp)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tlui $s0, %hi(D_8019A0BC)\n\tsh $v1, 0x0($a0)\n\t.L80140D28:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x34C2\n\tjal func_800F8768\n\tori $a0, $zero, 0xF476\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\taddiu $a0, $s0, %lo(D_8019A0BC)\n\tlhu $v1, 0x0($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v1, $v1, $a0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x34C2\n\tjal func_800F8768\n\tsb $v0, 0x0($a1)\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80140D28\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140CFC, .-func_80140CFC\n"
);
