#include "common.h"
__asm__(
  ".globl func_80104F1C\n"
  ".type func_80104F1C, @function\n"
  "func_80104F1C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x709\n\tjal func_800F96E0\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F9690\n\tnop\n\tjal func_800F6A78\n\taddiu $a0, $zero, 0xA1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80104F94\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80104F94\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tj .L80105088\n\tnop\n\t.L80104F94:\n\tjal func_800F9330\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F5410\n\tnop\n\tlw $v0, %gp_rel(D_8019ED58)($gp)\n\tlui $v1, %hi(D_80198AC4)\n\tlhu $a1, 0x0($v0)\n\taddiu $v1, $v1, %lo(D_80198AC4)\n\taddu $a1, $a1, $v1\n\tlbu $a0, 0x0($a1)\n\tjal func_800F4008\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80105078\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1707\n\tjal func_800F5410\n\tnop\n\tlw $v0, %gp_rel(D_8019ED58)($gp)\n\tlui $v1, %hi(D_80198ACC)\n\tlhu $a1, 0x0($v0)\n\taddiu $v1, $v1, %lo(D_80198ACC)\n\taddu $a1, $a1, $v1\n\tlbu $a0, 0x0($a1)\n\tjal func_800F4008\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80105078\n\tnop\n\tjal func_8010D54C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x7F4C00 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F4C00 & 0xFFFF)\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80105078\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xEE\n\tj .L80105080\n\tnop\n\t.L80105078:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L80105080:\n\tjal func_800F95A0\n\tnop\n\t.L80105088:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80104F1C, .-func_80104F1C\n"
);
