#include "common.h"
__asm__(
  ".globl func_8019311C\n"
  ".type func_8019311C, @function\n"
  "func_8019311C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019BE6C)\n\taddiu $s0, $s0, %lo(D_8019BE6C)\n\tsw $ra, 0x14($sp)\n\tlhu $v0, 0x0($s0)\n\tnop\n\tbnez $v0, .L80193180\n\tnop\n\tjal func_801976D8\n\taddiu $a0, $s0, 0x38\n\tlui $a0, %hi(D_8019CEFC)\n\tlw $a0, %lo(D_8019CEFC)($a0)\n\tlhu $v1, 0x32($s0)\n\taddiu $v0, $zero, 0x1\n\tsh $v0, 0x0($s0)\n\tsh $v1, 0x0($a0)\n\tlui $v1, %hi(D_8019CF00)\n\tlw $v1, %lo(D_8019CF00)($v1)\n\tlw $v0, 0x34($s0)\n\tnop\n\tjal func_801976F8\n\tsw $v0, 0x0($v1)\n\tj .L80193184\n\taddu $v0, $s0, $zero\n\t.L80193180:\n\taddu $v0, $zero, $zero\n\t.L80193184:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019311C, .-func_8019311C\n"
);
