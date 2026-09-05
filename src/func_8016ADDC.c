#include "common.h"
__asm__(
  ".globl func_8016ADDC\n"
  ".type func_8016ADDC, @function\n"
  "func_8016ADDC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a1, %hi(D_8019ED44)\n\tlw $a1, %lo(D_8019ED44)($a1)\n\tlhu $v0, 0x0($v1)\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\tsh $v0, 0x0($a1)\n\t.L8016AE14:\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x3319\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x371B\n\tjal func_800F9140\n\taddiu $a0, $zero, 0x331B\n\tjal func_800F9140\n\taddiu $a0, $zero, 0x3719\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x400\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016AE14\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016ADDC, .-func_8016ADDC\n"
);
