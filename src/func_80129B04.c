#include "common.h"
__asm__(
  ".globl func_80129B04\n"
  ".type func_80129B04, @function\n"
  "func_80129B04:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x41\n\tjal func_800F6E30\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $v1, 0x0($v0)\n\tnop\n\tsll $v1, $v1, 2\n\tjal func_800F5410\n\tsb $v1, 0x0($v0)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F3A70\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x46\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x45\n\tlui $v0, %hi(D_800D015B)\n\tlbu $v0, %lo(D_800D015B)($v0)\n\tlui $v1, %hi(D_800D015A)\n\tlbu $v1, %lo(D_800D015A)($v1)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tori $v0, $zero, 0xDC0A\n\tbeq $v1, $v0, .L80129BF8\n\tnop\n\tslt $v0, $v0, $v1\n\tbnez $v0, .L80129BD8\n\tori $v0, $zero, 0xDC5A\n\tori $v0, $zero, 0xDBBA\n\tbeq $v1, $v0, .L80129BE8\n\tlui $v0, %hi(D_80199C5C)\n\tj .L80129C34\n\tnop\n\t.L80129BD8:\n\tbeq $v1, $v0, .L80129C0C\n\tlui $v0, %hi(D_80199CFC)\n\tj .L80129C34\n\tnop\n\t.L80129BE8:\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tj .L80129C18\n\taddiu $v0, $v0, %lo(D_80199C5C)\n\t.L80129BF8:\n\tlui $v0, %hi(D_80199CAC)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tj .L80129C18\n\taddiu $v0, $v0, %lo(D_80199CAC)\n\t.L80129C0C:\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\taddiu $v0, $v0, %lo(D_80199CFC)\n\t.L80129C18:\n\tlhu $v1, 0x0($a0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\t.L80129C34:\n\tjal func_800F960C\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129B04, .-func_80129B04\n"
);
