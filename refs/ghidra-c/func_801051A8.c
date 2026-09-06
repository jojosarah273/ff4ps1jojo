
void FUN_801051a8(void)

{
  int iVar1;
  
  FUN_800f6630(0xa1);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6630(0xa1);
    FUN_800f4248(3);
    FUN_800f4370(0xd2);
    iVar1 = FUN_800f4120(2);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_800f6564(0x1706);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f824c(0xe);
  FUN_8010d2a0();
  return;
}



