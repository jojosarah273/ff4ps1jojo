#include "common.h"
__asm__(
  ".globl func_80187B50\n"
  ".type func_80187B50, @function\n"
  "func_80187B50:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $ra, 0x18($sp)\n\tjal func_80188240\n\tsw $s0, 0x10($sp)\n\tlui $a0, %hi(D_8019ED20)\n\taddiu $a0, $a0, %lo(D_8019ED20)\n\taddu $s0, $v0, $zero\n\tjal func_80193C40\n\taddu $a1, $s0, $zero\n\tjal func_80193924\n\taddiu $a0, $zero, -0x1\n\taddiu $v1, $zero, 0x2\n\tbeq $s0, $v1, .L80187BBC\n\tslti $v0, $s0, 0x3\n\tbeqz $v0, .L80187BA8\n\taddiu $v0, $zero, 0x1\n\tbeq $s0, $v0, .L80187BD0\n\tnop\n\tj .L80187BF4\n\tnop\n\t.L80187BA8:\n\taddiu $v0, $zero, 0x3\n\tbeq $s0, $v0, .L80187BE0\n\taddiu $v0, $zero, 0x1\n\tj .L80187BF4\n\tnop\n\t.L80187BBC:\n\taddiu $s0, $zero, 0x2\n\t.L80187BC0:\n\tjal func_80188240\n\tnop\n\tbeq $v0, $s0, .L80187BC0\n\tnop\n\t.L80187BD0:\n\tjal func_801881AC\n\tnop\n\tj .L80187BF4\n\taddiu $v0, $zero, 0x1\n\t.L80187BE0:\n\taddiu $s0, $zero, 0x3\n\t.L80187BE4:\n\tjal func_80188240\n\tnop\n\tbeq $v0, $s0, .L80187BE4\n\taddiu $v0, $zero, 0x1\n\t.L80187BF4:\n\tbne $s1, $v0, .L80187C0C\n\tnop\n\t.L80187BFC:\n\tjal func_80188240\n\tnop\n\tbnez $v0, .L80187BFC\n\tnop\n\t.L80187C0C:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187B50, .-func_80187B50\n"
);
