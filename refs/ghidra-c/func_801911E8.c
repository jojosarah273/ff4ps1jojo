
undefined4 CD_init(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_80191620("CD_init:");
  printf("addr=%08x\n",&PTR_DAT_8019bccc);
  DAT_8019ba09 = 0;
  DAT_8019ba08 = 0;
  DAT_8019b9f0 = 0;
  DAT_8019b9ec = 0;
  DAT_8019b9fc = 0;
  DAT_8019b9f8 = 0;
  ResetCallback();
  InterruptCallback(2,BIOS_1_OBJ_14A4);
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
  CD_cw(1,0,0,0);
  if ((DAT_8019b9f8 & 0x10) != 0) {
    CD_cw(1,0,0,0);
  }
  iVar2 = CD_cw(10,0,0,0);
  if (((iVar2 == 0) && (iVar2 = CD_cw(0xc,0,0,0), iVar2 == 0)) && (iVar2 = CD_sync(0,0), iVar2 == 2)
     ) {
    uVar3 = BIOS_1_OBJ_1320();
    return uVar3;
  }
  return 0xffffffff;
}



