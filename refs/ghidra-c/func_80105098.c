
void FUN_80105098(void)

{
  int iVar1;
  
  FUN_800f6630(0xab);
  FUN_800f5140();
  FUN_800f96e0();
  FUN_800f6d70(0x6a1);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6d70(0x6a1);
    FUN_800f4248(3);
    FUN_800f4370(0xd2);
    iVar1 = FUN_800f4120(2);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_800f6630(0xab);
  FUN_800f96e0();
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198ac4)[*DAT_8019ed58]);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198acc)[*DAT_8019ed58]);
  FUN_800f824c(0xe);
  FUN_800f654c(0xff);
  FUN_800f824c(0xae);
  FUN_8010d4ec();
  return;
}



