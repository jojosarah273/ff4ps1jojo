#include "common.h"
__asm__(
  ".globl func_8015FC5C\n"
  ".type func_8015FC5C, @function\n"
  "func_8015FC5C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x269D\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3902\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3902\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3903\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_80061860\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015FC5C, .-func_8015FC5C\n"
);
