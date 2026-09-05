#include "common.h"
__asm__(
  ".globl func_80128B3C\n"
  ".type func_80128B3C, @function\n"
  "func_80128B3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1BE4\n\tlui $a0, (0x7007FE >> 16)\n\tori $a0, $a0, (0x7007FE & 0xFFFF)\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80128C24\n\tlui $a0, (0x700FFE >> 16)\n\tori $a0, $a0, (0x700FFE & 0xFFFF)\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80128C24\n\tlui $a0, (0x7017FE >> 16)\n\tori $a0, $a0, (0x7017FE & 0xFFFF)\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80128C24\n\tlui $a0, (0x701FFE >> 16)\n\tori $a0, $a0, (0x701FFE & 0xFFFF)\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80128C24\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_80128C4C\n\tnop\n\tjal func_8012821C\n\tnop\n\tjal func_80126D48\n\tnop\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019EE4E)\n\tsh $v0, %lo(D_8019EE4E)($at)\n\tjal func_800F5480\n\tnop\n\tj .L80128C3C\n\tnop\n\t.L80128C24:\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlui $at, %hi(D_8019EE4E)\n\tsh $zero, %lo(D_8019EE4E)($at)\n\tjal func_800F5410\n\tnop\n\t.L80128C3C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80128B3C, .-func_80128B3C\n"
);
