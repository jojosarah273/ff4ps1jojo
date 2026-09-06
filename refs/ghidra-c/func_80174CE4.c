
void FUN_80174ce4(void)

{
  int iVar1;
  
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f71dc(0);
  do {
    FUN_800f7500(0x80);
    FUN_800f8fb8(0x33);
    while( true ) {
      FUN_800f9644(0x20);
      FUN_800f6658(0x30);
      FUN_800f5480();
      iVar1 = FUN_800f3b9c(0x15c36f,*DAT_8019ed54);
      FUN_800f7fcc(iVar1 + (uint)*DAT_8019ed54);
      FUN_800f8274(0x30);
      FUN_800f6658(0x32);
      iVar1 = FUN_800f3b9c(0x15c37f,*DAT_8019ed54);
      FUN_800f7fcc(iVar1 + (uint)*DAT_8019ed54);
      FUN_800f8274(0x32);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) break;
      FUN_800f63bc();
    }
    FUN_800f6658(0x30);
    FUN_800f5410();
    iVar1 = FUN_800f3b9c(0x15c36f,*DAT_8019ed54);
    FUN_800f3f94(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f8274(0x30);
    FUN_800f6658(0x32);
    iVar1 = FUN_800f3b9c(0x15c37f,*DAT_8019ed54);
    FUN_800f3f94(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f8274(0x32);
    FUN_800f6558(0);
    FUN_800f9660(0x20);
    FUN_800f9330();
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f7864();
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f8674(0x34);
    FUN_800f95a0();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f960c();
  FUN_800f95a0();
  return;
}



