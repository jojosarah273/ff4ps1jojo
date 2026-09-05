#include "common.h"
__asm__(
  ".globl func_8012B950\n"
  ".type func_8012B950, @function\n"
  "func_8012B950:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L8012B958:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BC3\n\tjal func_80124EAC\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x1BC1\n\tjal func_800F6564\n\tsh $v1, 0x0($a1)\n\tjal func_800F5140\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0x1EFD7D >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0x1EFD7D & 0xFFFF)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_8012BB68\n\tnop\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1BC1\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1BC3\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BC3\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8012B958\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012B950, .-func_8012B950\n"
);
