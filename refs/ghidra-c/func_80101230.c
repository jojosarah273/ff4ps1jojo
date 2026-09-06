
void FUN_80101230(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9330();
  FUN_800f7210(0x172c);
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6564(0x1700);
    FUN_800f5410();
    FUN_800f4008(0xfb);
    FUN_800f8768(0x172e);
    FUN_800f6564(0x1706);
    FUN_800f8768(0x172f);
  }
  else {
    FUN_800f6564(0x1702);
    FUN_800f8768(0x172e);
    FUN_800f6564(0x1705);
    *DAT_8019ed40 = *DAT_8019ed40 << 6;
    FUN_800f5410();
    uVar2 = FUN_800f3b04(0x1706);
    FUN_800f3f38(uVar2);
    FUN_800f8768(0x172f);
  }
  FUN_800f6564(0x1707);
  FUN_800f8768(0x1730);
  *DAT_8019ed54 = *DAT_8019ed54 + 3;
  FUN_800f5958(0xc0);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f71dc(0);
  }
  FUN_800f8d00(0x172c);
  FUN_800f95a0();
  return;
}



