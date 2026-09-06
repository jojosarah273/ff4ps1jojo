#include "common.h"
__asm__(
  ".globl func_80135F7C\n"
  ".type func_80135F7C, @function\n"
  "func_80135F7C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a0, %hi(D_8019EE0C)\n\tlw $a0, %lo(D_8019EE0C)($a0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EE1C)\n\tlw $a0, %lo(D_8019EE1C)($a0)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EE38)\n\tlw $a0, %lo(D_8019EE38)($a0)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EDF8)\n\tlw $a0, %lo(D_8019EDF8)($a0)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EE18)\n\tlw $a0, %lo(D_8019EE18)($a0)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EE20)\n\tlw $a0, %lo(D_8019EE20)($a0)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EE3C)\n\tlw $a0, %lo(D_8019EE3C)($a0)\n\tjal func_80197698\n\tnop\n\tlui $a0, %hi(D_8019EDFC)\n\tlw $a0, %lo(D_8019EDFC)($a0)\n\tjal func_80197698\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80135F7C, .-func_80135F7C\n"
);
