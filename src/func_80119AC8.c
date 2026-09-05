#include "common.h"
__asm__(
  ".globl func_80119AC8\n"
  ".type func_80119AC8, @function\n"
  "func_80119AC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8010D9D4\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80119BCC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5C\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x8\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $v1, 0x0($v0)\n\tlui $at, %hi(D_8019EE68)\n\tsh $v1, %lo(D_8019EE68)($at)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tnop\n\tlbu $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019EE68)\n\tlhu $v1, %lo(D_8019EE68)($v1)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tlui $at, %hi(D_8019EE68)\n\tsh $v1, %lo(D_8019EE68)($at)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x8\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $v1, 0x0($v0)\n\tlui $at, %hi(D_8019EE6A)\n\tsh $v1, %lo(D_8019EE6A)($at)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x61\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tlui $v0, %hi(D_8019EE6A)\n\tlhu $v0, %lo(D_8019EE6A)($v0)\n\taddiu $v1, $zero, 0x11\n\tlui $at, %hi(D_8019ECFE)\n\tsb $v1, %lo(D_8019ECFE)($at)\n\tsll $a0, $a0, 8\n\tor $v0, $v0, $a0\n\tlui $at, %hi(D_8019EE6A)\n\tsh $v0, %lo(D_8019EE6A)($at)\n\t.L80119BCC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119AC8, .-func_80119AC8\n"
);
