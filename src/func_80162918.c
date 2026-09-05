#include "common.h"
__asm__(
  ".globl func_80162918\n"
  ".type func_80162918, @function\n"
  "func_80162918:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2683\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80162960\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xB\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x19\n\tj .L80162A28\n\tnop\n\t.L80162960:\n\tjal func_80153218\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801629A0\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tj .L80162A28\n\tnop\n\t.L801629A0:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801629D8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tj .L80162A28\n\tnop\n\t.L801629D8:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80162A10\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xD\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tj .L80162A28\n\tnop\n\t.L80162A10:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x29\n\t.L80162A28:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x26D2\n\tjal func_80062B08\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C7\n\tjal func_801532D4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80162918, .-func_80162918\n"
);
