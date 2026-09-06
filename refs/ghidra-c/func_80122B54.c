
void FUN_80122b54(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f824c(0x60);
  FUN_800f8fb8(0x61);
  FUN_800f9644(0x20);
  FUN_800f6658(0x60);
  *DAT_8019ed44 = *DAT_8019ed44 << 5;
  FUN_800f516c();
  FUN_800f5050();
  FUN_800f4064(0x1000);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  FUN_800f6630(0x60);
  *DAT_8019ed40 = *DAT_8019ed40 << 4;
  FUN_800f824c(0x48);
  FUN_800f6d70(0);
  FUN_800f4248(0x3f);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 != 0) {
    uVar2 = FUN_800f3c3c(0x48);
    FUN_800f78c4(uVar2);
    FUN_800f824c(0x48);
    FUN_800f6564(0x16a8);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f71dc(10);
    }
    else {
      FUN_800f7270(0x41);
    }
    FUN_800f8d6c(0x45);
    FUN_800f6630(0x60);
    FUN_800f5140();
    FUN_800f824c(0x43);
    FUN_800f9644(0x20);
    FUN_800f6658(0x43);
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f3f94(uVar2);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6cf4(0x1efe0a);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9660(0x20);
  }
  return;
}



