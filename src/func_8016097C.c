#include "common.h"
__asm__(
  ".globl func_8016097C\n"
  ".type func_8016097C, @function\n"
  "func_8016097C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80160A0C\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801609C4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5D\n\tj .L80160A2C\n\tnop\n\t.L801609C4:\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_80152224\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF8\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x26D4\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x3E\n\t.L80160A0C:\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x31\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x4D\n\t.L80160A2C:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x26D2\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x3584\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016097C, .-func_8016097C\n"
);
