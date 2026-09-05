#include "common.h"
__asm__(
  ".globl func_8015F5A0\n"
  ".type func_8015F5A0, @function\n"
  "func_8015F5A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_80152224\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F8188\n\tsh $v1, 0x0($a1)\n\tjal func_800F5480\n\tnop\n\t.L8015F5E8:\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x28A4\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015F5E8\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8015F648\n\tnop\n\tjal func_80065774\n\tnop\n\tj .L8015F650\n\tnop\n\t.L8015F648:\n\tjal func_80065534\n\tnop\n\t.L8015F650:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015F5A0, .-func_8015F5A0\n"
);
