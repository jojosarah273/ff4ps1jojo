
void FUN_801004d4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f6564(0x16a0);
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x30);
  FUN_800f3f38(uVar1);
  FUN_800f8188(0x16a0);
  FUN_800f6564(0x16a1);
  uVar1 = FUN_800f3c3c(0x31);
  FUN_800f3f38(uVar1);
  FUN_800f8188(0x16a1);
  FUN_800f6564(0x16a2);
  uVar1 = FUN_800f3c3c(0x32);
  FUN_800f3f38(uVar1);
  FUN_800f8188(0x16a2);
  FUN_800f5574(0x98);
  iVar2 = FUN_800f53c0();
  if (iVar2 != 0) {
    FUN_800f6564(0x16a1);
    FUN_800f5574(0x96);
    iVar2 = FUN_800f53c0();
    if (iVar2 != 0) {
      FUN_800f6564(0x16a0);
      FUN_800f5574(0x7f);
      iVar2 = FUN_800f53c0();
      if (iVar2 != 0) {
        FUN_800f654c(0x7f);
        FUN_800f8188(0x16a0);
        FUN_800f654c(0x96);
        FUN_800f8188(0x16a1);
        FUN_800f654c(0x98);
        FUN_800f8188(0x16a2);
      }
    }
  }
  return;
}



