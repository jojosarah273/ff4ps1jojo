
void FUN_80137938(void)

{
  int iVar1;
  
  FUN_800f6630(0);
  FUN_800f4248(0x40);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1b7a);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1b7c);
      FUN_800f5410();
      FUN_800f4008(10);
      FUN_800f5574(100);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f654c(10);
      }
      FUN_800f8188(0x1b7c);
      FUN_800f6240(0x1bcb);
    }
  }
  FUN_800f6630(1);
  FUN_800f4248(8);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1b7a);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1b7c);
      FUN_800f61e8();
      FUN_800f5574(100);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f654c(2);
      }
      FUN_800f8188(0x1b7c);
      FUN_800f6240(0x1bcb);
    }
  }
  FUN_800f6630(1);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1b7a);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1b7c);
      FUN_800f5ccc();
      FUN_800f5574(2);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f654c(99);
      }
      FUN_800f8188(0x1b7c);
      FUN_800f6240(0x1bcb);
    }
  }
  FUN_800f6630(1);
  FUN_800f4248(3);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1b7a);
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f4248(1);
    FUN_800f8188(0x1b7a);
    FUN_800f6240(0x1bcb);
  }
  return;
}



