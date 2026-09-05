#include "common.h"
__asm__(
  ".globl func_8014D31C\n"
  ".type func_8014D31C, @function\n"
  "func_8014D31C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF279\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014D34C\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF283\n\tj .L8014D384\n\tnop\n\t.L8014D34C:\n\tjal func_800F6564\n\tori $a0, $zero, 0xF282\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014D384\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF282\n\tjal func_800F971C\n\tnop\n\tjal func_800999C8\n\tnop\n\t.L8014D384:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D31C, .-func_8014D31C\n"
);
