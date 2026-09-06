
void FUN_80102770(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_800f3c3c(0);
  FUN_800f6630(0xab);
  iVar4 = FUN_800f6434(0x202);
  if (iVar4 == 0) goto LAB_80102c18;
  FUN_800f6630(0xc1);
  iVar4 = FUN_800f6434(2);
  if (iVar4 == 0) {
    FUN_800f6630(0x7b);
    FUN_800f4248(8);
    iVar4 = FUN_800f4120(0x202);
    if (iVar4 == 0) {
      FUN_800f62bc(0xc4);
    }
  }
  if ((DAT_8019ed30 < 2) && (*(char *)(iVar3 + 0xac) == '\0')) {
    DAT_8019ed31 = '\0';
    DAT_8019ed74 = iVar3 + 0xac;
  }
  if (((DAT_8019ed30 == 1) && (DAT_8019ed31 == '\0')) && (*(char *)(iVar3 + 0xac) == '\0')) {
    DAT_8019ed30 = 2;
    *(char *)(iVar3 + 0xac) = *(char *)(iVar3 + 0xac) + '\x01';
  }
  FUN_800f62bc(0x7b);
  FUN_800f6630(0xac);
  FUN_800f9690();
  FUN_800f6630(0xab);
  FUN_800f5574(1);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
    FUN_800f5574(2);
    iVar3 = FUN_800f53d4();
    if (iVar3 == 0) {
      FUN_800f5574(3);
      iVar3 = FUN_800f53d4();
      if (iVar3 == 0) {
        FUN_800f5574(4);
        iVar3 = FUN_800f53d4();
        if (iVar3 != 0) {
          FUN_800f6630(0x5a);
          FUN_800f824c(6);
          FUN_800f5480();
          FUN_800f8058((&DAT_80198ae4)[*DAT_8019ed54]);
          FUN_800f824c(0x5a);
          FUN_800f6630(0x5b);
          FUN_800f8058(0);
          FUN_800f4248(7);
          FUN_800f824c(0x5b);
          FUN_800f6630(6);
          FUN_800f4248(0xf);
          FUN_800f5480();
          FUN_800f8058((&DAT_80198ae4)[*DAT_8019ed54]);
          iVar3 = FUN_800f53c0();
          if (iVar3 == 0) {
            FUN_800f6564(0x6fa);
            FUN_800f9690();
            FUN_800f6564(0x1706);
            FUN_800f5ccc();
            *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_80198adc)[*DAT_8019ed54];
            FUN_800f8188(0x1706);
          }
        }
        goto LAB_80102c18;
      }
      FUN_800f6630(0x5c);
      FUN_800f5410();
      FUN_800f4008((&DAT_80198ae4)[*DAT_8019ed54]);
      FUN_800f824c(0x5c);
      FUN_800f6630(0x5d);
      FUN_800f4008(0);
      FUN_800f4248(7);
      FUN_800f824c(0x5d);
      FUN_800f6630(0x5c);
      FUN_800f4248(0xf);
      iVar3 = FUN_800f4120(0x202);
      if (iVar3 != 0) goto LAB_80102c18;
      FUN_800f6564(0x6fa);
      FUN_800f9690();
      FUN_800f6564(0x1707);
      FUN_800f61e8();
      goto LAB_80102ad4;
    }
    FUN_800f6630(0x5a);
    FUN_800f5410();
    FUN_800f4008((&DAT_80198ae4)[*DAT_8019ed54]);
    FUN_800f824c(0x5a);
    FUN_800f6630(0x5b);
    FUN_800f4008(0);
    FUN_800f4248(7);
    FUN_800f824c(0x5b);
    FUN_800f6630(0x5a);
    FUN_800f4248(0xf);
    iVar3 = FUN_800f4120(0x202);
    if (iVar3 != 0) goto LAB_80102c18;
    FUN_800f6564(0x6fa);
    FUN_800f9690();
    FUN_800f6564(0x1706);
    FUN_800f61e8();
    bVar1 = *DAT_8019ed40;
    bVar2 = (&DAT_80198adc)[*DAT_8019ed54];
    uVar5 = 0x1706;
  }
  else {
    FUN_800f6630(0x5c);
    FUN_800f824c(6);
    FUN_800f5480();
    FUN_800f8058((&DAT_80198ae4)[*DAT_8019ed54]);
    FUN_800f824c(0x5c);
    FUN_800f6630(0x5d);
    FUN_800f8058(0);
    FUN_800f4248(7);
    FUN_800f824c(0x5d);
    FUN_800f6630(6);
    FUN_800f4248(0xf);
    FUN_800f5480();
    FUN_800f8058((&DAT_80198ae4)[*DAT_8019ed54]);
    iVar3 = FUN_800f53c0();
    if (iVar3 != 0) goto LAB_80102c18;
    FUN_800f6564(0x6fa);
    FUN_800f9690();
    FUN_800f6564(0x1707);
    FUN_800f5ccc();
LAB_80102ad4:
    bVar1 = *DAT_8019ed40;
    bVar2 = (&DAT_80198adc)[*DAT_8019ed54];
    uVar5 = 0x1707;
  }
  *DAT_8019ed40 = bVar1 & bVar2;
  FUN_800f8188(uVar5);
LAB_80102c18:
  FUN_801026ec();
  return;
}



