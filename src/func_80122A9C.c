#include "common.h"
__asm__(
  ".globl func_80122A9C\n"
  ".type func_80122A9C, @function\n"
  "func_80122A9C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_8012281C\n\tsw $s0, 0x10($sp)\n\tjal func_80120E2C\n\tlui $s0, %hi(D_80199190)\n\taddiu $s0, $s0, %lo(D_80199190)\n\tlhu $a0, 0xC($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0xA($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_80120F1C\n\tnop\n\tlhu $a0, 0xE($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FB74\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A02\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80122B44\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x24\n\tjal func_800F8188\n\tori $a0, $zero, 0xCA31\n\tjal func_800F8188\n\tori $a0, $zero, 0xCA33\n\tjal func_800F8188\n\tori $a0, $zero, 0xCA35\n\tjal func_800F8188\n\tori $a0, $zero, 0xCA37\n\tjal func_800F8188\n\tori $a0, $zero, 0xC9F5\n\t.L80122B44:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80122A9C, .-func_80122A9C\n"
);
