#include "common.h"
__asm__(
  ".globl func_801223A4\n"
  ".type func_801223A4, @function\n"
  "func_801223A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_800F926C\n\tsw $s0, 0x10($sp)\n\tlui $v0, %hi(D_8019ED4C)\n\tlw $v0, %lo(D_8019ED4C)($v0)\n\tlui $a0, %hi(D_800D0000)\n\tlhu $v1, 0x0($v0)\n\taddiu $v0, $zero, 0x1\n\taddu $v1, $v1, $a0\n\tsb $v0, %lo(D_800D0000)($v1)\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tjal func_800F9448\n\tsh $v0, 0x0($a0)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tlui $s0, %hi(D_80199374)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tlui $v1, (0xFFFF24AF >> 16)\n\t.L8012244C:\n\tori $v1, $v1, (0xFFFF24AF & 0xFFFF)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\taddiu $a1, $s0, %lo(D_80199374)\n\tlhu $v0, 0x0($a0)\n\tlui $a2, %hi(D_8019ED40)\n\tlw $a2, %lo(D_8019ED40)($a2)\n\taddu $v0, $v0, $v1\n\taddu $v0, $v0, $a1\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6434\n\tsb $v1, 0x0($a2)\n\tbnez $v0, .L801224B8\n\tnop\n\tjal func_800F885C\n\tlui $a0, (0x7E0000 >> 16)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tjal func_800F63BC\n\tsh $v0, 0x0($v1)\n\tj .L8012244C\n\tlui $v1, (0xFFFF24AF >> 16)\n\t.L801224B8:\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801223A4, .-func_801223A4\n"
);
