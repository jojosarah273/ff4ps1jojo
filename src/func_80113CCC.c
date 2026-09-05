#include "common.h"
__asm__(
  ".globl func_80113CCC\n"
  ".type func_80113CCC, @function\n"
  "func_80113CCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x6FB\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x24\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x90\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x39\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x91\n\t.L80113D24:\n\tjal func_800FE7B0\n\tnop\n\tjal func_80113F3C\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x6FB\n\tjal func_800F6214\n\tnop\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x6FB\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x24\n\tjal func_800F6214\n\tnop\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x24\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xFF\n\tsrl $v0, $v0, 2\n\tjal func_800F4264\n\tsh $v0, 0x0($v1)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5F\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80113D24\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80113CCC, .-func_80113CCC\n"
);
