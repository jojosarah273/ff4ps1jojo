#include "common.h"
__asm__(
  ".globl func_8015F2B0\n"
  ".type func_8015F2B0, @function\n"
  "func_8015F2B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x289D\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_80160AAC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38FE\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8015F308\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\tjal func_8006508C\n\tnop\n\tj .L8015F3D0\n\tnop\n\t.L8015F308:\n\tjal func_80160B8C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38FE\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8015F348\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tj .L8015F370\n\tnop\n\t.L8015F348:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015F370\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\t.L8015F370:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3947\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2709\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3945\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x270A\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x3946\n\tjal func_8015254C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3949\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xA4\n\t.L8015F3D0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015F2B0, .-func_8015F2B0\n"
);
