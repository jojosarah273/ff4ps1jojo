
void FUN_8014d31c(void)

{
  int iVar1;
  
  FUN_800f6564(0xf279);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f8f74(0xf283);
  }
  else {
    FUN_800f6564(0xf282);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8f74(0xf282);
      FUN_800f971c();
      FUN_800999c8();
    }
  }
  return;
}



