#include "common.h"
__asm__(
  ".globl func_801533FC\n"
  ".type func_801533FC, @function\n"
  "func_801533FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80153430:\n\tjal func_800F67FC\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801534C8\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1800\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801534B0\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F67FC\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1801\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801534B8\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xA9\n\tj .L801534C8\n\tnop\n\t.L801534B0:\n\tjal func_800F63BC\n\tnop\n\t.L801534B8:\n\tjal func_800F63BC\n\tnop\n\tj .L80153430\n\tnop\n\t.L801534C8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801533FC, .-func_801533FC\n"
);
