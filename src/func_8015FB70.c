#include "common.h"
__asm__(
  ".globl func_8015FB70\n"
  ".type func_8015FB70, @function\n"
  "func_8015FB70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x38E6\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8015FBA4:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x29B5\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8015FBD4\n\tnop\n\tjal func_800F6364\n\tnop\n\tj .L8015FBA4\n\tnop\n\t.L8015FBD4:\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_8016046C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015FB70, .-func_8015FB70\n"
);
