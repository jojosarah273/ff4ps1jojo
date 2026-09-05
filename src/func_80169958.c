#include "common.h"
__asm__(
  ".globl func_80169958\n"
  ".type func_80169958, @function\n"
  "func_80169958:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xA0\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x211A\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\tlui $a0, (0x7E8000 >> 16)\n\t.L80169998:\n\tjal func_800F885C\n\tori $a0, $a0, (0x7E8000 & 0xFFFF)\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\tori $a0, $zero, 0x8000\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80169998\n\tlui $a0, (0x7E8000 >> 16)\n\tjal func_800F71DC\n\tori $a0, $zero, 0x8000\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x7D1B\n\tjal func_800F71DC\n\tori $a0, $zero, 0xF336\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x7D19\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x13\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x7D1E\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x7D1D\n\tjal func_8016D4D8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80169958, .-func_80169958\n"
);
