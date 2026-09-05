#include "common.h"
__asm__(
  ".globl func_801605D0\n"
  ".type func_801605D0, @function\n"
  "func_801605D0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x280\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80160604:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x29B5\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8016064C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xB2\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80160674\n\tnop\n\t.L8016064C:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2003\n\tori $v0, $v0, 0x80\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\t.L80160674:\n\tjal func_8015330C\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80160604\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801605D0, .-func_801605D0\n"
);
