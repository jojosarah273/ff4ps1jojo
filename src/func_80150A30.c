#include "common.h"
__asm__(
  ".globl func_80150A30\n"
  ".type func_80150A30, @function\n"
  "func_80150A30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, (0x7E3975 >> 16)\n\tori $a0, $a0, (0x7E3975 & 0xFFFF)\n\tsw $ra, 0x14($sp)\n\tjal func_800F8210\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_800D0000)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlui $a0, %hi(D_8019ED68)\n\tlw $a0, %lo(D_8019ED68)($a0)\n\tlhu $v0, 0x0($v1)\n\tlbu $a1, 0x0($a0)\n\taddu $v0, $v0, $s0\n\tsb $a1, %lo(D_800D0000)($v0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x30\n\taddiu $v0, $v0, -0x1\n\tjal func_800F9644\n\tsh $v0, 0x0($v1)\n\tjal func_800F926C\n\tnop\n\tjal func_800F9298\n\tnop\n\tjal func_800F922C\n\tnop\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F54B8\n\tnop\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x10\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_801582D8\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x30\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F9410\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F9448\n\tnop\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlw $ra, 0x14($sp)\n\tlhu $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED68)\n\tlw $a0, %lo(D_8019ED68)($a0)\n\taddu $v0, $v0, $s0\n\tlbu $v1, %lo(D_800D0000)($v0)\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80150A30, .-func_80150A30\n"
);
