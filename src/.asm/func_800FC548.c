#include "common.h"
__asm__(
  ".globl func_800FC548\n"
  ".type func_800FC548, @function\n"
  "func_800FC548:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5C\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x200\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x204\n\tjal func_800F71DC\n\tori $a0, $zero, 0x92A5\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x201\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x203\n\tjal func_800F71DC\n\tori $a0, $zero, 0x9480\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x205\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x207\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FC548, .-func_800FC548\n"
);
