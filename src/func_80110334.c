#include "common.h"
__asm__(
  ".globl func_80110334\n"
  ".type func_80110334, @function\n"
  "func_80110334:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80110024\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\t.L8011035C:\n\tjal func_800FE778\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8011038C\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\t.L8011038C:\n\tjal func_800FE870\n\tnop\n\tjal func_80110474\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x68\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x91\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x78\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8F\n\tjal func_800F7500\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x92\n\tjal func_8011581C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF0\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x411\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x415\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011035C\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xC8\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110334, .-func_80110334\n"
);
