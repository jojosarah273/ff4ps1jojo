#include "common.h"
__asm__(
  ".globl func_80114EBC\n"
  ".type func_80114EBC, @function\n"
  "func_80114EBC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80114FD0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xB6\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\t.L80114EDC:\n\tjal func_800FE778\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0xF\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80114F20\n\taddiu $a0, $zero, 0x2100\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\t.L80114F20:\n\tjal func_800FE870\n\tnop\n\tjal func_80172BA8\n\tnop\n\tjal func_80115080\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F8EBC\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_8011511C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4\n\tjal func_80115038\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80114EDC\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x80\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80114EBC, .-func_80114EBC\n"
);
