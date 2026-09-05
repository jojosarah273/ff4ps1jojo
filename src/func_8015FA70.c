#include "common.h"
__asm__(
  ".globl func_8015FA70\n"
  ".type func_8015FA70, @function\n"
  "func_8015FA70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8015254C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3949\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x270F\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015FAB0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x270F\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3949\n\t.L8015FAB0:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3949\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA4\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x394A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xA5\n\tori $v0, $v0, 0x80\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015FA70, .-func_8015FA70\n"
);
