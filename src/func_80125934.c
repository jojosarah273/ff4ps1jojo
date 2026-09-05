#include "common.h"
__asm__(
  ".globl func_80125934\n"
  ".type func_80125934, @function\n"
  "func_80125934:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A73\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80125964\n\tnop\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x1A73\n\tj .L80125A54\n\tnop\n\t.L80125964:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A73\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1A75\n\tjal func_800F5ECC\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A75\n\tjal func_800F5F20\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801259B4\n\tnop\n\tjal func_800F7500\n\tori $a0, $zero, 0xFE00\n\tj .L801259BC\n\tnop\n\t.L801259B4:\n\tjal func_800F7500\n\tori $a0, $zero, 0xFE14\n\t.L801259BC:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5\n\t.L801259C4:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6DE8\n\taddu $a0, $zero, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6DE8\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_80125130\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801259C4\n\tnop\n\t.L80125A54:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80125934, .-func_80125934\n"
);
