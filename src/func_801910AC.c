#include "common.h"
__asm__(
  ".globl func_801910AC\n"
  ".type func_801910AC, @function\n"
  "func_801910AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019BCC4)\n\tlw $v1, %lo(D_8019BCC4)($v1)\n\tnop\n\tlhu $v0, 0x1B8($v1)\n\tnop\n\tbnez $v0, .L801910E8\n\taddiu $sp, $sp, -0x8\n\tlhu $v0, 0x1BA($v1)\n\tnop\n\tbnez $v0, .L801910EC\n\taddiu $v0, $zero, 0x3FFF\n\tsh $v0, 0x180($v1)\n\tsh $v0, 0x182($v1)\n\tlui $v1, %hi(D_8019BCC4)\n\tlw $v1, %lo(D_8019BCC4)($v1)\n\t.L801910E8:\n\taddiu $v0, $zero, 0x3FFF\n\t.L801910EC:\n\tsh $v0, 0x1B0($v1)\n\tsh $v0, 0x1B2($v1)\n\tori $v0, $zero, 0xC001\n\tsh $v0, 0x1AA($v1)\n\tlui $v1, %hi(D_8019BCB0)\n\tlw $v1, %lo(D_8019BCB0)($v1)\n\taddiu $v0, $zero, 0x80\n\tsb $v0, 0x2($sp)\n\tsb $v0, 0x0($sp)\n\taddiu $v0, $zero, 0x2\n\tsb $zero, 0x3($sp)\n\tsb $zero, 0x1($sp)\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCC0)\n\tlw $v1, %lo(D_8019BCC0)($v1)\n\tlbu $v0, 0x0($sp)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCB4)\n\tlw $v1, %lo(D_8019BCB4)($v1)\n\tlbu $v0, 0x1($sp)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCB0)\n\tlw $v1, %lo(D_8019BCB0)($v1)\n\taddiu $v0, $zero, 0x3\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCBC)\n\tlw $v1, %lo(D_8019BCBC)($v1)\n\tlbu $v0, 0x2($sp)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCC0)\n\tlw $v1, %lo(D_8019BCC0)($v1)\n\tlbu $v0, 0x3($sp)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCB4)\n\tlw $v1, %lo(D_8019BCB4)($v1)\n\taddiu $v0, $zero, 0x20\n\tsb $v0, 0x0($v1)\n\taddu $v0, $zero, $zero\n\tjr $ra\n\taddiu $sp, $sp, 0x8\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801910AC, .-func_801910AC\n"
);
