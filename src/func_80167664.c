#include "common.h"
__asm__(
  ".globl func_80167664\n"
  ".type func_80167664, @function\n"
  "func_80167664:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80167774\n\tnop\n\tjal func_800F71DC\n\tori $a0, $zero, 0x80B0\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF289\n\tjal func_800F6240\n\tori $a0, $zero, 0xF28B\n\tjal func_800F971C\n\tnop\n\tjal func_8014A488\n\tnop\n\tjal func_80148C8C\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF289\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF28B\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\t.L801676DC:\n\tjal func_800F9330\n\tnop\n\tjal func_80140994\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_8014096C\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_80140944\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_801409BC\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_801409E4\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801676DC\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xEF87\n\tjal func_80167844\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80167664, .-func_80167664\n"
);
