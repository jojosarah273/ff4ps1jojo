#include "common.h"
__asm__(
  ".globl func_8016AB14\n"
  ".type func_8016AB14, @function\n"
  "func_8016AB14:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\tlui $a0, (0x13DB36 >> 16)\n\t.L8016AB44:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x13DB36 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x3304\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x15\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016AB44\n\tlui $a0, (0x13DB36 >> 16)\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4310\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x42\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4320\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1B\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4301\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4311\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4321\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3304\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x330B\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4312\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3312\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4322\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4304\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4307\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4314\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4317\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4324\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4327\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016AB14, .-func_8016AB14\n"
);
