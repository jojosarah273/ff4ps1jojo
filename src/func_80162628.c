#include "common.h"
__asm__(
  ".globl func_80162628\n"
  ".type func_80162628, @function\n"
  "func_80162628:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80153218\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80162670\n\tnop\n\tjal func_8015329C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tj .L80162688\n\tnop\n\t.L80162670:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x26D2\n\tjal func_80062B08\n\tnop\n\t.L80162688:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xB\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C7\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80162628, .-func_80162628\n"
);
