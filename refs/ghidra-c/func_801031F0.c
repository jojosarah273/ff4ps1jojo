
void FUN_801031f0(void)

{
  int iVar1;
  
  FUN_800f6564(0x1286);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 != 0) {
    FUN_800f654c(4);
    FUN_800f8188(0x1704);
    FUN_800f654c(3);
    FUN_800f824c(0xac);
    FUN_800f8188(0x1705);
    FUN_800f6630(0xb1);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xe1);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f654c(0x20);
        FUN_800f824c(0xad);
        FUN_800f654c(0x10);
        FUN_800f824c(0xb7);
        FUN_8017559c();
        FUN_800f654c(0xf);
        FUN_800f8188(0x6fd);
      }
      else {
        FUN_801030f8();
        FUN_800f654c(0x20);
        FUN_800f824c(0x79);
        FUN_800f654c(0xf);
        FUN_800f8188(0x6fd);
        FUN_80103310();
      }
    }
    else {
      FUN_800fd718();
      FUN_800f8fb8(0x79);
      FUN_80103310();
    }
  }
  return;
}



