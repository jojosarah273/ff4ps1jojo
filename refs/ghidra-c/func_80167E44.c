
void FUN_80167e44(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0xf3a8);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5140();
      FUN_800f9330();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6c68(0x13f909);
      FUN_800f824c(0);
      FUN_800f6c68(0x13f90a);
      FUN_800f824c(1);
      FUN_800f654c(0x13);
      FUN_800f824c(2);
      FUN_800f95a0();
      FUN_800f9330();
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f5140();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0xf398);
      FUN_800f824c(4);
      FUN_800f6b68(0xf399);
      FUN_800f824c(5);
      while( true ) {
        FUN_800f6ea8(0);
        FUN_800f5574(0xff);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) break;
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(4);
        FUN_800f3f38(uVar2);
        FUN_800f9200();
        FUN_800f6564(0x6cc0);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f93dc();
          *DAT_8019ed40 = ~*DAT_8019ed40;
          FUN_800f9200();
        }
        FUN_800f93dc();
        FUN_800f8960(0x340);
        FUN_80168118();
        FUN_800f6ea8(0);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(5);
        FUN_800f3f38(uVar2);
        FUN_800f8960(0x341);
        FUN_80168118();
        FUN_800f6ea8(0);
        FUN_800f8960(0x342);
        FUN_80168118();
        FUN_800f6ea8(0);
        FUN_800f9200();
        FUN_800f6564(0x6cc0);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f93dc();
          *DAT_8019ed40 = *DAT_8019ed40 ^ 0x40;
          FUN_800f9200();
        }
        FUN_800f93dc();
        FUN_800f8960(0x343);
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_80168118();
      }
      FUN_800f95a0();
    }
    FUN_800f6364();
    FUN_800f5958(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



