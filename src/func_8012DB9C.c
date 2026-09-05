#include "common.h"
__asm__(
  ".globl func_8012DB9C\n"
  ".type func_8012DB9C, @function\n"
  "func_8012DB9C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_80199190)\n\taddiu $s0, $s0, %lo(D_80199190)\n\tsw $ra, 0x14($sp)\n\tlhu $a0, 0x5A($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0x60($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC3\n\tjal func_800F8188\n\tori $a0, $zero, 0xBA10\n\tjal func_800F8188\n\tori $a0, $zero, 0xBA90\n\tjal func_800F8188\n\tori $a0, $zero, 0xBB10\n\tjal func_800F8188\n\tori $a0, $zero, 0xBB90\n\tjal func_800F8188\n\tori $a0, $zero, 0xBC10\n\tjal func_800F8188\n\tori $a0, $zero, 0xB9B2\n\tjal func_800F8188\n\tori $a0, $zero, 0xBA32\n\tjal func_800F8188\n\tori $a0, $zero, 0xBAB2\n\tjal func_800F8188\n\tori $a0, $zero, 0xBB32\n\tjal func_800F8188\n\tori $a0, $zero, 0xBBB2\n\tjal func_800F8188\n\tori $a0, $zero, 0xBC32\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC6\n\tjal func_800F8188\n\tori $a0, $zero, 0xBA38\n\tjal func_800F8188\n\tori $a0, $zero, 0xBB38\n\tjal func_800F8188\n\tori $a0, $zero, 0xBC38\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC7\n\tjal func_800F8188\n\tori $a0, $zero, 0xB890\n\tjal func_800F8188\n\tori $a0, $zero, 0xB910\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012DB9C, .-func_8012DB9C\n"
);
