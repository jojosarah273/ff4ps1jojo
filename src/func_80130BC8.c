#include "common.h"
__asm__(
  ".globl func_80130BC8\n"
  ".type func_80130BC8, @function\n"
  "func_80130BC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3D48\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F516C\n\tnop\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x45\n\tjal func_800F516C\n\tnop\n\tjal func_800F5050\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tlui $a0, (0xF97A5 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xF97A5 & 0xFFFF)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B93\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B93\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80130BC8, .-func_80130BC8\n"
);
