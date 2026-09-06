
void _spu_FsetPCR(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)PTR_DMA_DPCR_8019b124 = *(uint *)PTR_DMA_DPCR_8019b124 & 0xfff8ffff;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)PTR_DMA_DPCR_8019b124;
    SPU_OBJ_A7C(0x30000);
    return;
  }
  *(uint *)PTR_DMA_DPCR_8019b124 = *(uint *)PTR_DMA_DPCR_8019b124 | 0x50000;
  return;
}



