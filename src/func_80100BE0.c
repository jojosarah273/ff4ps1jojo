#include "common.h"
__asm__(
  ".globl func_80100BE0\n"
  ".type func_80100BE0, @function\n"
  "func_80100BE0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x711\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80100D40\n\tnop\n\tjal func_80100B30\n\tnop\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L80100C10:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F5410\n\tsb $v1, 0x0($a0)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0xFE7\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x8FC\n\tjal func_800F939C\n\tnop\n\tjal func_80100978\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80100CE4\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x158500 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x158500 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x18\n\tlui $a0, (0x158501 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x158501 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x18\n\tlui $a0, (0x7F5C71 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x7F5C71 & 0xFFFF)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x78\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80100CE4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x77\n\tlui $a0, (0x7F5C71 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F5C71 & 0xFFFF)\n\t.L80100CE4:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x3D\n\taddiu $v0, $v0, 0x5\n\tjal func_800F8D6C\n\tsh $v0, 0x0($v1)\n\tjal func_800F63BC\n\tnop\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x711\n\tjal func_800F3B04\n\tsb $v1, 0x0($a1)\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80100C10\n\tnop\n\t.L80100D40:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80100BE0, .-func_80100BE0\n"
);
