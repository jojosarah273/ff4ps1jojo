#include "common.h"
__asm__(
  ".globl func_801282D4\n"
  ".type func_801282D4, @function\n"
  "func_801282D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B47\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012830C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A3C\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012831C\n\tnop\n\t.L8012830C:\n\tjal func_800F5480\n\tnop\n\tj .L8012832C\n\tnop\n\t.L8012831C:\n\tjal func_800F5CCC\n\tnop\n\tjal func_8012833C\n\tnop\n\t.L8012832C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801282D4, .-func_801282D4\n"
);
