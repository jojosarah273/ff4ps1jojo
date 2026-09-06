
undefined4 CD_getsector(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  *PTR_CDROM_REG0_8019bd74 = 0;
  *PTR_CDROM_REG3_8019bd78 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_8019bd80 = 0x20943;
  *(undefined4 *)PTR_COMMON_DELAY_8019bd7c = 0x1323;
  *(uint *)PTR_DMA_DPCR_8019bd84 = *(uint *)PTR_DMA_DPCR_8019bd84 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_8019bd8c = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_8019bd90 = param_2 | 0x10000;
  do {
  } while ((*PTR_CDROM_REG0_8019bd74 & 0x40) == 0);
  *(undefined4 *)PTR_DMA_CDROM_CHCR_8019bd88 = 0x11000000;
  uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_8019bd88;
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_8019bd88;
  }
  *(undefined4 *)PTR_COMMON_DELAY_8019bd7c = 0x1325;
  return 0;
}



