#include "common.h"
__asm__(
  ".globl func_8012C584\n"
  ".type func_8012C584, @function\n"
  "func_8012C584:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x3\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x60\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012C5D0\n\tlui $v0, %hi(D_801991AE)\n\tlhu $a0, %lo(D_801991AE)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8012C2F8\n\tnop\n\tj .L8012C6A8\n\tnop\n\t.L8012C5D0:\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x16\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x60\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x43\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 1\n\tjal func_800F516C\n\tsh $v0, 0x0($v1)\n\tjal func_800F5050\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x7\n\tjal func_800F3A70\n\taddiu $a0, $zero, 0x60\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F5520\n\taddu $a0, $v0, $a0\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8012C678\n\tnop\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\t.L8012C678:\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x3\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x60\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x60\n\tjal func_801221EC\n\tnop\n\t.L8012C6A8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C584, .-func_8012C584\n"
);
