#include "common.h"
__asm__(
  ".globl func_8013F49C\n"
  ".type func_8013F49C, @function\n"
  "func_8013F49C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x47\n\tlui $a0, (0xDFD17 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDFD17 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x2A16\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F8D6C\n\tsh $v1, 0x0($a1)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xA\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1E\n\tjal func_8013F354\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x22\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8188\n\tori $a0, $zero, 0xF07A\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8188\n\tori $a0, $zero, 0xF079\n\tjal func_800F95A0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8768\n\tori $a0, $zero, 0xEFD0\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F8188\n\tori $a0, $zero, 0xF078\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013F49C, .-func_8013F49C\n"
);
