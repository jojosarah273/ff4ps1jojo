#include "common.h"
__asm__(
  ".globl func_80110B08\n"
  ".type func_80110B08, @function\n"
  "func_80110B08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x68\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x300\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x78\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x304\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x301\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x305\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2\n\tsrl $v0, $v0, 2\n\tjal func_800F4248\n\tsb $v0, 0x0($v1)\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x302\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x306\n\txori $v0, $v0, 0x2\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x37\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x303\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x307\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110B08, .-func_80110B08\n"
);
