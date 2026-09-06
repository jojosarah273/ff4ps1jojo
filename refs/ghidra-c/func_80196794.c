
undefined4 SYS_OBJ_277C(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8019dc7c != DAT_8019dc80) {
    uVar1 = SYS_OBJ_2764();
    return uVar1;
  }
  while (((*(uint *)PTR_DMA_GPU_CHCR_8019dc68 & 0x1000000) != 0 ||
         ((*(uint *)PTR_GPU_REG1_8019dc5c & 0x4000000) == 0))) {
    iVar2 = SYS_OBJ_28B4();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = SYS_OBJ_2870();
  return uVar1;
}



