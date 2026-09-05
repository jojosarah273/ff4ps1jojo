#include "common.h"
__asm__(
  ".globl func_8016E870\n"
  ".type func_8016E870, @function\n"
  "func_8016E870:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x5\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8016E8A4:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x13\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016E924\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016E90C\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2004\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8016E98C\n\tnop\n\t.L8016E90C:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x357C\n\tj .L8016E98C\n\tnop\n\t.L8016E924:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x80\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016E8A4\n\tnop\n\t.L8016E98C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016E870, .-func_8016E870\n"
);
