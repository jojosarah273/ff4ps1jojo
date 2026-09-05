#include "common.h"
__asm__(
  ".globl func_8016A390\n"
  ".type func_8016A390, @function\n"
  "func_8016A390:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x270A\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2709\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2708\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2707\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2706\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2705\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2704\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2703\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016A390, .-func_8016A390\n"
);
