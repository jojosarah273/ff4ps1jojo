#include "common.h"
__asm__(
  ".globl func_8015CC80\n"
  ".type func_8015CC80, @function\n"
  "func_8015CC80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAA\n\t.L8015CC90:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4FAC\n\taddiu $a0, $zero, 0x101\n\tbnez $v0, .L8015CD08\n\tnop\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8015CD08\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAA\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F6630\n\tsh $v1, 0x0($a1)\n\tjal func_80153074\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\t.L8015CD08:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x80\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015CC90\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015CC80, .-func_8015CC80\n"
);
