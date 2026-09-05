#include "common.h"
__asm__(
  ".globl func_801607F4\n"
  ".type func_801607F4, @function\n"
  "func_801607F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F8D6C\n\tsh $v1, 0x0($a1)\n\t.L80160824:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x11\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80160864\n\tnop\n\tjal func_8015330C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xA9\n\tj .L80160824\n\tnop\n\t.L80160864:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_80152CDC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_8015310C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3598\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2A04\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2A05\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x38E4\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801607F4, .-func_801607F4\n"
);
