#include "common.h"
__asm__(
  ".globl func_80128C4C\n"
  ".type func_80128C4C, @function\n"
  "func_80128C4C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1040\n\t.L80128C5C:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x1800\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80128C5C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3000\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x16AA\n\tjal func_8012214C\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x53\n\tjal func_800F71DC\n\tori $a0, $zero, 0xA710\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1500\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xF7E\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x5\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1500\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1B0A\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x7E7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16AE\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16AF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16B1\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16AD\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16AC\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x16B0\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80128C4C, .-func_80128C4C\n"
);
