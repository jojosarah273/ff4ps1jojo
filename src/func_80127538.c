#include "common.h"
__asm__(
  ".globl func_80127538\n"
  ".type func_80127538, @function\n"
  "func_80127538:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x73\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x74\n\tjal func_800F926C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_80123958\n\tnop\n\tjal func_80123958\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x73\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1D\n\tjal func_8011F360\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801275C0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\t.L801275C0:\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xA\n\tjal func_800F3D48\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xC\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x73\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_8011F3F8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5D\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5E\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x6\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC8\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x8\n\tjal func_800F9448\n\tnop\n\tjal func_800F960C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80127538, .-func_80127538\n"
);
