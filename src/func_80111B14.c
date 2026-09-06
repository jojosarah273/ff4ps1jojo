#include "common.h"
__asm__(
  ".globl func_80111B14\n"
  ".type func_80111B14, @function\n"
  "func_80111B14:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\tori $a0, $zero, 0x90A8\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x58\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2E\n\tjal func_80176060\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1728\n\tjal func_800FB09C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_80111BBC\n\tnop\n\tjal func_800FE870\n\tnop\n\tjal func_80111C2C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80111B14, .-func_80111B14\n"
);
