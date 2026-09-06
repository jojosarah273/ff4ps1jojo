
bool FUN_8010a964(void)

{
  int iVar1;
  
  FUN_800f6564(0x1705);
  FUN_800f824c(8);
  FUN_800f5140();
  *DAT_8019ed58 = *DAT_8019ed44;
  iVar1 = FUN_800f73e0(0x202);
  if (iVar1 == 0) {
    FUN_800f6d70(0x6a4);
    FUN_800f4248(0x20);
    iVar1 = FUN_800f4120(2);
    if (iVar1 != 0) goto LAB_8010a9e4;
    FUN_800f654c(4);
    FUN_800f824c(8);
  }
  else {
LAB_8010a9e4:
    FUN_800f6d70(0x6a3);
    FUN_800f4248(3);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f4370(0xd2);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        return false;
      }
    }
  }
  FUN_800f6630(8);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b50)[*DAT_8019ed58]);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b58)[*DAT_8019ed58]);
  FUN_800f824c(0xe);
  FUN_8010d458();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8010af2c();
      goto LAB_8010ae68;
    }
  }
  FUN_800f6630(8);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b60)[*DAT_8019ed58]);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b68)[*DAT_8019ed58]);
  FUN_800f824c(0xe);
  FUN_8010d458();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8010af2c();
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574((&DAT_80198b90)[*DAT_8019ed58]);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_8010ae68;
      }
    }
  }
  FUN_800f6630(8);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b70)[*DAT_8019ed58]);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b78)[*DAT_8019ed58]);
  FUN_800f824c(0xe);
  FUN_8010d458();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8010af2c();
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574((&DAT_80198b98)[*DAT_8019ed58]);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_8010ae68;
      }
    }
  }
  FUN_800f6630(8);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6564(0x1706);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b80)[*DAT_8019ed58]);
  FUN_800f824c(0xc);
  FUN_800f6564(0x1707);
  FUN_800f5410();
  FUN_800f4008((&DAT_80198b88)[*DAT_8019ed58]);
  FUN_800f824c(0xe);
  FUN_8010d458();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    return false;
  }
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    return false;
  }
  FUN_8010af2c();
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    return false;
  }
  FUN_800f5574((&DAT_80198ba0)[*DAT_8019ed58]);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    return false;
  }
LAB_8010ae68:
  FUN_800f6b68(0x909);
  FUN_800f9200();
  FUN_800f6b68(0x901);
  FUN_800f4248(0x10);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1705);
    FUN_800f5410();
    FUN_800f4008(2);
    FUN_800f4248(3);
    FUN_800f8768(0x909);
  }
  FUN_800f9330();
  FUN_8010b010();
  FUN_800f95a0();
  FUN_800f6b68(0x907);
  FUN_800f9330();
  iVar1 = FUN_8011b158();
  if (iVar1 == 0) {
    FUN_800f95a0();
    FUN_800f93dc();
    FUN_800f8768(0x909);
    FUN_800f8fb8(0xee);
  }
  return iVar1 != 0;
}



