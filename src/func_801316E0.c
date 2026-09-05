#include "common.h"
__asm__(
  ".globl func_801316E0\n"
  ".type func_801316E0, @function\n"
  "func_801316E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BBB\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80131720\n\tlui $a0, (0xF9807 >> 16)\n\tjal func_800F65C8\n\tori $a0, $a0, (0xF9807 & 0xFFFF)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B91\n\tjal func_801317F0\n\tnop\n\tj .L80131750\n\tnop\n\t.L80131720:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L80131728:\n\tjal func_80131760\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80131728\n\tnop\n\t.L80131750:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801316E0, .-func_801316E0\n"
);
