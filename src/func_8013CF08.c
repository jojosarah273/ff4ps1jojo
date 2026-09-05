#include "common.h"
__asm__(
  ".globl func_8013CF08\n"
  ".type func_8013CF08, @function\n"
  "func_8013CF08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L8013CF50:\n\tjal func_80143D64\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF111\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_80143D14\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF112\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F9330\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF115\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF116\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tlui $a0, (0xDF81C >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDF81C & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4\n\tlui $a0, (0xDF80C >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xDF80C & 0xFFFF)\n\tjal func_800F95A0\n\tnop\n\tjal func_8013D040\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013CF50\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013CF08, .-func_8013CF08\n"
);
