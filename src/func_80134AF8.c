#include "common.h"
__asm__(
  ".globl func_80134AF8\n"
  ".type func_80134AF8, @function\n"
  "func_80134AF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B39\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80134C44\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tsh $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v0, 0x0($v1)\n\tlui $a0, (0xF9106 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xF9106 & 0xFFFF)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5140\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0xFA550 >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0xFA550 & 0xFFFF)\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x45\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F61E8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x48\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x49\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1\n\t.L80134BFC:\n\tjal func_800F5DD4\n\taddiu $a0, $zero, 0x48\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80134C24\n\tnop\n\tjal func_800F516C\n\tnop\n\tj .L80134BFC\n\tnop\n\t.L80134C24:\n\tjal func_800F43A0\n\taddiu $a0, $zero, 0x45\n\tjal func_800F41E8\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80134C54\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80134C44:\n\tjal func_800F5410\n\tnop\n\tj .L80134C64\n\tnop\n\t.L80134C54:\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5480\n\tnop\n\t.L80134C64:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80134AF8, .-func_80134AF8\n"
);
