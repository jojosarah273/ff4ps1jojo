#include "common.h"
__asm__(
  ".globl func_8015A89C\n"
  ".type func_8015A89C, @function\n"
  "func_8015A89C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3558\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8015A8C4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x202F\n\t.L8015A8C4:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2016\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x14\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F8D6C\n\tsh $v1, 0x0($a1)\n\tjal func_8015ABEC\n\tnop\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A89C, .-func_8015A89C\n"
);
