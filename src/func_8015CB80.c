#include "common.h"
__asm__(
  ".globl func_8015CB80\n"
  ".type func_8015CB80, @function\n"
  "func_8015CB80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x393B\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x393A\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_80152EAC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8015CC68\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x393B\n\tjal func_800F6564\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xAB\n\tjal func_8015CC80\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x393B\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x393A\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xD\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xAB\n\tjal func_8015CC80\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x393A\n\t.L8015CC68:\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015CB80, .-func_8015CB80\n"
);
