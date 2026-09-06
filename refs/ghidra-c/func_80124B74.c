
void FUN_80124b74(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8d6c(0x73);
  FUN_800f824c(0x75);
  FUN_800f654c(0xff);
  FUN_800f7270(0x41);
  do {
    FUN_800f8768(0x163);
    FUN_800f6364();
    FUN_800f5958(7);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7594(0x41);
  do {
    FUN_80124c64();
    FUN_800f6630(0x1d);
    *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
    FUN_800f8960(0x163);
    FUN_800f63bc();
    FUN_800f6630(0x73);
    uVar2 = FUN_800f3c3c(0x74);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3c3c(0x75);
    FUN_800f78c4(uVar2);
    iVar1 = FUN_800f7918(2);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f5a90(7);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



