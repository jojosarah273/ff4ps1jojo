
void FUN_80175d90(void)

{
  int iVar1;
  
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(2);
    FUN_800f4248(0x10);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x53);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        FUN_800f62bc(0x53);
        FUN_80175e08();
      }
    }
  }
  return;
}



