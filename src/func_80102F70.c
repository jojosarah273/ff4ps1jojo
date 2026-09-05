#include "common.h"
__asm__(
  ".globl func_80102F70\n"
  ".type func_80102F70, @function\n"
  "func_80102F70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1715\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1715\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80102FC0\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1716\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1707\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1717\n\t.L80102FC0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAC\n\tjal func_800FD718\n\tnop\n\tjal func_80102414\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80102F70, .-func_80102F70\n"
);
