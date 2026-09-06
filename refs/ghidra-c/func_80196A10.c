
undefined4 SYS_OBJ_29F8(uint param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x10000007;
  if ((*(uint *)PTR_GPU_REG0_8019dc58 & 0xffffff) != 2) {
    *(uint *)PTR_GPU_REG0_8019dc58 = *(uint *)PTR_GPU_REG1_8019dc5c & 0x3fff | 0xe1001000;
    uVar1 = *(undefined4 *)PTR_GPU_REG0_8019dc58;
    uVar1 = SYS_OBJ_2A90();
    return uVar1;
  }
  if ((param_1 & 8) != 0) {
    *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x9000001;
    uVar1 = SYS_OBJ_2A90();
    return uVar1;
  }
  return 1;
}



