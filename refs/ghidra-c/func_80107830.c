
void FUN_80107830(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f71dc(0);
  FUN_800f654c(0xff);
  DAT_8019ede8 = 1;
  do {
    FUN_800f8768(0x774);
    FUN_800f6364();
    FUN_800f5958(0x180);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6630(0xba);
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0x3d);
  FUN_800f7500(0);
  FUN_800f8ebc(0x40);
  FUN_800f654c(8);
  FUN_800f824c(7);
  do {
    FUN_800f7270(0x3d);
    FUN_800f6b68(0x712);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) break;
    FUN_800f8fb8(0x19);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x19);
    FUN_800f7a40(uVar2);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x19);
    FUN_800f7a40(uVar2);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x19);
    FUN_800f7a40(uVar2);
    FUN_800f5410();
    uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x712);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0x18);
    FUN_800f6630(0x19);
    FUN_800f4008(0);
    FUN_800f824c(0x19);
    FUN_800f7270(0x18);
    FUN_800f6364();
    FUN_800f7594(0x40);
    FUN_800f654c(8);
    FUN_800f824c(8);
    do {
      FUN_800f6c68(0xf8000);
      FUN_801093b8();
      FUN_800f8960(0x774);
      FUN_800f3d48();
      FUN_800f8960(0x834);
      FUN_800f654c(0);
      FUN_800f3d48();
      FUN_800f63bc();
      FUN_800f6364();
      FUN_800f5da0(8);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
    FUN_800f7594(0x40);
    FUN_800f654c(200);
    FUN_800f8960(0x77c);
    FUN_800f7270(0x3d);
    FUN_800f6b68(0x713);
    FUN_800f824c(0x30);
    FUN_800f8fb8(0x31);
    FUN_800f8fb8(0x32);
    FUN_80174ce4();
    FUN_800f7594(0x40);
    FUN_800f6630(0x3a);
    FUN_800f8960(0x77d);
    FUN_800f6630(0x3b);
    FUN_800f8960(0x77e);
    FUN_800f6630(7);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0x40);
      FUN_800f5410();
      FUN_800f4008(0xd);
      FUN_800f824c(0x40);
    }
    else {
      FUN_800f6630(0x40);
      FUN_800f5410();
      FUN_800f4008(0xb);
      FUN_800f824c(0x40);
    }
    FUN_800f7270(0x3d);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f8d6c(0x3d);
    FUN_800f5da0(7);
    iVar1 = FUN_800f5b8c(2);
  } while (iVar1 == 0);
  FUN_800f654c(1);
  FUN_800f824c(0xe6);
  return;
}



