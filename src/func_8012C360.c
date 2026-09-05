#include "common.h"
__asm__(
  ".globl func_8012C360\n"
  ".type func_8012C360, @function\n"
  "func_8012C360:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8012C0A8\n\tnop\n\taddiu $v1, $zero, 0x2\n\tbeq $v0, $v1, .L8012C41C\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x7\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F3A70\n\taddiu $a0, $zero, 0x60\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F5520\n\taddu $a0, $v0, $a0\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8012C3FC\n\tnop\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x60\n\t.L8012C3FC:\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8012C41C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C360, .-func_8012C360\n"
);
