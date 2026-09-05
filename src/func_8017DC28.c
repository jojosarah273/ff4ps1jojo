#include "common.h"
__asm__(
  ".globl func_8017DC28\n"
  ".type func_8017DC28, @function\n"
  "func_8017DC28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $v0, %hi(D_8019F4A8)\n\taddiu $v0, $v0, %lo(D_8019F4A8)\n\taddiu $v0, $v0, 0x8\n\tlui $v1, %hi(D_8019F628)\n\taddiu $v1, $v1, %lo(D_8019F628)\n\taddiu $v1, $v1, 0x8\n\taddiu $t0, $zero, 0x1F\n\t.L8017DC4C:\n\tsw $zero, 0x0($v0)\n\taddiu $v0, $v0, 0xC\n\tsw $zero, 0x0($v1)\n\taddiu $t0, $t0, -0x1\n\tbgez $t0, .L8017DC4C\n\taddiu $v1, $v1, 0xC\n\tandi $a0, $a0, 0x3\n\taddiu $v0, $zero, 0x1\n\tbeq $a0, $v0, .L8017DCBC\n\tslti $v0, $a0, 0x2\n\tbeqz $v0, .L8017DC8C\n\tnop\n\tbeqz $a0, .L8017DCA8\n\taddu $a0, $a1, $zero\n\tj .L8017DCF8\n\tnop\n\t.L8017DC8C:\n\taddiu $v0, $zero, 0x2\n\tbeq $a0, $v0, .L8017DCD4\n\taddiu $v0, $zero, 0x3\n\tbeq $a0, $v0, .L8017DCEC\n\taddu $a0, $a1, $zero\n\tj .L8017DCF8\n\tnop\n\t.L8017DCA8:\n\taddu $a1, $a2, $zero\n\tjal func_8017D7D8\n\taddu $a2, $a3, $zero\n\tj .L8017DCF8\n\tnop\n\t.L8017DCBC:\n\taddu $a0, $a1, $zero\n\taddu $a1, $a2, $zero\n\tjal func_8017DD08\n\taddu $a2, $a3, $zero\n\tj .L8017DCF8\n\tnop\n\t.L8017DCD4:\n\taddu $a0, $a1, $zero\n\taddu $a1, $a2, $zero\n\tjal func_8017D980\n\taddu $a2, $a3, $zero\n\tj .L8017DCF8\n\tnop\n\t.L8017DCEC:\n\taddu $a1, $a2, $zero\n\tjal func_8017DF20\n\taddu $a2, $a3, $zero\n\t.L8017DCF8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017DC28, .-func_8017DC28\n"
);
