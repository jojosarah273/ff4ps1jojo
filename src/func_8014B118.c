#include "common.h"
__asm__(
  ".globl func_8014B118\n"
  ".type func_8014B118, @function\n"
  "func_8014B118:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8014B0D8\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x48\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F654C\n\tsh $v1, 0x0($a1)\n\tjal func_800F8768\n\tori $a0, $zero, 0xF123\n\tjal func_801495D4\n\tnop\n\tjal func_80074B70\n\tnop\n\tjal func_801495F4\n\tnop\n\tjal func_80099938\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B118, .-func_8014B118\n"
);
