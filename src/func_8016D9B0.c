#include "common.h"
__asm__(
  ".globl func_8016D9B0\n"
  ".type func_8016D9B0, @function\n"
  "func_8016D9B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x7D1F\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016DB20\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016DB20\n\tnop\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x92\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x90\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4352\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4354\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4350\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4351\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4355\n\tjal func_800F9868\n\taddiu $a0, $zero, 0x50\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F9448\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x90\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x7FFF\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x90\n\tori $v0, $v0, 0x8000\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x92\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x80\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x3FFF\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x92\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8016DB20:\n\tjal func_8016D850\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D9B0, .-func_8016D9B0\n"
);
