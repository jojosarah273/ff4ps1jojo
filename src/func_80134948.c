#include "common.h"
__asm__(
  ".globl func_80134948\n"
  ".type func_80134948, @function\n"
  "func_80134948:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x30\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x41\n\t.L80134968:\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x1440\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801349E0\n\tnop\n\t.L80134998:\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80134968\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F63F8\n\tnop\n\tj .L80134A40\n\tnop\n\t.L801349E0:\n\tjal func_800F9200\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1441\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xE3\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80134A20\n\tnop\n\tjal func_800F93DC\n\tnop\n\tj .L80134998\n\tnop\n\t.L80134A20:\n\tjal func_800F93DC\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F63F8\n\tnop\n\t.L80134A40:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80134948, .-func_80134948\n"
);
