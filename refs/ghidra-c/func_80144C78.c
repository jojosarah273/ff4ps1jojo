
void FUN_80144c78(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6d70(0xed06);
    FUN_800f4248(4);
    FUN_800f61e8();
    FUN_800f824c(2);
    FUN_800f8fb8(3);
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0xdfe46);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f9644(0x20);
    FUN_800f6558(0xc);
    FUN_800f8274(0);
    do {
      FUN_800f6658(2);
      FUN_800f8274(4);
      do {
        uVar1 = FUN_800f3b04(*DAT_8019ed54 + 0xebe6);
        FUN_800f5be8(uVar1);
        FUN_800f5dd4(4);
        iVar2 = FUN_800f5c64(0x202);
      } while (iVar2 != 0);
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f5dd4(0);
      iVar2 = FUN_800f5c64(0x202);
    } while (iVar2 != 0);
    FUN_800f971c();
    FUN_800f9660(0x20);
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f654c(2);
    FUN_80143e44();
    FUN_800f6b68(0xf133);
    *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
    FUN_800f8768(0xf133);
    FUN_80143d14();
    FUN_800f9200();
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0xdfe46);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f654c(0xc);
    FUN_800f824c(0);
    FUN_800f93dc();
    do {
      FUN_800f8768(0xec77);
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f5da0(0);
      iVar2 = FUN_800f5b8c(0x202);
    } while (iVar2 != 0);
    FUN_800f6d70(0xed06);
    FUN_800f61e8();
    FUN_800f8960(0xed06);
    FUN_800f63bc();
    FUN_800f5a90(6);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  return;
}



