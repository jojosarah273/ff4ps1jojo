#include "common.h"
__asm__(
  ".globl func_8015A0F4\n"
  ".type func_8015A0F4, @function\n"
  "func_8015A0F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x396B\n\tjal func_800F5410\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3972\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3972\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x396F\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x396F\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x396C\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x396C\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3973\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3973\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3974\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3974\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x396D\n\tjal func_800F63BC\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3970\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3970\n\tjal func_800F63BC\n\tnop\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x82\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3971\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3971\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A0F4, .-func_8015A0F4\n"
);
