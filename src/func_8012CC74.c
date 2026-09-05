#include "common.h"
__asm__(
  ".globl func_8012CC74\n"
  ".type func_8012CC74, @function\n"
  "func_8012CC74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A02\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012CCA4\n\taddiu $v1, $zero, 0x2\n\tjal func_8012C250\n\tnop\n\tj .L8012CD5C\n\taddu $v0, $zero, $zero\n\t.L8012CCA4:\n\tlui $v0, %hi(D_800D06AB)\n\tlbu $v0, %lo(D_800D06AB)($v0)\n\tnop\n\tandi $a0, $v0, 0x7\n\tbeq $a0, $v1, .L8012CCF8\n\tslti $v0, $a0, 0x3\n\tbeqz $v0, .L8012CCD4\n\taddiu $v0, $zero, 0x1\n\tbeq $a0, $v0, .L8012CCF0\n\tlui $v1, (0x800D065C >> 16)\n\tj .L8012CD50\n\tnop\n\t.L8012CCD4:\n\taddiu $v0, $zero, 0x3\n\tbeq $a0, $v0, .L8012CD0C\n\taddiu $v0, $zero, 0x4\n\tbeq $a0, $v0, .L8012CD20\n\tlui $v1, (0x800D065A >> 16)\n\tj .L8012CD50\n\tnop\n\t.L8012CCF0:\n\tj .L8012CD24\n\tori $v1, $v1, (0x800D065C & 0xFFFF)\n\t.L8012CCF8:\n\tlui $v1, (0x800D065A >> 16)\n\tori $v1, $v1, (0x800D065A & 0xFFFF)\n\tlhu $v0, 0x0($v1)\n\tj .L8012CD34\n\tandi $v0, $v0, 0xFFF0\n\t.L8012CD0C:\n\tlui $v1, (0x800D065C >> 16)\n\tori $v1, $v1, (0x800D065C & 0xFFFF)\n\tlhu $v0, 0x0($v1)\n\tj .L8012CD34\n\tandi $v0, $v0, 0xFFF0\n\t.L8012CD20:\n\tori $v1, $v1, (0x800D065A & 0xFFFF)\n\t.L8012CD24:\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x4\n\tandi $v0, $v0, 0xFFF0\n\t.L8012CD34:\n\tsh $v0, 0x0($v1)\n\tlui $v1, %hi(D_800D06AB)\n\tlbu $v1, %lo(D_800D06AB)($v1)\n\tnop\n\tandi $v1, $v1, 0xF8\n\tlui $at, %hi(D_800D06AB)\n\tsb $v1, %lo(D_800D06AB)($at)\n\t.L8012CD50:\n\tjal func_8012CEA8\n\tnop\n\taddiu $v0, $zero, 0x1\n\t.L8012CD5C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012CC74, .-func_8012CC74\n"
);
