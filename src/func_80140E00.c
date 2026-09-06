#include "common.h"
__asm__(
  ".globl func_80140E00\n"
  ".type func_80140E00, @function\n"
  "func_80140E00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x33C2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x56\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x33C3\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x33C4\n\tjal func_80140CFC\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF474\n\tjal func_800F6564\n\tori $a0, $zero, 0xF475\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C3\n\tjal func_8009546C\n\tnop\n\tjal func_80140D94\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140E00, .-func_80140E00\n"
);
