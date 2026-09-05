#include "common.h"
__asm__(
  ".globl func_801069E0\n"
  ".type func_801069E0, @function\n"
  "func_801069E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x7F\n\tsw $ra, 0x14($sp)\n\tjal func_800F6630\n\tsw $s0, 0x10($sp)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80106A84\n\taddiu $a0, $zero, 0xDA\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xDA\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tjal func_800F5410\n\tsb $v0, 0x0($v1)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x90\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4209\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420A\n\tlui $s0, %hi(D_8019FFE8)\n\taddiu $s0, $s0, %lo(D_8019FFE8)\n\tlhu $a2, 0x34($s0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\taddiu $a0, $zero, 0xBB\n\tsh $a2, 0x3E($s0)\n\tlbu $v0, 0x0($a1)\n\taddiu $v1, $zero, 0x100\n\tsh $v1, 0x38($s0)\n\tsubu $v0, $v0, $a2\n\tjal func_800F6630\n\tsh $v0, 0x42($s0)\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v1, 0x0($v0)\n\tj .L80106B0C\n\tsh $v1, 0x3A($s0)\n\t.L80106A84:\n\tlui $s0, %hi(D_8019FFE8)\n\taddiu $s0, $s0, %lo(D_8019FFE8)\n\tlui $at, %hi(D_8019EE64)\n\tsh $zero, %lo(D_8019EE64)($at)\n\tjal func_800F6630\n\tsh $zero, 0x46($s0)\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tsb $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($a0)\n\tnop\n\tnor $v0, $zero, $v0\n\tjal func_800F5410\n\tsb $v0, 0x0($a0)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x89\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tlui $at, %hi(D_8019EE6C)\n\tsh $v0, %lo(D_8019EE6C)($at)\n\tlbu $a1, 0x0($v1)\n\tlhu $v0, 0x42($s0)\n\taddiu $a0, $zero, 0x81\n\tsh $v0, 0x4C($s0)\n\tjal func_800F654C\n\tsh $a1, 0x48($s0)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\t.L80106B0C:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801069E0, .-func_801069E0\n"
);
