#include "common.h"
__asm__(
  ".globl func_80176C6C\n"
  ".type func_80176C6C, @function\n"
  "func_80176C6C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x43\n\tjal func_800F3D48\n\tnop\n\tjal func_800F7894\n\tnop\n\tjal func_800F922C\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x1FFF\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\tori $a0, $zero, 0xA600\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F9410\n\tsh $v0, 0x0($a0)\n\tjal func_800F5410\n\tnop\n\tjal func_800F4264\n\taddiu $a0, $zero, 0xFFF\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\tori $a0, $zero, 0xC600\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F6558\n\tsh $v1, 0x0($a1)\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x7E7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80176C6C, .-func_80176C6C\n"
);
