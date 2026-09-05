#include "common.h"
__asm__(
  ".globl func_8016D4D8\n"
  ".type func_8016D4D8, @function\n"
  "func_8016D4D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x7D19\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x36\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x7D1E\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x38\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x7D1B\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x39\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x39\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x7D1D\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3A\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8016D574:\n\tlui $v1, %hi(D_800D0036)\n\tlhu $v1, %lo(D_800D0036)($v1)\n\tori $v0, $zero, 0xEAC5\n\tbne $v1, $v0, .L8016D590\n\tori $v0, $zero, 0xF820\n\tlui $at, %hi(D_800D0036)\n\tsh $v0, %lo(D_800D0036)($at)\n\t.L8016D590:\n\tjal func_800F6EA8\n\taddiu $a0, $zero, 0x36\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8016D5F0\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xF\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8016D5D8\n\tnop\n\tjal func_8016D798\n\tnop\n\tjal func_8016D768\n\tnop\n\tj .L8016D574\n\tnop\n\t.L8016D5D8:\n\tjal func_8016D600\n\tnop\n\tjal func_8016D768\n\tnop\n\tj .L8016D574\n\tnop\n\t.L8016D5F0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D4D8, .-func_8016D4D8\n"
);
