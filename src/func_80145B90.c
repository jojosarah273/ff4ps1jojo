#include "common.h"
__asm__(
  ".globl func_80145B90\n"
  ".type func_80145B90, @function\n"
  "func_80145B90:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tlui $a0, (0x16FB6D >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x16FB6D & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x26\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x28\n\tjal func_80072720\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1800\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF0B7\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F8188\n\tori $a0, $zero, 0xF0B9\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\tori $a0, $zero, 0xF0BA\n\tjal func_800F8188\n\tori $a0, $zero, 0xF0BB\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x2A\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\tori $a0, $zero, 0xD900\n\tjal func_800F81B0\n\tori $a0, $zero, 0xF0B5\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_80145C74\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80145B90, .-func_80145B90\n"
);
