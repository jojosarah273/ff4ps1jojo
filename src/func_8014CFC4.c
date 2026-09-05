#include "common.h"
__asm__(
  ".globl func_8014CFC4\n"
  ".type func_8014CFC4, @function\n"
  "func_8014CFC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF2D0\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8014D004\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014D070\n\tnop\n\t.L8014D004:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF27A\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8014D038:\n\tjal func_800F8960\n\tori $a0, $zero, 0xF251\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014D038\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF2A0\n\tjal func_8014E424\n\tnop\n\t.L8014D070:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014CFC4, .-func_8014CFC4\n"
);
