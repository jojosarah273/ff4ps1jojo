#include "common.h"
__asm__(
  ".globl func_8010AF2C\n"
  ".type func_8010AF2C, @function\n"
  "func_8010AF2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\tsh $v1, 0x0($a1)\n\t.L8010AF5C:\n\tjal func_800F5958\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8010AF94\n\taddiu $a0, $zero, 0x903\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0xF\n\tj .L8010AF5C\n\tnop\n\t.L8010AF94:\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x905\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F7918\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010AFF0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tj .L8010B000\n\tnop\n\t.L8010AFF0:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x902\n\tjal func_800F5CCC\n\tnop\n\t.L8010B000:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010AF2C, .-func_8010AF2C\n"
);
