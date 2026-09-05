#include "common.h"
__asm__(
  ".globl func_80150B88\n"
  ".type func_80150B88, @function\n"
  "func_80150B88:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x353E\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x353E\n\txori $v0, $v0, 0x1\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F5F20\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80150C28\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x353F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80150BF8\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x353F\n\t.L80150BF8:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x353F\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80150C20\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xD\n\tjal func_80150C38\n\tnop\n\t.L80150C20:\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x353F\n\t.L80150C28:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80150B88, .-func_80150B88\n"
);
