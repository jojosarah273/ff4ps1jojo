
void FUN_80117cb8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xe4);
  FUN_800f4248(0x7f);
  FUN_800f824c(0xe4);
  FUN_800f5574(0xb);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0x1100);
      FUN_800f8768(0x1180);
      FUN_800f6364();
      FUN_800f5958(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0x1200);
      FUN_800f8768(0x10c0);
      FUN_800f6364();
      FUN_800f5958(0x80);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  FUN_800f71dc(0);
  FUN_800f7500(0);
  do {
    FUN_800f6d70(0xad6);
    FUN_800f8768(0x1000);
    *DAT_8019ed40 = *DAT_8019ed60;
    uVar2 = FUN_800f3c3c(0xe4);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_80117e64();
    }
    FUN_80117df8();
    FUN_800f63bc();
    FUN_800f5a90(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



