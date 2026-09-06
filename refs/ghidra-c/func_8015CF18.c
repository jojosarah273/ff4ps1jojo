
void FUN_8015cf18(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0x321b);
    FUN_800f5574(0xce);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6b68(0x321c);
      FUN_800f5574(1);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        return;
      }
      FUN_800f5480();
      FUN_800f6b68(0x321c);
      FUN_800f9200();
      FUN_800f9330();
      FUN_800f8058(1);
      FUN_800f8768(0x321c);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f90ec(0x321c);
        FUN_800f90ec(0x321b);
        FUN_800f6b68(0x321a);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8768(0x321a);
      }
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f824c(1);
      FUN_800f654c(6);
      FUN_80150c38();
      FUN_800f95a0();
      FUN_800f93dc();
      FUN_800f8768(0x321c);
      return;
    }
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5958(0xc0);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



