
void FUN_8014588c(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f9330();
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_80143d64();
    FUN_800f95a0();
    FUN_800f5410();
    iVar1 = FUN_800f3b9c(0xdf82c,*DAT_8019ed54);
    FUN_800f3f38(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f8768(0xf3b0);
    FUN_800f9330();
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_80143d14();
    FUN_800f95a0();
    FUN_800f5410();
    iVar1 = FUN_800f3b9c(0xdf82d,*DAT_8019ed54);
    FUN_800f3f38(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f8768(0xf3b1);
    FUN_800f9330();
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f654c(0xc);
    FUN_80143e44();
    FUN_800f6564(0xf1b3);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0xff);
      FUN_80143db4();
    }
    FUN_800f95a0();
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



