
void FUN_8010e878(void)

{
  int iVar1;
  
  FUN_80103f40();
  FUN_800f7500(0x10);
  FUN_800f71dc(0);
  do {
    FUN_8010d9d4();
    FUN_800f7864();
    FUN_800f5410();
    FUN_800f4008(0x40);
    FUN_800f8960(0x300);
    FUN_8010d9d4();
    FUN_800f7864();
    FUN_800f5410();
    FUN_800f4008(0x40);
    FUN_800f8960(0x301);
    FUN_800f654c(0xff);
    FUN_800f8960(0x302);
    FUN_8010d9d4();
    FUN_800f4248(7);
    FUN_800f5140();
    *DAT_8019ed40 = *DAT_8019ed40 | 1;
    FUN_800f8960(0x303);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    *DAT_8019ed58 = *DAT_8019ed58 + 4;
    FUN_800f5a90(0x200);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



