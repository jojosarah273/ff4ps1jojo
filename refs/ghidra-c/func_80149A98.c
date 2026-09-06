
void FUN_80149a98(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f9200();
  FUN_800f654c(0x20);
  FUN_800f824c(0x28);
  FUN_800f93dc();
  FUN_80148fc0();
  FUN_800f824c(4);
  uVar1 = FUN_800f3c3c(0x2b);
  FUN_800f4f28(uVar1);
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(5);
  FUN_800f7a40(uVar1);
  FUN_800f6630(5);
  FUN_800f4248(1);
  FUN_800f824c(5);
  FUN_800f7500(0x18);
  FUN_800f8ebc(0);
  FUN_800f6630(2);
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed44 << 2;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6658(4);
  do {
    FUN_800f89d4(0x7612);
    *DAT_8019ed58 = *DAT_8019ed58 + 4;
    FUN_800f5dd4(0);
    iVar2 = FUN_800f5c64(0x202);
  } while (iVar2 != 0);
  FUN_800f971c();
  FUN_800f9660(0x20);
  FUN_800f6630(2);
  FUN_800f5410();
  FUN_800f4008(0x18);
  FUN_800f824c(2);
  return;
}



