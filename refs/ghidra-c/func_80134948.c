
void FUN_80134948(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f939c();
  FUN_800f7500(0x30);
  FUN_800f7270(0x41);
  do {
    uVar1 = FUN_800f3b04(*DAT_8019ed54 + 0x1440);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_800f9200();
      FUN_800f6b68(0x1441);
      uVar1 = FUN_800f3c3c(0xe3);
      FUN_800f54d4(uVar1);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_800f93dc();
        FUN_800f960c();
        FUN_800f654c(0);
        FUN_800f63f8();
        return;
      }
      FUN_800f93dc();
    }
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5ea0();
    iVar2 = FUN_800f5c64(0x202);
  } while (iVar2 != 0);
  FUN_800f960c();
  FUN_800f654c(1);
  FUN_800f63f8();
  return;
}



