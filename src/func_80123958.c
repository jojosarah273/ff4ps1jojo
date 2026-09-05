#include "common.h"
__asm__(
  ".globl func_80123958\n"
  ".type func_80123958, @function\n"
  "func_80123958:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x18\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x73\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x74\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x75\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\t.L801239B8:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80123A00\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\t.L80123A00:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x73\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x74\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x75\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F7A68\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801239B8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80123958, .-func_80123958\n"
);
