#include "common.h"
__asm__(
  ".globl func_80152224\n"
  ".type func_80152224, @function\n"
  "func_80152224:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8D40\n\taddiu $a0, $zero, 0x96\n\tjal func_800F58BC\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80152354\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80152354\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x96\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80152354\n\tnop\n\tjal func_800F7248\n\taddiu $a0, $zero, 0x97\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x96\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801522D4\n\tnop\n\tjal func_800F6B38\n\taddiu $a0, $zero, 0x1900\n\tj .L80152354\n\tnop\n\t.L801522D4:\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3947\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x3948\n\tjal func_800F6B38\n\taddiu $a0, $zero, 0x1900\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tlui $a1, %hi(D_8019ED5C)\n\tlw $a1, %lo(D_8019ED5C)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3945\n\tjal func_800F8CD4\n\tsb $v1, 0x0($a1)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x10\n\tjal func_8015254C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x10\n\tjal func_800F5410\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x394B\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x96\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x97\n\t.L80152354:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x10\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152224, .-func_80152224\n"
);
