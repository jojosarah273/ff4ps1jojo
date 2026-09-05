#include "common.h"
__asm__(
  ".globl func_801776E8\n"
  ".type func_801776E8, @function\n"
  "func_801776E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, %hi(D_801A0B00)\n\taddiu $a0, $a0, %lo(D_801A0B00)\n\taddiu $v0, $zero, 0x80\n\tsw $ra, 0x10($sp)\n\tlui $at, %hi(D_800D2100)\n\tsb $v0, %lo(D_800D2100)($at)\n\tjal func_801947B8\n\taddiu $a1, $zero, 0x29\n\tlui $a0, %hi(D_801B5810)\n\taddiu $a0, $a0, %lo(D_801B5810)\n\tjal func_801947B8\n\taddiu $a1, $zero, 0x29\n\tori $v1, $zero, 0xFFFF\n\tlui $v0, %hi(D_801E09CC)\n\tsh $v1, %gp_rel(D_8019EE08)($gp)\n\tlui $at, %hi(D_8019ED30)\n\tsb $zero, %lo(D_8019ED30)($at)\n\tsh $zero, %gp_rel(D_8019EE54)($gp)\n\tsh $zero, %gp_rel(D_8019EE02)($gp)\n\tsh $zero, %gp_rel(D_8019EE00)($gp)\n\tsh $zero, %gp_rel(D_8019EE32)($gp)\n\tlui $at, %hi(D_8019ED08)\n\tsb $zero, %lo(D_8019ED08)($at)\n\tlui $at, %hi(D_8019ED00)\n\tsb $zero, %lo(D_8019ED00)($at)\n\tlui $at, %hi(D_8019ECFF)\n\tsb $zero, %lo(D_8019ECFF)($at)\n\tlui $at, %hi(D_8019ED78)\n\tsh $zero, %lo(D_8019ED78)($at)\n\tlui $at, %hi(D_8019EE98)\n\tsh $v1, %lo(D_8019EE98)($at)\n\tjal func_800F9BD0\n\tsh $v1, %lo(D_801E09CC)($v0)\n\tjal func_801928C8\n\tnop\n\tjal func_80192BEC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801776E8, .-func_801776E8\n"
);
