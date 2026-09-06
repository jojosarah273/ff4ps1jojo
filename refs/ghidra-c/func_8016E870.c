
void FUN_8016e870(void)

{
  int iVar1;
  
  FUN_800f7500(5);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0x2000);
    FUN_800f4248(0x1f);
    FUN_800f5574(0x13);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6b68(0x2003);
      FUN_800f4248(0xc0);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6b68(0x2004);
        FUN_800f4248(0x3c);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) {
          return;
        }
      }
      FUN_800f654c(0xff);
      FUN_800f8188(0x357c);
      return;
    }
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed54;
    FUN_800f5410();
    FUN_800f4064(0x80);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  return;
}



