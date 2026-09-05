#include "common.h"
__asm__(
  ".globl func_80152640\n"
  ".type func_80152640, @function\n"
  "func_80152640:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x82\n\tjal func_800F8EBC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F6630\n\tsh $v1, 0x0($a1)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801526E8\n\tnop\n\t.L80152690:\n\tjal func_800F67FC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801526D0\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801526E0\n\tnop\n\t.L801526D0:\n\tjal func_800F63BC\n\tnop\n\tj .L80152690\n\tnop\n\t.L801526E0:\n\tjal func_800F63BC\n\tnop\n\t.L801526E8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152640, .-func_80152640\n"
);
