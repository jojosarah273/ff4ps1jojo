
undefined4 CD_getsector2(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_8019bdd4 = 0;
  *PTR_CDROM_REG3_8019bdd8 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_8019bde0 = 0x21020843;
  *(undefined4 *)PTR_COMMON_DELAY_8019bddc = 0x1325;
  *(uint *)PTR_DMA_DPCR_8019bde4 = *(uint *)PTR_DMA_DPCR_8019bde4 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_8019bdec = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_8019bdf0 = param_2 | 0x10000;
  bVar1 = *PTR_CDROM_REG0_8019bdd4;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *PTR_CDROM_REG0_8019bdd4;
  }
  *(undefined4 *)PTR_DMA_CDROM_CHCR_8019bde8 = 0x11400100;
  return 0;
}



