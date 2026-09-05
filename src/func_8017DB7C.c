#include "common.h"
__asm__(
  ".globl func_8017DB7C\n"
  ".type func_8017DB7C, @function\n"
  "func_8017DB7C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tandi $a0, $a0, 0x3\n\taddiu $v0, $zero, 0x1\n\tbeq $a0, $v0, .L8017DBDC\n\tsw $ra, 0x10($sp)\n\tslti $v0, $a0, 0x2\n\tbeqz $v0, .L8017DBAC\n\tnop\n\tbeqz $a0, .L8017DBC8\n\taddu $a0, $a1, $zero\n\tj .L8017DC18\n\tnop\n\t.L8017DBAC:\n\taddiu $v0, $zero, 0x2\n\tbeq $a0, $v0, .L8017DBF4\n\taddiu $v0, $zero, 0x3\n\tbeq $a0, $v0, .L8017DC0C\n\taddu $a0, $a1, $zero\n\tj .L8017DC18\n\tnop\n\t.L8017DBC8:\n\taddu $a1, $a2, $zero\n\tjal func_8017D7D8\n\taddu $a2, $a3, $zero\n\tj .L8017DC18\n\tnop\n\t.L8017DBDC:\n\taddu $a0, $a1, $zero\n\taddu $a1, $a2, $zero\n\tjal func_8017D898\n\taddu $a2, $a3, $zero\n\tj .L8017DC18\n\tnop\n\t.L8017DBF4:\n\taddu $a0, $a1, $zero\n\taddu $a1, $a2, $zero\n\tjal func_8017D980\n\taddu $a2, $a3, $zero\n\tj .L8017DC18\n\tnop\n\t.L8017DC0C:\n\taddu $a1, $a2, $zero\n\tjal func_8017DA64\n\taddu $a2, $a3, $zero\n\t.L8017DC18:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017DB7C, .-func_8017DB7C\n"
);
