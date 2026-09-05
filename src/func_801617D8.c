#include "common.h"
__asm__(
  ".globl func_801617D8\n"
  ".type func_801617D8, @function\n"
  "func_801617D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L80161820:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2001\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xAA\n\txori $v0, $v0, 0x80\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2001\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x80\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80161820\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801617D8, .-func_801617D8\n"
);
