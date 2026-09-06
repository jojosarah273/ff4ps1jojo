#include "common.h"
__asm__(
  ".globl func_801408E4\n"
  ".type func_801408E4, @function\n"
  "func_801408E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8188\n\tori $a0, $zero, 0xEF88\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8188\n\tori $a0, $zero, 0xF433\n\tjal func_800F8188\n\tori $a0, $zero, 0xF435\n\tjal func_800F8188\n\tori $a0, $zero, 0xF434\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\tori $a0, $zero, 0xEF87\n\tjal func_800F8F74\n\tori $a0, $zero, 0xEF89\n\tjal func_800F8F74\n\tori $a0, $zero, 0xEF8A\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801408E4, .-func_801408E4\n"
);
