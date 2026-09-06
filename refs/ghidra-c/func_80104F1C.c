
void FUN_80104f1c(void)

{
  int iVar1;
  
  FUN_800f6564(0x709);
  FUN_800f96e0();
  FUN_800f5140();
  FUN_800f9690();
  FUN_800f6a78(0xa1);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6630(0xd2);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f654c(0);
      return;
    }
  }
  FUN_800f9330();
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198ac4)[*DAT_8019ed58]);
  FUN_800f824c(0xc);
  FUN_800f5574(0x20);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f6564(0x1707);
    FUN_800f5410();
    FUN_800f4008((&DAT_80198acc)[*DAT_8019ed58]);
    FUN_800f824c(0xe);
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_8010d54c();
      FUN_800f7270(0x3d);
      FUN_800f6c68(0x7f4c00);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 == 0) {
        FUN_800f824c(0xee);
        goto LAB_80105080;
      }
    }
  }
  FUN_800f654c(0);
LAB_80105080:
  FUN_800f95a0();
  return;
}



