
void FUN_80106b1c(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_800f6630(0xda);
  FUN_800f5574(8);
  iVar2 = FUN_800f53d4();
  if (iVar2 != 0) {
    FUN_800f654c(0x80);
    FUN_800f8188(0x2115);
    FUN_800f6630(0xe7);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_800f7270(0x8d);
      uVar1 = *DAT_8019ed54;
      FUN_800f8fb8(0xe7);
      (&DAT_801cfd68)[uVar1] = 0x20ff;
    }
    FUN_800f6630(0xba);
    FUN_800f5410();
    uVar3 = FUN_800f3c3c(0x8c);
    FUN_800f3f38(uVar3);
    FUN_800f824c(0x4b);
    FUN_800f8fb8(0x4a);
    uVar3 = FUN_800f3c3c(0x4b);
    FUN_800f76bc(uVar3);
    FUN_800f76e8();
    uVar3 = FUN_800f3c3c(0x4a);
    FUN_800f7cc8(uVar3);
    uVar3 = FUN_800f3c3c(0x4b);
    FUN_800f76bc(uVar3);
    FUN_800f76e8();
    uVar3 = FUN_800f3c3c(0x4a);
    FUN_800f7cc8(uVar3);
    FUN_800f6630(0x8b);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_800f654c(0xd);
    }
    FUN_800f5410();
    FUN_800f4008(0x23);
    uVar3 = FUN_800f3c3c(0x4a);
    FUN_800f3f38(uVar3);
    FUN_800f824c(0x4a);
    FUN_800f6630(0x4b);
    FUN_800f4248(3);
    FUN_800f5410();
    FUN_800f4008(0x2c);
    FUN_800f824c(0x4b);
    FUN_800f7270(0x4a);
    FUN_800f8d6c(0x8d);
    (&DAT_801cfd68)[*DAT_8019ed54] = 0x2014;
  }
  return;
}



