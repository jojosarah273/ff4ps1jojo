
undefined4 SYS_OBJ_2764(void)

{
  int iVar1;
  undefined4 uVar2;
  
  SYS_OBJ_23A8();
  iVar1 = SYS_OBJ_28B4();
  if (iVar1 == 0) {
    if (DAT_8019dc7c != DAT_8019dc80) {
      uVar2 = SYS_OBJ_2764();
      return uVar2;
    }
    do {
      if (((*(uint *)PTR_DMA_GPU_CHCR_8019dc68 & 0x1000000) == 0) &&
         ((*(uint *)PTR_GPU_REG1_8019dc5c & 0x4000000) != 0)) {
        uVar2 = SYS_OBJ_2870();
        return uVar2;
      }
      iVar1 = SYS_OBJ_28B4();
    } while (iVar1 == 0);
  }
  return 0xffffffff;
}



