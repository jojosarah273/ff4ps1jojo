
void FUN_8010543c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xd5);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    return;
  }
  FUN_80102c30();
  FUN_800f6630(0xb1);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6630(4);
    FUN_800f824c(2);
    FUN_800f6630(5);
    FUN_800f824c(3);
  }
  FUN_800f6630(0xa1);
  FUN_800f4248(0x41);
  FUN_800f824c(0xd2);
  FUN_800f6564(0x1715);
  FUN_800f5574(2);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
LAB_80105598:
    FUN_80101788();
    FUN_800f6630(3);
    FUN_800f4248(0xf);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(1);
      }
      else {
        FUN_800f6630(3);
        FUN_800f4248(2);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f654c(3);
        }
        else {
          FUN_800f6630(3);
          FUN_800f4248(4);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) {
            FUN_800f654c(2);
          }
          else {
            FUN_800f654c(0);
          }
        }
      }
      FUN_800f8188(0x1705);
      FUN_800f61e8();
      FUN_800f8188(0x709);
      FUN_800f5140();
      FUN_800f9690();
      FUN_800f6630(0xb1);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) {
LAB_801057e0:
        FUN_800f6564(0x709);
        goto LAB_801057e8;
      }
      FUN_800f6564(0x1700);
      FUN_800f5574(1);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
LAB_8010572c:
        FUN_800f6564(0x1704);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) goto LAB_80105744;
        FUN_800f6a78(0xa1);
        FUN_800f4248(0x41);
        FUN_800f4370(0xd2);
      }
      else {
        FUN_800f6564(0x1704);
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(4);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) goto LAB_8010572c;
          FUN_800f6564(0x1281);
          uVar2 = 4;
        }
        else {
          FUN_800f6564(0x1287);
          uVar2 = 2;
        }
        FUN_800f4248(uVar2);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) goto LAB_8010572c;
        FUN_800f654c(1);
LAB_80105744:
        FUN_800f96e0();
        FUN_800f6a78(0xa1);
        *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_80198ad4)[*DAT_8019ed58];
      }
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_80105828();
        FUN_800f6630(10);
        iVar1 = FUN_800f6434(2);
        if (iVar1 != 0) goto LAB_801057e0;
      }
    }
    FUN_800f8fb8(0xab);
  }
  else {
    FUN_800f6564(0x1706);
    FUN_800f5480();
    uVar2 = FUN_800f3b04(0x1716);
    FUN_800f7f48(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      iVar1 = FUN_800f53fc();
      uVar2 = 1;
      if (iVar1 == 0) {
        uVar2 = 3;
      }
    }
    else {
      FUN_800f6564(0x1707);
      FUN_800f5480();
      uVar2 = FUN_800f3b04(0x1717);
      FUN_800f7f48(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f654c(0x80);
        FUN_800f824c(2);
        FUN_800f8fb8(0x54);
        goto LAB_80105598;
      }
      iVar1 = FUN_800f53fc();
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
    }
    FUN_800f654c(uVar2);
    FUN_800f8188(0x1705);
    FUN_800f61e8();
LAB_801057e8:
    FUN_800f824c(0xab);
    FUN_800ffb5c();
    FUN_800f6564(0x1707);
    FUN_800f8188(0x70a);
    FUN_8011de40();
    FUN_8011c2c8();
  }
  return;
}



