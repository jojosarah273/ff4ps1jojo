#include "common.h"
__asm__(
  ".globl func_8015D0B8\n"
  ".type func_8015D0B8, @function\n"
  "func_8015D0B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1822\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x38DC\n\tjal func_800F6D70\n\tsh $v1, 0x0($a1)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8015D1B8\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1822\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3975\n\tjal func_80152908\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x38DC\n\tjal func_800F6D70\n\tsh $v1, 0x0($a1)\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8015D160\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\t.L8015D160:\n\tjal func_800F971C\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x38DC\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x32DB\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x32DC\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x32DA\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3975\n\tjal func_80152CDC\n\tnop\n\tjal func_8015A284\n\tnop\n\tjal func_80155778\n\tnop\n\tjal func_801583FC\n\tnop\n\t.L8015D1B8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015D0B8, .-func_8015D0B8\n"
);
