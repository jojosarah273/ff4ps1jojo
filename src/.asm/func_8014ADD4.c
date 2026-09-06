#include "common.h"
__asm__(
  ".globl func_8014ADD4\n"
  ".type func_8014ADD4, @function\n"
  "func_8014ADD4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_8014AD44\n\tnop\n\tjal func_8014D680\n\tnop\n\tjal func_801428FC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF47F\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014ADD4, .-func_8014ADD4\n"
);
