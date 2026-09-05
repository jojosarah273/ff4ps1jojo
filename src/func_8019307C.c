#include "common.h"
__asm__(
  ".globl func_8019307C\n"
  ".type func_8019307C, @function\n"
  "func_8019307C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019BE6C)\n\taddiu $s0, $s0, %lo(D_8019BE6C)\n\tsw $ra, 0x14($sp)\n\tlhu $v0, 0x0($s0)\n\tnop\n\tbeqz $v0, .L8019310C\n\taddu $v0, $zero, $zero\n\tjal func_801976E8\n\tnop\n\tlui $v0, %hi(D_8019CEFC)\n\tlw $v0, %lo(D_8019CEFC)($v0)\n\tlui $a0, %hi(D_8019CF00)\n\tlw $a0, %lo(D_8019CF00)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x32($s0)\n\tlw $v1, 0x0($a0)\n\tlui $a0, %hi(D_8019CEF8)\n\tlw $a0, %lo(D_8019CEF8)($a0)\n\tsw $v1, 0x34($s0)\n\tsh $zero, 0x0($v0)\n\tlhu $v0, 0x0($v0)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $a0, %hi(D_8019CF00)\n\tlw $a0, %lo(D_8019CF00)($a0)\n\tlui $v1, 0x7777\n\tlw $v0, 0x0($a0)\n\tori $v1, $v1, 0x7777\n\tand $v0, $v0, $v1\n\tjal func_801976C8\n\tsw $v0, 0x0($a0)\n\taddu $v0, $s0, $zero\n\tsh $zero, 0x0($v0)\n\t.L8019310C:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019307C, .-func_8019307C\n"
);
