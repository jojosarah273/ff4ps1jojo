
void FUN_8015d6c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7270(0xa6);
  FUN_800f6b68(0x2005);
  FUN_800f4248(2);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6b68(0x2006);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      FUN_800f6b68(0x2004);
      FUN_800f4248(3);
      FUN_800f61e8();
      FUN_800f824c(0xa9);
      FUN_800f5574(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6b68(0x2004);
        uVar2 = FUN_800f3c3c(0xa9);
        FUN_800f78c4(uVar2);
        FUN_800f8768(0x2004);
        FUN_800f6630(0xd2);
        FUN_800f5140();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6b68(0x2b44);
        FUN_800f824c(0xa9);
        FUN_800f6b68(0x2b45);
        FUN_800f824c(0xaa);
        FUN_800f7210(0x3555);
        FUN_800f6630(0xa9);
        FUN_800f8768(0x2a04);
        FUN_800f6630(0xaa);
        FUN_800f8768(0x2a05);
        FUN_800f654c(0x40);
        FUN_800f8768(0x2a06);
      }
      else {
        FUN_800f6b68(0x2004);
        FUN_800f4248(0xfc);
        FUN_800f8768(0x2004);
        FUN_800f6b68(0x2003);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x40;
        FUN_800f8768(0x2003);
        FUN_800f6630(0xd2);
        FUN_800f5140();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6564(0x29eb);
        FUN_800f4248(0xf7);
        FUN_800f8188(0x29eb);
      }
    }
  }
  return;
}



