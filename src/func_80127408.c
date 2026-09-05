#include "common.h"
__asm__(
  ".globl func_80127408\n"
  ".type func_80127408, @function\n"
  "func_80127408:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8012214C\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0x7006AA >> 16)\n\tjal func_800F65F0\n\tori $a0, $a0, (0x7006AA & 0xFFFF)\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA042\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA04A\n\tlui $a0, (0x700EAA >> 16)\n\tjal func_800F65F0\n\tori $a0, $a0, (0x700EAA & 0xFFFF)\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA002\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA00A\n\tlui $a0, (0x7016AA >> 16)\n\tjal func_800F65F0\n\tori $a0, $a0, (0x7016AA & 0xFFFF)\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA0C2\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA0CA\n\tlui $a0, (0x701EAA >> 16)\n\tjal func_800F65F0\n\tori $a0, $a0, (0x701EAA & 0xFFFF)\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA082\n\tjal func_800F81B0\n\tori $a0, $zero, 0xA08A\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F971C\n\tnop\n\tjal func_801287B8\n\tnop\n\tjal func_801287B8\n\tnop\n\tjal func_801287B8\n\tnop\n\tjal func_801287B8\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F8D00\n\tori $a0, $zero, 0xA022\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x34\n\tjal func_800F9200\n\tnop\n\tjal func_801210AC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x34\n\tlui $v0, %hi(D_8019921A)\n\tlhu $a0, %lo(D_8019921A)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x34\n\tjal func_8011EF0C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80127408, .-func_80127408\n"
);
