#include "common.h"
__asm__(
  ".globl func_8016ED64\n"
  ".type func_8016ED64, @function\n"
  "func_8016ED64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x10\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlui $a2, %hi(D_800D0000)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlui $a0, %hi(D_8019ED68)\n\tlw $a0, %lo(D_8019ED68)($a0)\n\tlhu $v0, 0x0($v1)\n\tlbu $a1, 0x0($a0)\n\taddu $v0, $v0, $a2\n\tsb $a1, %lo(D_800D0000)($v0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tjal func_800F926C\n\tsh $v0, 0x0($v1)\n\tjal func_800F9298\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x64\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF0\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x6A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xD\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x6B\n\tjal func_8016EF88\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016ED64, .-func_8016ED64\n"
);
