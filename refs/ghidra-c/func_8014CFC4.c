
void FUN_8014cfc4(void)

{
  int iVar1;
  
  FUN_800f6564(0xf2d0);
  FUN_800f5574(2);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(3);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_800f654c(0xff);
  FUN_800f8188(0xf27a);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f8960(0xf251);
    FUN_800f63bc();
    FUN_800f5a90(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0xf2a0);
  FUN_8014e424();
  return;
}



