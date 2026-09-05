#include "common.h"
__asm__(
  ".globl func_80166DB8\n"
  ".type func_80166DB8, @function\n"
  "func_80166DB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a0, (0xF1F3F >> 16)\n\tsw $ra, 0x10($sp)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0xF1F3F & 0xFFFF)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3F38\n\taddu $a0, $v0, $a0\n\tjal func_800F3AB4\n\taddiu $a0, $zero, 0x3\n\taddu $a0, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tnop\n\taddu $v0, $v0, $a0\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\tnop\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_80166E58\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80166DB8, .-func_80166DB8\n"
);
