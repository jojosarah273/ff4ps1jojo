#include "common.h"
__asm__(
  ".globl func_8016BD78\n"
  ".type func_8016BD78, @function\n"
  "func_8016BD78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_800F9330\n\tsw $s0, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x18\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $s0, 0x0($v0)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tmult $v0, $s0\n\tmflo $v0\n\tlui $at, %hi(D_800D4216)\n\tsh $v0, %lo(D_800D4216)($at)\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x4216\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F9448\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BD78, .-func_8016BD78\n"
);
