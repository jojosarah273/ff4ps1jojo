
code * startIntrDMA(void)

{
  INTR_DMA_OBJ_278(&DAT_8019cf48,8);
  *(undefined4 *)PTR_DMA_DICR_8019cf44 = 0;
  InterruptCallback(3,INTR_DMA_OBJ_4C);
  return INTR_DMA_OBJ_1CC;
}



