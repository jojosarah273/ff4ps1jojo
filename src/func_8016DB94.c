#include "common.h"
__asm__(
  ".globl func_8016DB94\n"
  ".type func_8016DB94, @function\n"
  "func_8016DB94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x1FF\n\tjal func_800F516C\n\tnop\n\tlui $a0, (0x13E5C5 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x13E5C5 & 0xFFFF)\n\tjal func_800F6CF4\n\tsh $v1, 0x0($a1)\n\tjal func_800F64EC\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8016DC78\n\taddiu $a0, $zero, 0x10\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tnor $v0, $zero, $v0\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_8016D028\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x14\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tnor $v0, $zero, $v0\n\tjal func_800F6214\n\tsh $v0, 0x0($v1)\n\tjal func_800F6180\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8016DCB0\n\tnop\n\t.L8016DC50:\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x14\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5480\n\tnop\n\tj .L8016DCD0\n\tnop\n\t.L8016DC78:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x10\n\tjal func_8016D028\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x14\n\tjal func_800F64EC\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8016DC50\n\tnop\n\t.L8016DCB0:\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x14\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5410\n\tnop\n\t.L8016DCD0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016DB94, .-func_8016DB94\n"
);
