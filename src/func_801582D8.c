#include "common.h"
__asm__(
  ".globl func_801582D8\n"
  ".type func_801582D8, @function\n"
  "func_801582D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3975\n\tjal func_800F9200\n\tnop\n\tjal func_80151CD8\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3975\n\tjal func_801571DC\n\tnop\n\tjal func_80155778\n\tnop\n\tjal func_801583FC\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA7\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80158374:\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80158374\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x41\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x80\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x102D\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x102D\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801582D8, .-func_801582D8\n"
);
