#include "common.h"
__asm__(
  ".globl func_8011F8D4\n"
  ".type func_8011F8D4, @function\n"
  "func_8011F8D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F9298\n\tnop\n\tjal func_800F9330\n\tnop\n\tjal func_800F9330\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlui $v0, %hi(D_8019ED4C)\n\tlw $v0, %lo(D_8019ED4C)($v0)\n\tlui $a0, %hi(D_800D0000)\n\tlhu $v1, 0x0($v0)\n\taddiu $v0, $zero, 0x1\n\taddu $v1, $v1, $a0\n\tsb $v0, %lo(D_800D0000)($v1)\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tjal func_800F9448\n\tsh $v0, 0x0($a0)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_8011FD34\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011F8D4, .-func_8011F8D4\n"
);
