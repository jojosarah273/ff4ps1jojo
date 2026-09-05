#include "common.h"
__asm__(
  ".globl func_80142394\n"
  ".type func_80142394, @function\n"
  "func_80142394:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L801423C0:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B4\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F4\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1B7\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B8\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1F7\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F8\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801423C0\n\tnop\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF1B7\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF1F7\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80142394, .-func_80142394\n"
);
