#include "common.h"
__asm__(
  ".globl func_80140C8C\n"
  ".type func_80140C8C, @function\n"
  "func_80140C8C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80140AC0\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2003\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2004\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2005\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2006\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF475\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF474\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140C8C, .-func_80140C8C\n"
);
