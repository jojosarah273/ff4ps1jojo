
void FUN_8010415c(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_800f654c(0x70);
  FUN_800f824c(7);
  FUN_800f8f74(0x2115);
  FUN_800f71dc(0);
  FUN_800f8d6c(0x3d);
  do {
    FUN_800f7270(0x3d);
    uVar2 = (uint)*DAT_8019ed54;
    do {
      FUN_800f6630(7);
      (&DAT_801cfd68)[uVar2] = (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar2] & 0xff00;
      FUN_800f62bc(7);
      FUN_800f6630(7);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(0x202);
      uVar2 = uVar2 + 1 & 0xffff;
    } while (iVar1 != 0);
    FUN_800f6630(0x3d);
    FUN_800f5410();
    FUN_800f4008(0x80);
    FUN_800f824c(0x3d);
    FUN_800f6630(0x3e);
    FUN_800f4008(0);
    FUN_800f824c(0x3e);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(0x80);
  FUN_800f824c(7);
  FUN_800f8f74(0x2115);
  FUN_800f71dc(0x40);
  FUN_800f8d6c(0x3d);
  do {
    FUN_800f7270(0x3d);
    uVar2 = (uint)*DAT_8019ed54;
    do {
      FUN_800f6630(7);
      (&DAT_801cfd68)[uVar2] = (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar2] & 0xff00;
      FUN_800f62bc(7);
      FUN_800f6630(7);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(0x202);
      uVar2 = uVar2 + 1 & 0xffff;
    } while (iVar1 != 0);
    FUN_800f6630(0x3d);
    FUN_800f5410();
    FUN_800f4008(0x80);
    FUN_800f824c(0x3d);
    FUN_800f6630(0x3e);
    FUN_800f4008(0);
    FUN_800f824c(0x3e);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



