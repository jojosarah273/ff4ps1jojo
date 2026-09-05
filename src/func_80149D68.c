#include "common.h"
__asm__(
  ".globl func_80149D68\n"
  ".type func_80149D68, @function\n"
  "func_80149D68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x4D\n\tjal func_800F9200\n\tnop\n\tjal func_800F9200\n\tnop\n\tlui $a0, (0xDFE4C >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDFE4C & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xC\n\tjal func_80075FE0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9644\n\tsh $v1, 0x0($a1)\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8274\n\taddu $a0, $zero, $zero\n\tlui $a0, (0xD87F0 >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0xD87F0 & 0xFFFF)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xDBE6\n\tjal func_800F71DC\n\tsh $v1, 0x0($a1)\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xD\n\tjal func_8007411C\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9644\n\tsh $v1, 0x0($a1)\n\tlui $a0, (0xDF260 >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0xDF260 & 0xFFFF)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xD\n\tjal func_80072068\n\tnop\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80149D68, .-func_80149D68\n"
);
