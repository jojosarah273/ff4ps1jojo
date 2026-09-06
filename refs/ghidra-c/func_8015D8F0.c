
void FUN_8015d8f0(void)

{
  int iVar1;
  
  FUN_800f7270(0xa6);
  FUN_800f6b68(0x2005);
  FUN_800f4248(2);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6b68(0x2006);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      FUN_800f7270(0xa6);
      FUN_800f6b68(0x2003);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
      FUN_800f8768(0x2003);
      FUN_800f6630(0xd2);
      FUN_800f5140();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f90ec(0x29eb);
    }
  }
  return;
}



