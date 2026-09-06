#include "common.h"
__asm__(
  ".globl func_80103A28\n"
  ".type func_80103A28, @function\n"
  "func_80103A28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80103B38\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x4200\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x32\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x76\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x47\n\tjal func_800F71DC\n\tori $a0, $zero, 0x8000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_80176748\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1700\n\tjal func_801709E4\n\tnop\n\tjal func_80103FE8\n\tnop\n\tjal func_8010415C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103A28, .-func_80103A28\n"
);
