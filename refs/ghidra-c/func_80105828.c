
void FUN_80105828(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x709);
  FUN_800f9690();
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198ac4)[*DAT_8019ed54]);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198acc)[*DAT_8019ed54]);
  FUN_800f824c(0xe);
  FUN_800f8fb8(10);
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
LAB_80105938:
    FUN_800f6564(0x1704);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    FUN_800f5574(4);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6564(0x1715);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0xc);
      uVar2 = FUN_800f3b04(0x1713);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6630(0xe);
        uVar2 = FUN_800f3b04(0x1714);
        FUN_800f54d4(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_80105a78;
      }
    }
    FUN_800f6630(0xc);
    uVar2 = FUN_800f3b04(0x171d);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6630(0xe);
      uVar2 = FUN_800f3b04(0x171e);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80105a78;
    }
    FUN_800f6630(0xc);
    uVar2 = FUN_800f3b04(0x1721);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6630(0xe);
      uVar2 = FUN_800f3b04(0x1722);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80105a78;
    }
    FUN_800f6630(0xc);
    uVar2 = FUN_800f3b04(0x1725);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6630(0xe);
      uVar2 = FUN_800f3b04(0x1726);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f62bc(10);
      }
    }
  }
  else {
    FUN_800f6630(0xc);
    uVar2 = FUN_800f3b04(0x1719);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80105938;
    FUN_800f6630(0xe);
    uVar2 = FUN_800f3b04(0x171a);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80105938;
LAB_80105a78:
    FUN_800f62bc(10);
  }
  return;
}



