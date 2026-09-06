
void FUN_8010d34c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b9c(0x7f4c00,0);
  FUN_800f9330();
  *DAT_8019ed40 = *(byte *)(iVar1 + 0xc);
  if (*DAT_8019ed40 < 0x20) {
    *DAT_8019ed40 = *(byte *)(iVar1 + 0xe);
    if (*DAT_8019ed40 < 0x20) {
      FUN_8010d54c();
      *DAT_8019ed5c = *(undefined1 *)(iVar1 + 0x3d);
      DAT_8019ed5c[1] = *(undefined1 *)(iVar1 + 0x3e);
      *DAT_8019ed40 = *(byte *)(iVar2 + (uint)*DAT_8019ed54);
      goto LAB_8010d43c;
    }
  }
  *DAT_8019ed40 = 1;
LAB_8010d43c:
  FUN_800f95a0();
  return;
}



