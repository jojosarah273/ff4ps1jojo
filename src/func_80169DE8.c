#include "common.h"
__asm__(
  ".globl func_80169DE8\n"
  ".type func_80169DE8, @function\n"
  "func_80169DE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F03\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F04\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F05\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F06\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F07\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F08\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F09\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2F0A\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80169DE8, .-func_80169DE8\n"
);
