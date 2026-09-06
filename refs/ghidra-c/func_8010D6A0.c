
void FUN_8010d6a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_800f5574(0x11);
  iVar2 = FUN_800f53c0();
  uVar3 = 0;
  if (iVar2 == 0) {
    cVar1 = *DAT_8019ed40 << 3;
  }
  else {
    FUN_800f5574(0x30);
    iVar2 = FUN_800f53c0();
    if (iVar2 != 0) {
      FUN_800f5574(0x46);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_800f5480();
        FUN_800f8058(0x30);
        FUN_800f5140();
        FUN_800f71dc(0x6180);
      }
      else {
        FUN_800f5480();
        FUN_800f8058(0x46);
        FUN_800f71dc(0x7200);
      }
      goto LAB_8010d780;
    }
    FUN_800f5480();
    FUN_800f8058(0x11);
    uVar3 = 0x3300;
    cVar1 = *DAT_8019ed40 << 2;
  }
  *DAT_8019ed40 = cVar1;
  FUN_800f71dc(uVar3);
LAB_8010d780:
  FUN_800f9644(0x20);
  FUN_800f3d48();
  *DAT_8019ed44 = *DAT_8019ed44 >> 2;
  FUN_800f8274(0x4a);
  FUN_800f7894();
  FUN_800f5410();
  uVar3 = FUN_800f3c3c(0x4a);
  FUN_800f3f94(uVar3);
  FUN_800f8274(0x4a);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f5410();
  uVar3 = FUN_800f3c3c(0x4a);
  FUN_800f3f94(uVar3);
  FUN_800f5410();
  FUN_800f4064(0x8000);
  FUN_800f8274(0x4a);
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  FUN_800f6630(0xae);
  FUN_800f5140();
  FUN_800f5410();
  FUN_800f4008(0x42);
  FUN_800f824c(0x4d);
  FUN_800f8fb8(0x4c);
  FUN_800f71dc(0x200);
  FUN_800f8d6c(0x4e);
  FUN_800f654c(0x1b);
  FUN_800f824c(0x49);
  FUN_80170458();
  return;
}



