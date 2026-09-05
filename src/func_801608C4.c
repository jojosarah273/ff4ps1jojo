#include "common.h"
__asm__(
  ".globl func_801608C4\n"
  ".type func_801608C4, @function\n"
  "func_801608C4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3554\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016092C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3550\n\tjal func_800F6564\n\tsh $v1, 0x0($a1)\n\tjal func_80153074\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3550\n\tj .L8016096C\n\tnop\n\t.L8016092C:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3523\n\tjal func_800F6564\n\tsh $v1, 0x0($a1)\n\tjal func_80153074\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3523\n\t.L8016096C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801608C4, .-func_801608C4\n"
);
