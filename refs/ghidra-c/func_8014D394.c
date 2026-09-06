
void FUN_8014d394(void)

{
  int iVar1;
  
  FUN_800f6564(0xf279);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(1);
    FUN_800f8188(0xf283);
  }
  else {
    FUN_800f6564(0xf282);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f8188(0xf282);
      FUN_800f654c(1);
      FUN_800999c8();
    }
  }
  return;
}



