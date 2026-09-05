#include "common.h"
__asm__(
  ".globl func_80192C8C\n"
  ".type func_80192C8C, @function\n"
  "func_80192C8C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019BE6C)\n\taddiu $s0, $s0, %lo(D_8019BE6C)\n\tsw $ra, 0x14($sp)\n\tlhu $v0, 0x0($s0)\n\tnop\n\tbnez $v0, .L80192D54\n\taddu $v0, $zero, $zero\n\tlui $v1, %hi(D_8019CEF8)\n\tlw $v1, %lo(D_8019CEF8)($v1)\n\tlui $v0, %hi(D_8019CEFC)\n\tlw $v0, %lo(D_8019CEFC)($v0)\n\tlui $a1, (0x33333333 >> 16)\n\tsh $zero, 0x0($v0)\n\tlhu $v0, 0x0($v0)\n\tori $a1, $a1, (0x33333333 & 0xFFFF)\n\tsh $v0, 0x0($v1)\n\tlui $v0, %hi(D_8019CF00)\n\tlw $v0, %lo(D_8019CF00)($v0)\n\taddu $a0, $s0, $zero\n\tsw $a1, 0x0($v0)\n\tjal func_80193194\n\taddiu $a1, $zero, 0x41A\n\tjal func_801931B8\n\taddiu $a0, $s0, 0x38\n\tbeqz $v0, .L80192D04\n\tnop\n\tjal func_80192D64\n\tnop\n\t.L80192D04:\n\tlui $s0, %hi(D_8019BEA8)\n\taddiu $s0, $s0, %lo(D_8019BEA8)\n\taddiu $a0, $s0, -0x4\n\taddiu $v0, $s0, 0xFDC\n\tjal func_801976D8\n\tsw $v0, 0x0($s0)\n\taddiu $v0, $zero, 0x1\n\tjal func_801931C8\n\tsh $v0, -0x3C($s0)\n\tlui $v1, %hi(D_8019CEF4)\n\tlw $v1, %lo(D_8019CEF4)($v1)\n\tjal func_801932E8\n\tsw $v0, 0x14($v1)\n\tlui $a0, %hi(D_8019CEF4)\n\tlw $a0, %lo(D_8019CEF4)($a0)\n\tjal func_80197630\n\tsw $v0, 0x4($a0)\n\tjal func_801976F8\n\taddiu $s0, $s0, -0x3C\n\taddu $v0, $s0, $zero\n\t.L80192D54:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192C8C, .-func_80192C8C\n"
);
