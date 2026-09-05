#include "common.h"
__asm__(
  ".globl func_8015CF18\n"
  ".type func_8015CF18, @function\n"
  "func_8015CF18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L8015CF60:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x321B\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8015CFC8\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015CF60\n\tnop\n\tj .L8015D0A8\n\tnop\n\t.L8015CFC8:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x321C\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015D0A8\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x321C\n\tjal func_800F9200\n\tnop\n\tjal func_800F9330\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x321C\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015D060\n\tnop\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x321C\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x321B\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x321A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x321A\n\tori $v0, $v0, 0x80\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\t.L8015D060:\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\tsb $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_80150C38\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x321C\n\t.L8015D0A8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015CF18, .-func_8015CF18\n"
);
