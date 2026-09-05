#include "common.h"
__asm__(
  ".globl func_8014AF74\n"
  ".type func_8014AF74, @function\n"
  "func_8014AF74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014AFA4\n\tnop\n\tjal func_801420D4\n\tnop\n\tj .L8014B034\n\tnop\n\t.L8014AFA4:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3522\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014B034\n\tnop\n\tjal func_8014B9B4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F9200\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x34C4\n\txori $v0, $v0, 0x80\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x49\n\tjal func_800F9200\n\tnop\n\tjal func_8014B044\n\tnop\n\tjal func_801420D4\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x49\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C4\n\t.L8014B034:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AF74, .-func_8014AF74\n"
);
