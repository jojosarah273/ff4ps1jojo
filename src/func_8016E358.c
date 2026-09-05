#include "common.h"
__asm__(
  ".globl func_8016E358\n"
  ".type func_8016E358, @function\n"
  "func_8016E358:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x7D21\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016E410\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x2121\n\tjal func_800F922C\n\tnop\n\t.L8016E398:\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x2103\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x2105\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016E398\n\tnop\n\tjal func_800F9410\n\tnop\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x2109\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x7D24\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016E480\n\tnop\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x7D21\n\t.L8016E410:\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x7D22\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016E480\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x7D21\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x7D23\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1A\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x7D24\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x7D26\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x7D26\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xEE00\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x7D22\n\t.L8016E480:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016E358, .-func_8016E358\n"
);
