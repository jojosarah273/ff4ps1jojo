#include "common.h"
__asm__(
  ".globl func_8013E5D0\n"
  ".type func_8013E5D0, @function\n"
  "func_8013E5D0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8013E604:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F7728\n\taddiu $a0, $zero, 0x101\n\tbnez $v0, .L8013E6FC\n\tnop\n\tjal func_8013E588\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5410\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a0, (0x16FFF6 >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x16FFF6 & 0xFFFF)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3F38\n\taddu $a0, $v0, $a0\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_8013E588\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a0, (0x16FFF7 >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x16FFF7 & 0xFFFF)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3F38\n\taddu $a0, $v0, $a0\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\tori $a0, $zero, 0xF459\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\tori $a0, $zero, 0xF45A\n\t.L8013E6FC:\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013E604\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013E5D0, .-func_8013E5D0\n"
);
