
void FUN_80100a98(void)

{
  int iVar1;
  
  FUN_800f6564(0x8fc);
  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
  FUN_800f9690();
  FUN_800f6564(0x1701);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f5410();
    FUN_800f4008(0x20);
    FUN_800f9690();
  }
  FUN_800f6564(0x8fc);
  FUN_800f4248(7);
  FUN_800f61e8();
  FUN_800f96e0();
  return;
}



