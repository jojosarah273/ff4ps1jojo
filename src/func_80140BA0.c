#include "common.h"
__asm__(
  ".globl func_80140BA0\n"
  ".type func_80140BA0, @function\n"
  "func_80140BA0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80140CFC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x48\n\tjal func_800F9200\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF475\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x48\n\tjal func_80097D34\n\tnop\n\tjal func_80140AC0\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F8960\n\tori $a0, $zero, 0xF2C1\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F9200\n\tnop\n\tlui $v1, %hi(D_8019ED60)\n\tlw $v1, %lo(D_8019ED60)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 4\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\tjal func_800F93DC\n\tsh $v0, 0x0($v1)\n\tjal func_800F8768\n\tori $a0, $zero, 0xEFC4\n\tjal func_80097D54\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x48\n\tjal func_80140D94\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140BA0, .-func_80140BA0\n"
);
