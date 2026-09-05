#include "common.h"
__asm__(
  ".globl func_8013E984\n"
  ".type func_8013E984, @function\n"
  "func_8013E984:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1802\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F9200\n\tnop\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tnop\n\tlbu $v0, 0x0($a1)\n\tlui $a0, (0xDFCCE >> 16)\n\tsll $v0, $v0, 2\n\tsb $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v0, 0x0($v1)\n\tori $a0, $a0, (0xDFCCE & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v0, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tlui $a0, (0xDFCCD >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xDFCCD & 0xFFFF)\n\tjal func_8013EB2C\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $a0, (0xDFCCB >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDFCCB & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F9330\n\tnop\n\tjal func_8013EAFC\n\tnop\n\tjal func_8013ED14\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlui $a0, (0xDFCCC >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xDFCCC & 0xFFFF)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013EA74\n\tnop\n\tjal func_8013EAFC\n\tnop\n\tjal func_8013ED14\n\tnop\n\t.L8013EA74:\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013EAEC\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8013EA9C:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x707E\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x707E\n\tori $v0, $v0, 0x20\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x440\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013EA9C\n\tnop\n\t.L8013EAEC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013E984, .-func_8013E984\n"
);
