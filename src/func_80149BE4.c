#include "common.h"
__asm__(
  ".globl func_80149BE4\n"
  ".type func_80149BE4, @function\n"
  "func_80149BE4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v0, %hi(D_8019A0D8)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\taddiu $v0, $v0, %lo(D_8019A0D8)\n\tlhu $v1, 0x0($a1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\tori $a0, $zero, 0xF47F\n\tjal func_800F8188\n\tsb $v0, 0x0($a1)\n\tjal func_800F93DC\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x48\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 4\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\tjal func_800F93DC\n\tsh $v0, 0x0($v1)\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF2A0\n\tjal func_800F9200\n\tnop\n\tjal func_8014FE84\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x6\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF457\n\tjal func_800760D0\n\tnop\n\tjal func_800F8FB8\n\taddu $a0, $zero, $zero\n\tjal func_8014B248\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2\n\tjal func_800F93DC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38E2\n\tjal func_800F9200\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x38E2\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C2\n\tjal func_800F8188\n\tori $a0, $zero, 0xF485\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4\n\tjal func_8014DA2C\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38E2\n\tjal func_80148CAC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80149BE4, .-func_80149BE4\n"
);
