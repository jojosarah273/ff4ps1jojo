#include "common.h"
__asm__(
  ".globl func_8012E758\n"
  ".type func_8012E758, @function\n"
  "func_8012E758:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x43\n\tsll $v0, $v0, 5\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x43\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x20\n\t.L8012E78C:\n\tjal func_800F6D70\n\tori $a0, $zero, 0xFE28\n\tjal func_800F8960\n\tori $a0, $zero, 0xA160\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012E78C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012E758, .-func_8012E758\n"
);
