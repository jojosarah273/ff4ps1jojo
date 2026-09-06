
int SYS_OBJ_1834(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)PTR_DMA_DPCR_8019dc78 = *(uint *)PTR_DMA_DPCR_8019dc78 | 0x8000000;
  *(undefined4 *)PTR_DMA_OTC_CHCR_8019dc74 = 0;
  *(int *)PTR_DMA_OTC_MADR_8019dc6c = param_1 + param_2 * 4 + -4;
  *(int *)PTR_DMA_OTC_BCR_8019dc70 = param_2;
  *(undefined4 *)PTR_DMA_OTC_CHCR_8019dc74 = 0x11000002;
  SYS_OBJ_2880();
  uVar1 = *(uint *)PTR_DMA_OTC_CHCR_8019dc74;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = SYS_OBJ_28B4();
    if (iVar2 != 0) break;
    uVar1 = *(uint *)PTR_DMA_OTC_CHCR_8019dc74;
  }
  return -1;
}



