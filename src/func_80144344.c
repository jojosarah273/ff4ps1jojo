#include "common.h"
__asm__(
  ".globl func_80144344\n"
  ".type func_80144344, @function\n"
  "func_80144344:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8013EF78\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF327\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x12\n\tjal func_8014202C\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF327\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x20\n\t.L8014437C:\n\tjal func_80140558\n\tnop\n\tjal func_80141E80\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014437C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x62\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2107\n\tjal func_800F971C\n\tnop\n\tjal func_800F8188\n\tori $a0, $zero, 0xF133\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\tori $a0, $zero, 0xF134\n\t.L801443D4:\n\tjal func_80140558\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF133\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8014442C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2130\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x212D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x41\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2131\n\tjal func_8014C8CC\n\tnop\n\t.L8014442C:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\t.L80144444:\n\tjal func_800F6564\n\tori $a0, $zero, 0xF133\n\tjal func_80149A98\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF134\n\tjal func_80149A98\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x6\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80144444\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF133\n\tjal func_800F6240\n\tori $a0, $zero, 0xF134\n\tjal func_800F6564\n\tori $a0, $zero, 0xF133\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801443D4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F6240\n\tori $a0, $zero, 0xF483\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80144344, .-func_80144344\n"
);
