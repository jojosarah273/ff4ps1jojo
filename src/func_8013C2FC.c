#include "common.h"
__asm__(
  ".globl func_8013C2FC\n"
  ".type func_8013C2FC, @function\n"
  "func_8013C2FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L8013C304:\n\tjal func_801210AC\n\tnop\n\tlui $v0, %hi(D_80199266)\n\tlhu $a0, %lo(D_80199266)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_8013C44C\n\tnop\n\tjal func_8011F684\n\tnop\n\tjal func_80126418\n\tnop\n\tjal func_8011F884\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013C38C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x60\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x60\n\tnor $v0, $zero, $v0\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\t.L8013C38C:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013C3DC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013C43C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x60\n\t.L8013C3DC:\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L8013C43C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013C304\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x60\n\tjal func_8013C44C\n\tnop\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1A83\n\tjal func_8013BFFC\n\tnop\n\t.L8013C43C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013C2FC, .-func_8013C2FC\n"
);
