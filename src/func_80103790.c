#include "common.h"
__asm__(
  ".globl func_80103790\n"
  ".type func_80103790, @function\n"
  "func_80103790:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1708\n\tjal func_80103A28\n\tnop\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFF98\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x5A\n\tjal func_80103F40\n\tnop\n\tlui $a0, %hi(D_801CFD68)\n\taddiu $a0, $a0, %lo(D_801CFD68)\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddu $a3, $zero, $zero\n\tlui $a0, %hi(D_801D7D68)\n\taddiu $a0, $a0, %lo(D_801D7D68)\n\taddiu $a1, $zero, 0x300\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, -0x1\n\taddiu $v0, $zero, 0x100\n\tori $v1, $zero, 0xFFFF\n\tlui $at, %hi(D_8019EE2C)\n\tsh $v0, %lo(D_8019EE2C)($at)\n\tlui $at, %hi(D_8019EE2E)\n\tsh $v1, %lo(D_8019EE2E)($at)\n\tjal func_80103B98\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x198\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x5A\n\tjal func_80103F40\n\tnop\n\tjal func_80103DD8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1727\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x170C\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1706\n\tjal func_800FB224\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_8017559C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_80103AC8\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x172C\n\tlw $ra, 0x10($sp)\n\tlui $at, %hi(D_8019EE2E)\n\tsh $zero, %lo(D_8019EE2E)($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103790, .-func_80103790\n"
);
