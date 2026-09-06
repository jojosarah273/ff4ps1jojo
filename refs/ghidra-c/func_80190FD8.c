
void CD_flush(void)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_8019bcb0 = 1;
  bVar1 = *PTR_CDROM_REG3_8019bcb4;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_8019bcb0 = 1;
    *PTR_CDROM_REG3_8019bcb4 = 7;
    *PTR_CDROM_REG2_8019bcc0 = 7;
    bVar1 = *PTR_CDROM_REG3_8019bcb4;
  }
  DAT_8019bcca = 0;
  DAT_8019bcc9 = 0;
  DAT_8019bcc8 = 2;
  *PTR_CDROM_REG0_8019bcb0 = 0;
  *PTR_CDROM_REG3_8019bcb4 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_8019bcb8 = 0x1325;
  return;
}



