#include "common.h"
__asm__(
  ".globl func_8015F6F0\n"
  ".type func_8015F6F0, @function\n"
  "func_8015F6F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_80152224\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x202\n\tjal func_800F70BC\n\tsh $v1, 0x0($a1)\n\tbnez $v0, .L8015F758\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x28A4\n\tjal func_80065774\n\tnop\n\tj .L8015F7A0\n\tnop\n\t.L8015F758:\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015F788\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x28A3\n\tj .L8015F798\n\tnop\n\t.L8015F788:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x28A4\n\t.L8015F798:\n\tjal func_80065534\n\tnop\n\t.L8015F7A0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015F6F0, .-func_8015F6F0\n"
);
