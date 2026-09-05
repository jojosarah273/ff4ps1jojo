#include "common.h"
__asm__(
  ".globl func_80141E80\n"
  ".type func_80141E80, @function\n"
  "func_80141E80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF321\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\tori $a0, $zero, 0xF321\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80141EC8\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF32B\n\t.L80141EC8:\n\tjal func_800F6564\n\tori $a0, $zero, 0xF32B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80141F3C\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF329\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80141F3C\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF32B\n\tlui $a0, (0xDFD5C >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDFD5C & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\tori $a0, $zero, 0xF329\n\tjal func_800F6240\n\tori $a0, $zero, 0xF32B\n\t.L80141F3C:\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141E80, .-func_80141E80\n"
);
