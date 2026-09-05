#include "common.h"
__asm__(
  ".globl func_8014AEC4\n"
  ".type func_8014AEC4, @function\n"
  "func_8014AEC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF42F\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x34C4\n\txori $v0, $v0, 0x80\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x49\n\tjal func_800F8188\n\tori $a0, $zero, 0xF431\n\tjal func_8014B044\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3523\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C5\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AEC4, .-func_8014AEC4\n"
);
