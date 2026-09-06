
void FUN_80113c54(void)

{
  int iVar1;
  
  FUN_800f7270(0x22);
  FUN_800f5958(0x3ff0);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5958(0xf0);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f654c(0xf0);
      FUN_800f8960(0x301);
      return;
    }
  }
  FUN_800f6630(0x22);
  FUN_800f8960(0x301);
  return;
}



