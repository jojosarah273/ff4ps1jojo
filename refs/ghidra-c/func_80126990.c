
void FUN_80126990(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xd2);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f6630(0xbe);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 == 0) {
      FUN_800f4248(0x7f);
      FUN_800f824c(0x59);
      FUN_800f5410();
      FUN_800f6630(0xbd);
      uVar2 = FUN_800f3c3c(0xb9);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0xb9);
      FUN_800f6630(0xba);
      uVar2 = FUN_800f3c3c(0x59);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0xba);
    }
    else {
      FUN_800f6630(0xb9);
      FUN_800f5480();
      uVar2 = FUN_800f3c3c(0xbd);
      FUN_800f7f48(uVar2);
      FUN_800f824c(0xb9);
      FUN_800f6630(0xba);
      uVar2 = FUN_800f3c3c(0xbe);
      FUN_800f7f48(uVar2);
      FUN_800f824c(0xba);
    }
    FUN_800f6630(0xc0);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 == 0) {
      FUN_800f4248(0x7f);
      FUN_800f824c(0x59);
      FUN_800f5410();
      FUN_800f6630(0xbf);
      uVar2 = FUN_800f3c3c(0xbb);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0xbb);
      FUN_800f6630(0xbc);
      uVar2 = FUN_800f3c3c(0x59);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0xbc);
    }
    else {
      FUN_800f6630(0xbb);
      FUN_800f5480();
      uVar2 = FUN_800f3c3c(0xbf);
      FUN_800f7f48(uVar2);
      FUN_800f824c(0xbb);
      FUN_800f6630(0xbc);
      uVar2 = FUN_800f3c3c(0xc0);
      FUN_800f7f48(uVar2);
      FUN_800f824c(0xbc);
    }
    FUN_800f6630(0xbc);
    FUN_800f3d48();
    FUN_800f6630(0xba);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6630(0xd3);
    FUN_80124704();
    FUN_800f5da0(0xd2);
  }
  return;
}



