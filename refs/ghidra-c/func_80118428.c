
void FUN_80118428(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f824c(7);
  *DAT_8019ed40 = *DAT_8019ed40 << 3;
  FUN_800f5480();
  uVar1 = FUN_800f3c3c(7);
  FUN_800f7f48(uVar1);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f654c(7);
  FUN_800f824c(7);
  FUN_800f7594(0x3d);
  do {
    FUN_800f6c68(0xfab00);
    FUN_800f8960(0x1030);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5da0(7);
    iVar2 = FUN_800f5b8c(0x202);
  } while (iVar2 != 0);
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f76bc(uVar1);
  FUN_800f76e8();
  uVar1 = FUN_800f3c3c(0x3d);
  FUN_800f7cc8(uVar1);
  FUN_800f6630(0x3d);
  *DAT_8019ed40 = *DAT_8019ed40 >> 5;
  FUN_80150a30();
  return;
}



