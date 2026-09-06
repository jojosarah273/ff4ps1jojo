
void FUN_800fad48(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  RECT local_18;
  
  FUN_800fa460();
  FUN_800f654c(0x17);
  FUN_800f8188(0x212c);
  FUN_800f654c(9);
  FUN_800f8188(0x2105);
  FUN_80174710();
  FUN_800f71dc(0x2000);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x1000);
  FUN_800f8d6c(0x45);
  FUN_800f654c(10);
  FUN_800f824c(0x3c);
  FUN_800f71dc(0xf000);
  FUN_800f8d6c(0x3d);
  FUN_801766b0();
  FUN_800f71dc(0x2800);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x1000);
  FUN_800f8d6c(0x45);
  FUN_800f8fb8(0x76);
  FUN_80176748();
  FUN_801706c0();
  FUN_800f6564(0xfdf);
  FUN_800f4248(0x7f);
  FUN_8011c27c();
  FUN_801745f4();
  FUN_801757a4();
  FUN_800f6630(0x85);
  iVar3 = FUN_800f6434(0x202);
  if (iVar3 == 0) {
    FUN_800f6630(0xb1);
    iVar3 = FUN_800f6434(0x202);
    if (iVar3 == 0) {
      FUN_8010a2ac();
    }
  }
  FUN_800f8fb8(0xd1);
  FUN_800f8fb8(0x85);
  FUN_800f6630(0xb1);
  iVar3 = FUN_800f6434(0x202);
  if (iVar3 == 0) {
    FUN_800fd718();
  }
  FUN_800f6630(0x81);
  iVar3 = FUN_800f6434(0x202);
  if (iVar3 == 0) {
    FUN_800f654c(0x11);
    FUN_800f8188(0x212d);
    FUN_800f6564(0xfe4);
    FUN_800f7864();
    iVar3 = FUN_800f7728(0x101);
    if (iVar3 == 0) {
      FUN_800f654c(2);
      FUN_800f8188(0x2130);
      FUN_800f654c(0x43);
      FUN_800f8188(0x2131);
    }
    else {
      FUN_800f8f74(0x2130);
      FUN_800f8f74(0x2131);
    }
  }
  else {
    FUN_800f8f74(0x212d);
    FUN_800f654c(0x83);
    FUN_800f8188(0x2131);
    FUN_800f6630(0x83);
    FUN_800f4248(0xe0);
    uVar4 = FUN_800f3c3c(0x81);
    FUN_800f78c4(uVar4);
    FUN_8017ea90(*DAT_8019ed40);
  }
  FUN_8011d8e0();
  FUN_8011d658();
  iVar3 = 0x10000;
  FUN_801767d8();
  FUN_800fc8e8();
  FUN_801769b4();
  FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
  FUN_8017f9a8(&DAT_801cfd68,0x200,0,0x11);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0x100,2);
  DAT_8019ee2e = 0x13ff;
  DAT_8019ee2c = 0x13ff;
  DAT_8019ee30 = 0;
  FUN_800ffb1c();
  FUN_8011bd88();
  psVar7 = &DAT_8019a7fe;
  psVar6 = &DAT_8019a774;
  do {
    psVar1 = psVar7 + -1;
    sVar2 = *psVar7;
    psVar7 = psVar7 + 2;
    local_18.x = *psVar6;
    local_18.y = psVar6[1];
    local_18.w = psVar6[2];
    local_18.h = psVar6[3];
    psVar6 = psVar6 + 4;
    MoveImage(&local_18,(int)*psVar1,(int)sVar2);
    DrawSync(0);
    iVar5 = iVar3 >> 0x10;
    iVar3 = iVar3 + 0x10000;
  } while (iVar5 < 0x11);
  return;
}



