#include "common.h"
__asm__(
  ".globl func_801308B4\n"
  ".type func_801308B4, @function\n"
  "func_801308B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x1E\n\tjal func_80130884\n\tnop\n\tjal func_800F3D48\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x45\n\tsll $v0, $v0, 3\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_800F516C\n\tnop\n\tjal func_800F5050\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801308B4, .-func_801308B4\n"
);
