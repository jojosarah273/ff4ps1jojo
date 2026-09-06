
void FUN_801533fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0xa9);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f67fc(0xab);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    uVar2 = FUN_800f3b04(0x1800);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f63bc();
    }
    else {
      FUN_800f63bc();
      FUN_800f67fc(0xab);
      uVar2 = FUN_800f3b04(0x1801);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f62bc(0xa9);
        return;
      }
    }
    FUN_800f63bc();
  } while( true );
}



