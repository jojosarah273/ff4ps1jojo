
void FUN_80169a18(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  FUN_800f6630(100);
  FUN_800f5574(1);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
    FUN_800f5574(2);
    iVar3 = FUN_800f53d4();
    if (iVar3 == 0) {
      FUN_800f71dc(0x3d1e);
      FUN_800f8d00(0x7d1b);
      FUN_800f71dc(0xe9c5);
      FUN_800f8d00(0x7d19);
      FUN_800f654c(0x13);
      FUN_800f8188(0x7d1e);
      FUN_800f654c(0x80);
      FUN_800f8188(0x7d1d);
      FUN_8016d4d8();
    }
    else {
      FUN_80169958();
    }
  }
  else {
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f7500(0x3d19);
    FUN_800f8ebc(6);
    FUN_800f654c(6);
    FUN_800f824c(2);
    FUN_800f654c(1);
    FUN_800f824c(4);
    do {
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      do {
        FUN_800f6630(4);
        FUN_800f82ec(6);
        FUN_800f62bc(4);
        FUN_800f63bc();
        FUN_800f6364();
        FUN_800f5a90(5);
        iVar3 = FUN_800f53d4();
      } while (iVar3 == 0);
      FUN_800f9644(0x20);
      FUN_800f6658(6);
      FUN_800f5410();
      FUN_800f4064(0x80);
      FUN_800f8274(6);
      FUN_800f971c();
      FUN_800f9660(0x20);
      FUN_800f5da0(2);
      iVar3 = FUN_800f5b8c(0x202);
    } while (iVar3 != 0);
  }
  FUN_800f971c();
  FUN_800f81e8(0x2115);
  bVar1 = *DAT_8019ed40;
  bVar2 = *DAT_8019ed40;
  *DAT_8019ed54 = *DAT_8019ed44;
  uVar4 = (uint)CONCAT11(bVar1,bVar2);
  do {
    FUN_800f6b68(0x3d19);
    (&DAT_801cfd68)[uVar4] = (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar4] & 0xff00;
    FUN_800f6364();
    FUN_800f5958(0x4000);
    iVar3 = FUN_800f53d4();
    uVar4 = uVar4 + 1 & 0xffff;
  } while (iVar3 == 0);
  FUN_800f654c(0x80);
  FUN_800f81e8(0x2115);
  return;
}



