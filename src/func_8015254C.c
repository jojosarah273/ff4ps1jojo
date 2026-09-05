#include "common.h"
__asm__(
  ".globl func_8015254C\n"
  ".type func_8015254C, @function\n"
  "func_8015254C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $ra, 0x18($sp)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x2000\n\taddu $a1, $v0, $zero\n\tlbu $v0, 0x1945($a1)\n\tsb $zero, 0x1949($a1)\n\tsb $zero, 0x194A($a1)\n\tsb $zero, 0x194B($a1)\n\tsb $zero, 0x194C($a1)\n\tsb $v0, 0x10($sp)\n\tlbu $v1, 0x1946($a1)\n\tnop\n\tsb $v1, 0x11($sp)\n\tlhu $v0, 0x10($sp)\n\tnop\n\tbeqz $v0, .L80152630\n\tnop\n\tlbu $v0, 0x1947($a1)\n\tnop\n\tsb $v0, 0x12($sp)\n\tlbu $v1, 0x1948($a1)\n\tnop\n\tsb $v1, 0x13($sp)\n\tlhu $v0, 0x12($sp)\n\tnop\n\tbeqz $v0, .L80152630\n\tnop\n\tlhu $v1, 0x10($sp)\n\tnop\n\tdivu $zero,$v1,$v0\n\tmflo $v1\n\tbnez $v0, .L801525D8\n\tnop\n\t.word 0x000001CD\n\t.L801525D8:\n\tsh $v1, 0x14($sp)\n\tlbu $v0, 0x14($sp)\n\tnop\n\tsb $v0, 0x1949($a1)\n\tlbu $v1, 0x15($sp)\n\tnop\n\tsb $v1, 0x194A($a1)\n\tlhu $a0, 0x10($sp)\n\tlhu $v0, 0x12($sp)\n\tnop\n\tdivu $zero,$a0,$v0\n\tmfhi $v1\n\tbnez $v0, .L80152614\n\tnop\n\t.word 0x000001CD\n\t.L80152614:\n\tsh $v1, 0x16($sp)\n\tlbu $v0, 0x16($sp)\n\tnop\n\tsb $v0, 0x194B($a1)\n\tlbu $v1, 0x17($sp)\n\tnop\n\tsb $v1, 0x194C($a1)\n\t.L80152630:\n\tlw $ra, 0x18($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015254C, .-func_8015254C\n"
);
