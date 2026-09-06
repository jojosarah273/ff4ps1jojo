
void FUN_8016d4d8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f7210(0x7d19);
  FUN_800f8d6c(0x36);
  FUN_800f6564(0x7d1e);
  FUN_800f824c(0x38);
  FUN_800f7210(0x7d1b);
  FUN_800f8d6c(0x39);
  FUN_800f6630(0x39);
  FUN_800f5410();
  uVar1 = FUN_800f3b04(0x7d1d);
  FUN_800f3f38(uVar1);
  FUN_800f824c(0x3c);
  FUN_800f6630(0x3a);
  FUN_800f4008(0);
  FUN_800f824c(0x3d);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  while( true ) {
    if (DAT_800d0036 == -0x153b) {
      DAT_800d0036 = -0x7e0;
    }
    FUN_800f6ea8(0x36);
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) break;
    FUN_800f5574(0xf);
    iVar2 = FUN_800f53c0();
    if (iVar2 == 0) {
      FUN_8016d600();
      FUN_8016d768();
    }
    else {
      FUN_8016d798();
      FUN_8016d768();
    }
  }
  return;
}



