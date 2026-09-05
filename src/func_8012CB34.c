#include "common.h"
__asm__(
  ".globl func_8012CB34\n"
  ".type func_8012CB34, @function\n"
  "func_8012CB34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F7894\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 6\n\tjal func_800F516C\n\tsh $v0, 0x0($v1)\n\tjal func_800F5050\n\tnop\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x45\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x1\n\tjal func_800F41E8\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8012CBAC\n\tnop\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x20\n\t.L8012CBAC:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x4A\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x2\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x40\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x42\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012CB34, .-func_8012CB34\n"
);
