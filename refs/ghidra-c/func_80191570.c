
void BIOS_1_OBJ_14D8(void)

{
  uint uVar1;
  undefined1 *unaff_s1;
  undefined1 unaff_s2;
  undefined1 *unaff_s3;
  
  while( true ) {
    uVar1 = BIOS_1_OBJ_0();
    if (uVar1 == 0) break;
    if (((uVar1 & 4) != 0) && (DAT_8019b9f0 != (code *)0x0)) {
      (*DAT_8019b9f0)(*unaff_s1,&DAT_801f8f18);
    }
    if (((uVar1 & 2) != 0) && (DAT_8019b9ec != (code *)0x0)) {
      (*DAT_8019b9ec)(*unaff_s3,&DAT_801f8f10);
    }
  }
  *PTR_CDROM_REG0_8019bcb0 = unaff_s2;
  return;
}



