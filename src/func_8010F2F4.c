#include "common.h"
__asm__(
  ".globl func_8010F2F4\n"
  ".type func_8010F2F4, @function\n"
  "func_8010F2F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x24\n\tjal func_8010F484\n\tnop\n\t.L8010F31C:\n\tjal func_800FE778\n\tnop\n\tjal func_800FE870\n\tnop\n\tjal func_8011416C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x24\n\tlui $v1, %hi(D_8019ED68)\n\tlw $v1, %lo(D_8019ED68)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0xFD\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED50)\n\tlw $a0, %lo(D_8019ED50)($a0)\n\tlui $a1, %hi(D_8019ED68)\n\tlw $a1, %lo(D_8019ED68)($a1)\n\tlbu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tbnez $v0, .L8010F3A4\n\tnop\n\tori $v1, $v1, 0x2\n\t.L8010F3A4:\n\tjal func_800F53C0\n\tsb $v1, 0x0($a1)\n\tbeqz $v0, .L8010F3E4\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x60\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x50\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE\n\tjal func_801105A4\n\tnop\n\t.L8010F3E4:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010F31C\n\tnop\n\tjal func_8011053C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1288\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xFB\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1288\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3\n\t.L8010F42C:\n\tjal func_800F9330\n\tnop\n\tjal func_8010F68C\n\tnop\n\tjal func_8010F4DC\n\tnop\n\tjal func_80118938\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010F42C\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010F2F4, .-func_8010F2F4\n"
);
