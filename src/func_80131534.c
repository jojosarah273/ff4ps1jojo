#include "common.h"
__asm__(
  ".globl func_80131534\n"
  ".type func_80131534, @function\n"
  "func_80131534:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80132428\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0xB\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B89\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xE\n\tjal func_800F9200\n\tnop\n\tjal func_80177178\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F71DC\n\tori $a0, $zero, 0xB760\n\tjal func_80120070\n\tnop\n\tjal func_80126B88\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A86\n\tjal func_80120F94\n\tnop\n\tlui $v0, %hi(D_801991C2)\n\tlhu $a0, %lo(D_801991C2)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_80130884\n\tnop\n\tjal func_8012F9D0\n\tnop\n\tjal func_80130C74\n\tnop\n\tjal func_8012B168\n\tnop\n\tjal func_80126458\n\tnop\n\tlui $a0, %hi(D_801D7D68)\n\taddiu $a0, $a0, %lo(D_801D7D68)\n\taddiu $a1, $zero, 0x300\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, -0x1\n\tjal func_8011F6A4\n\tnop\n\tjal func_8011FF40\n\tnop\n\tjal func_80120E2C\n\tnop\n\tjal func_80122904\n\tnop\n\tjal func_80126528\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80131534, .-func_80131534\n"
);
