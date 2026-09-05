#include "common.h"
__asm__(
  ".globl func_80125F38\n"
  ".type func_80125F38, @function\n"
  "func_80125F38:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x46\n\tjal func_8012D204\n\tnop\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80125F80\n\tnop\n\tjal func_800F93DC\n\tnop\n\tj .L80126060\n\tnop\n\t.L80125F80:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x43\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tjal func_800F516C\n\tsh $v0, 0x0($v1)\n\tjal func_800F5050\n\tnop\n\tjal func_800F4064\n\tori $a0, $zero, 0x86D0\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x45\n\tjal func_800F6658\n\tsh $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 4\n\tjal func_800F516C\n\tsh $v0, 0x0($v1)\n\tjal func_800F5050\n\tnop\n\tjal func_800F4064\n\tori $a0, $zero, 0xA160\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F6558\n\tsh $v1, 0x0($a1)\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F93DC\n\tnop\n\t.L80126060:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80125F38, .-func_80125F38\n"
);
