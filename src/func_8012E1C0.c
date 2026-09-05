#include "common.h"
__asm__(
  ".globl func_8012E1C0\n"
  ".type func_8012E1C0, @function\n"
  "func_8012E1C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5140\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a1, %hi(D_80199C0C)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\taddiu $a1, $a1, %lo(D_80199C0C)\n\tlhu $v0, 0x0($v1)\n\tlui $a2, %hi(D_8019ED40)\n\tlw $a2, %lo(D_8019ED40)($a2)\n\taddu $v0, $v0, $a1\n\tlbu $v1, 0x0($v0)\n\tnop\n\tsb $v1, 0x0($a2)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v0, $v0, $a1\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x1($a0)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012E1C0, .-func_8012E1C0\n"
);
