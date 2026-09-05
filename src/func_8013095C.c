#include "common.h"
__asm__(
  ".globl func_8013095C\n"
  ".type func_8013095C, @function\n"
  "func_8013095C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x24\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x130\n\tjal func_80130A74\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1B0\n\tjal func_80130A74\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x230\n\tjal func_80130A74\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B81\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801309C4\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x130\n\tj .L801309F4\n\tnop\n\t.L801309C4:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801309EC\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1B0\n\tj .L801309F4\n\tnop\n\t.L801309EC:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x230\n\t.L801309F4:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9200\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x5\n\tjal func_80130A24\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013095C, .-func_8013095C\n"
);
