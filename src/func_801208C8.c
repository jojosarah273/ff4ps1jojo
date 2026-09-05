#include "common.h"
__asm__(
  ".globl func_801208C8\n"
  ".type func_801208C8, @function\n"
  "func_801208C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlui $a0, %hi(D_8019ED68)\n\tlw $a0, %lo(D_8019ED68)($a0)\n\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_800D0000)\n\tsw $ra, 0x14($sp)\n\tlhu $v0, 0x0($v1)\n\tlbu $a1, 0x0($a0)\n\taddu $v0, $v0, $s0\n\tsb $a1, %lo(D_800D0000)($v0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tjal func_800F9330\n\tsh $v0, 0x0($v1)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F939C\n\tnop\n\tjal func_8011F3F8\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9410\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5E\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x6\n\tjal func_800F95A0\n\tnop\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlw $ra, 0x14($sp)\n\tlhu $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED68)\n\tlw $a0, %lo(D_8019ED68)($a0)\n\taddu $v0, $v0, $s0\n\tlbu $v1, %lo(D_800D0000)($v0)\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801208C8, .-func_801208C8\n"
);
