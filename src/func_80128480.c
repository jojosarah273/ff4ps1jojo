#include "common.h"
__asm__(
  ".globl func_80128480\n"
  ".type func_80128480, @function\n"
  "func_80128480:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80127718\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x48\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x49\n\t.L801284A0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x48\n\tjal func_8012833C\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80128558\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F926C\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x48\n\tjal func_800F3D48\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tsh $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\tjal func_800F939C\n\tsh $v0, 0x0($v1)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x7FF\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x7E70\n\tjal func_800F95A0\n\tnop\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x6AA\n\tjal func_800F9448\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80128558:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x48\n\tjal func_800F61E8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x48\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801284A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80128480, .-func_80128480\n"
);
