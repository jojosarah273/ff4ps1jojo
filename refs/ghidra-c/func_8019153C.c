
void BIOS_1_OBJ_14A4(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *PTR_CDROM_REG0_8019bcb0;
  while( true ) {
    uVar2 = BIOS_1_OBJ_0();
    if (uVar2 == 0) break;
    if (((uVar2 & 4) != 0) && (DAT_8019b9f0 != (code *)0x0)) {
      (*DAT_8019b9f0)(DAT_8019bcc9,&DAT_801f8f18);
    }
    if (((uVar2 & 2) != 0) && (DAT_8019b9ec != (code *)0x0)) {
      (*DAT_8019b9ec)(DAT_8019bcc8,&DAT_801f8f10);
    }
  }
  *PTR_CDROM_REG0_8019bcb0 = bVar1 & 3;
  return;
}



