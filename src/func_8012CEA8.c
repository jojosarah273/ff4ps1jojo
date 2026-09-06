#include "common.h"
__asm__(
  ".globl func_8012CEA8\n"
  ".type func_8012CEA8, @function\n"
  "func_8012CEA8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B3B\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xE1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A03\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1B19\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x93\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1BA5\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x1A65\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tlw $ra, 0x10($sp)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012CEA8, .-func_8012CEA8\n"
);
