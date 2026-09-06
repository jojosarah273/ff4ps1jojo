
void FUN_800ffb5c(void)

{
  int iVar1;
  
  FUN_800f8fb8(0xc2);
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0x1000);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f6b68(0x1003);
        FUN_800f4248(1);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f62bc(0xc2);
          FUN_800f9644(0x20);
          FUN_800f6be0(0x1007);
          iVar1 = FUN_800f64ec(2);
          if (iVar1 == 0) {
            FUN_800f5480();
            FUN_800f80d0(1);
            FUN_800f87dc(0x1007);
            FUN_800f55c0(1);
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
              FUN_800f6558(1);
              FUN_800f87dc(0x1007);
            }
          }
          FUN_800f6558(0);
          FUN_800f9660(0x20);
        }
      }
      FUN_80117df8();
      FUN_800f5958(0x140);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6630(0xc2);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xb1);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(0x7a);
        FUN_800fd804();
      }
    }
  }
  return;
}



