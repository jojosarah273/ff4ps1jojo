#include "common.h"
__asm__(
  ".globl func_80132C0C\n"
  ".type func_80132C0C, @function\n"
  "func_80132C0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80139CA4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B4A\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L80132C84\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x43\n\tjal func_800F516C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1B4B\n\t.L80132C84:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2588\n\tjal func_80126070\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132C0C, .-func_80132C0C\n"
);
