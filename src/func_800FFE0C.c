#include "common.h"
__asm__(
  ".globl func_800FFE0C\n"
  ".type func_800FFE0C, @function\n"
  "func_800FFE0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFEEC\n\taddu $v0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFEEC\n\taddu $v0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5C\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFEEC\n\taddu $v0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L800FFEEC\n\taddu $v0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x54\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L800FFEEC\n\taddu $v0, $zero, $zero\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x54\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xEA\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFECC\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xEA\n\t.L800FFECC:\n\tjal func_800FFEFC\n\tnop\n\tjal func_8010A964\n\tnop\n\taddu $v1, $v0, $zero\n\tbnez $v1, .L800FFEEC\n\taddiu $v0, $zero, 0x1\n\taddu $v0, $zero, $zero\n\t.L800FFEEC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FFE0C, .-func_800FFE0C\n"
);
