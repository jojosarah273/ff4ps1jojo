#include "common.h"
__asm__(
  ".globl func_801257BC\n"
  ".type func_801257BC, @function\n"
  "func_801257BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x16A8\n\tsw $ra, 0x14($sp)\n\tjal func_800F6564\n\tsw $s0, 0x10($sp)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801257E8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\t.L801257E8:\n\tjal func_801224D0\n\tlui $s0, %hi(D_80199BDC)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x45\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x41\n\t.L80125810:\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\taddiu $a1, $s0, %lo(D_80199BDC)\n\tlhu $v1, 0x0($v0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v1, $v1, $a1\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v0, $v0, $a1\n\tlbu $v1, 0x1($v0)\n\tjal func_800F5410\n\tsb $v1, 0x1($a0)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1A71\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F89D4\n\tori $a0, $zero, 0xFE02\n\tjal func_800F89D4\n\tori $a0, $zero, 0xFE16\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tori $a0, $zero, 0xFE00\n\tsrl $v0, $v0, 2\n\tjal func_800F89D4\n\tsh $v0, 0x0($v1)\n\tjal func_800F89D4\n\tori $a0, $zero, 0xFE14\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5DD4\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80125810\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A73\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801257BC, .-func_801257BC\n"
);
