#include "common.h"
__asm__(
  ".globl func_80124D08\n"
  ".type func_80124D08, @function\n"
  "func_80124D08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_80124B74\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9410\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0xE\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x41\n\t.L80124D70:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x163\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x29\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x7\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80124D70\n\tnop\n\tjal func_800F960C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124D08, .-func_80124D08\n"
);
