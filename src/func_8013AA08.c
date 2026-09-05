#include "common.h"
__asm__(
  ".globl func_8013AA08\n"
  ".type func_8013AA08, @function\n"
  "func_8013AA08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x45\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1BA8\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x16AA\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x20\n\tsrl $v0, $v0, 5\n\tjal func_800F9660\n\tsh $v0, 0x0($v1)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1BA9\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x46\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1BAA\n\tsrl $v0, $v0, 2\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013AA08, .-func_8013AA08\n"
);
