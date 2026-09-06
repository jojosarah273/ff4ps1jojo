
undefined4 FUN_800ffe0c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xb1);
  iVar1 = FUN_800f6434(0x202);
  uVar2 = 0;
  if (iVar1 == 0) {
    FUN_800f6630(0x5a);
    FUN_800f4248(0xf);
    iVar1 = FUN_800f4120(0x202);
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_800f6630(0x5c);
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
      uVar2 = 0;
      if (iVar1 == 0) {
        FUN_800f6630(2);
        FUN_800f4248(0x80);
        iVar1 = FUN_800f4120(0x202);
        uVar2 = 0;
        if (iVar1 != 0) {
          FUN_800f6630(0x54);
          iVar1 = FUN_800f6434(2);
          uVar2 = 0;
          if (iVar1 != 0) {
            FUN_800f62bc(0x54);
            FUN_800f6630(0xea);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 == 0) {
              FUN_800f62bc(0xea);
            }
            FUN_800ffefc();
            iVar1 = FUN_8010a964();
            uVar2 = 1;
            if (iVar1 == 0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



