#include "common.h"
__asm__(
  ".globl func_801093B8\n"
  ".type func_801093B8, @function\n"
  "func_801093B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x42\n\tsw $ra, 0x14($sp)\n\tjal func_800F5574\n\tsw $s0, 0x10($sp)\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80109478\n\tnop\n\tjal func_800F9330\n\tlui $s0, %hi(D_80198AE8)\n\tjal func_800F5480\n\taddiu $s0, $s0, %lo(D_80198AE8)\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xF\n\tjal func_800F5140\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x0($v0)\n\tjal func_800F3D48\n\tsb $v1, 0x0($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x1($v0)\n\tjal func_800F3D48\n\tsb $v1, 0x0($a0)\n\tjal func_800F95A0\n\tnop\n\tj .L80109490\n\tnop\n\t.L80109478:\n\tjal func_800F3D48\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F3D48\n\tnop\n\t.L80109490:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801093B8, .-func_801093B8\n"
);
