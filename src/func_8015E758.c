#include "common.h"
__asm__(
  ".globl func_8015E758\n"
  ".type func_8015E758, @function\n"
  "func_8015E758:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F8D6C\n\tsh $v0, 0x0($a1)\n\t.L8015E7B4:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x3540\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015E7F4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015E7F4\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xA9\n\t.L8015E7F4:\n\tjal func_8015330C\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015E7B4\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38DB\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015E758, .-func_8015E758\n"
);
