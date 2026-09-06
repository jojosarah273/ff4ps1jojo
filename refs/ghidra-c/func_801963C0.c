
uint SYS_OBJ_23A8(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)PTR_DMA_GPU_CHCR_8019dc68 & 0x1000000) == 0) {
    DAT_8019dc88 = SetIntrMask(0);
    if (DAT_8019dc7c != DAT_8019dc80) {
      uVar1 = *(uint *)PTR_DMA_GPU_CHCR_8019dc68;
      while ((uVar1 & 0x1000000) == 0) {
        if (((DAT_8019dc80 + 1 & 0x3f) == DAT_8019dc7c) && (DAT_8019db60 == (code *)0x0)) {
          DMACallback(2,0);
        }
        uVar1 = *(uint *)PTR_GPU_REG1_8019dc5c;
        while ((uVar1 & 0x4000000) == 0) {
          uVar1 = *(uint *)PTR_GPU_REG1_8019dc5c;
        }
        (**(code **)(&DAT_801fd3a8 + DAT_8019dc80 * 0x60))
                  (*(undefined4 *)(&DAT_801fd3ac + DAT_8019dc80 * 0x60),
                   *(undefined4 *)(&DAT_801fd3b0 + DAT_8019dc80 * 0x60));
        DAT_8019dc80 = DAT_8019dc80 + 1 & 0x3f;
        if (DAT_8019dc7c == DAT_8019dc80) break;
        uVar1 = *(uint *)PTR_DMA_GPU_CHCR_8019dc68;
      }
    }
    SetIntrMask(DAT_8019dc88);
    if ((((DAT_8019dc7c == DAT_8019dc80) && ((*(uint *)PTR_DMA_GPU_CHCR_8019dc68 & 0x1000000) == 0))
        && (DAT_8019db5c != 0)) && (DAT_8019db60 != (code *)0x0)) {
      DAT_8019db5c = 0;
      (*DAT_8019db60)();
    }
    uVar1 = DAT_8019dc7c - DAT_8019dc80 & 0x3f;
  }
  return uVar1;
}



