
undefined4 SPU_OBJ_78C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *unaff_s0;
  
  DAT_8019b168 = unaff_s0[-1];
  DAT_8019b16c = (*unaff_s0 >> 6) + (uint)((*unaff_s0 & 0x3f) != 0);
  *(uint *)PTR_DMA_SPU_MADR_8019b118 = DAT_8019b168;
  *(uint *)PTR_DMA_SPU_BCR_8019b11c = DAT_8019b16c << 0x10 | 0x10;
  param_3 = param_3 | 0x201;
  if (DAT_8019b164 == 1) {
    param_3 = 0x1000200;
  }
  *(uint *)PTR_DMA_SPU_CHCR_8019b120 = param_3;
  return 0;
}



