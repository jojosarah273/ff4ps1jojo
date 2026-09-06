
void FUN_80141e80(void)

{
  int iVar1;
  
  FUN_800f9330();
  FUN_800f6564(0xf321);
  FUN_800f5480();
  FUN_800f8058(8);
  FUN_800f8188(0xf321);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6240(0xf32b);
  }
  FUN_800f6564(0xf32b);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0xf329);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6564(0xf32b);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6c68(0xdfd5c);
      FUN_800f8188(0xf329);
      FUN_800f6240(0xf32b);
    }
  }
  FUN_800f95a0();
  return;
}



