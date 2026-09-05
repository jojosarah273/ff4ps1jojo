#include "common.h"
__asm__(
  ".globl func_8014046C\n"
  ".type func_8014046C, @function\n"
  "func_8014046C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80140498:\n\tjal func_800F939C\n\tnop\n\tjal func_80140558\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x26\n\tjal func_80140350\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x26\n\tjal func_80140350\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x27\n\tjal func_80140350\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x27\n\tjal func_80140350\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x6\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x27\n\tjal func_80140350\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80140498\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014046C, .-func_8014046C\n"
);
