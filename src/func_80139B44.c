#include "common.h"
__asm__(
  ".globl func_80139B44\n"
  ".type func_80139B44, @function\n"
  "func_80139B44:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80139CA4\n\tnop\n\tjal func_80139694\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BAF\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80139B8C\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1340\n\tjal func_800F63F8\n\tnop\n\tj .L80139B9C\n\tnop\n\t.L80139B8C:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F63F8\n\tnop\n\t.L80139B9C:\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80139BFC\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80139BFC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B39\n\tjal func_800F971C\n\tnop\n\t.L80139BD4:\n\tjal func_80139C0C\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80139BD4\n\tnop\n\t.L80139BFC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139B44, .-func_80139B44\n"
);
