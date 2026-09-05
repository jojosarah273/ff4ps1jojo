#include "common.h"
__asm__(
  ".globl func_801368E8\n"
  ".type func_801368E8, @function\n"
  "func_801368E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\tori $a0, $zero, 0xFE15\n\tjal func_800F8F74\n\tori $a0, $zero, 0xFE19\n\tjal func_800F8F74\n\tori $a0, $zero, 0xFE1D\n\tjal func_800F8F74\n\tori $a0, $zero, 0xFE21\n\tjal func_800F8F74\n\tori $a0, $zero, 0xFE25\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B7B\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 2\n\tjal func_801224D0\n\tsb $v0, 0x0($v1)\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1B55\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L801369A8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801369A8\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B39\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L80136980:\n\tjal func_801369B8\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80136980\n\tnop\n\t.L801369A8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801368E8, .-func_801368E8\n"
);
