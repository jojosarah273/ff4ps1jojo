
void FUN_8016ca94(void)

{
  int iVar1;
  
  (&DAT_800d0000)[*DAT_8019ed4c] = *DAT_8019ed68;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9644(0x30);
  FUN_800f922c();
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f71dc(0);
  FUN_800f9330();
  FUN_800f94b8();
  FUN_800f971c();
  FUN_800f9660(0x20);
  FUN_800f654c(0x7e);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6630(0x40);
  iVar1 = FUN_800f6434(2);
  if (iVar1 != 0) {
    FUN_800f62bc(0x40);
    FUN_800f6564(0x3303);
    FUN_800f81e8(0x2100);
    FUN_800f6630(0xa0);
    FUN_800f81e8(0x211a);
    FUN_800f6564(0x7d28);
    FUN_800f81e8(0x212c);
    FUN_800f6630(100);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6630(0x4a);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(2);
      if (iVar1 != 0) {
        FUN_800f6630(0x66);
        DAT_8019ee68 = (ushort)*DAT_8019ed40;
        FUN_800f6630(0x67);
        DAT_8019ee68 = DAT_8019ee68 | (ushort)*DAT_8019ed40 << 8;
        FUN_800f6630(0x8c);
        FUN_800f81e8(0x211f);
        FUN_800f6630(0x8d);
        FUN_800f81e8(0x211f);
        FUN_800f6630(0x8e);
        FUN_800f81e8(0x2120);
        FUN_800f6630(0x8f);
        FUN_800f81e8(0x2120);
        FUN_800f6564(0x7d1f);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_800f6630(100);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_800f9644(0x20);
            FUN_800f6658(0x66);
            FUN_800f6214();
            FUN_800f55c0(0x400);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f971c();
            }
          }
          else {
            FUN_800f9644(0x20);
            FUN_800f6658(0x66);
            FUN_800f6214();
            FUN_800f55c0(0x400);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f5cf8();
            }
          }
          FUN_800f8274(0x66);
          FUN_800f5410();
          FUN_800f4064(0x80);
          FUN_800f8274(0x8e);
          FUN_800f971c();
          FUN_800f9660(0x20);
        }
      }
    }
    else {
      FUN_800f6564(0x61);
      FUN_800f81e8(0x211b);
      FUN_800f6564(0x62);
      FUN_800f81e8(0x211b);
      FUN_800f6564(0x61);
      FUN_800f81e8(0x211e);
      FUN_800f6564(0x62);
      FUN_800f81e8(0x211e);
      FUN_800f6630(0x5d);
      DAT_8019ee60 = (ushort)*DAT_8019ed40;
      FUN_800f6630(0x5e);
      DAT_8019ee60 = DAT_8019ee60 | (ushort)*DAT_8019ed40 << 8;
      FUN_800f6630(0x5f);
      DAT_8019ee68 = (ushort)*DAT_8019ed40;
      FUN_800f6630(0x60);
      DAT_8019ee68 = DAT_8019ee68 | (ushort)*DAT_8019ed40 << 8;
      FUN_800f6630(0x8c);
      FUN_800f81e8(0x211f);
      FUN_800f6630(0x8d);
      FUN_800f81e8(0x211f);
      FUN_800f6630(0x8e);
      FUN_800f81e8(0x2120);
      FUN_800f6630(0x8f);
      FUN_800f81e8(0x2120);
    }
    FUN_8016bd2c();
    FUN_800f6630(100);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8016bc6c();
      FUN_80181498(&DAT_801d7d68,0x300,0);
      FUN_8016b68c();
      FUN_8016ac7c();
      FUN_8016c858();
      FUN_800f6630(100);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f7210(0x2004);
        FUN_800f5958(0xff80);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f654c(1);
          FUN_800f8188(0x5b);
        }
      }
    }
    else {
      FUN_8016d9b0();
      FUN_8016e0f8();
    }
    FUN_800f6564(0x5b);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x4a);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f71dc(10);
        FUN_800f7500(1);
        FUN_8016be1c();
      }
    }
    FUN_800f6564(0x7d25);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_8016e358();
    }
    FUN_800f8fb8(0x40);
    FUN_800f8fb8(0x41);
    FUN_800f62bc(0x4a);
  }
  FUN_800f9644(0x30);
  FUN_800f94b8();
  FUN_800f9448();
  FUN_800f960c();
  FUN_800f95a0();
  FUN_800f9410();
  *DAT_8019ed4c = *DAT_8019ed4c + 1;
  *DAT_8019ed68 = (&DAT_800d0000)[*DAT_8019ed4c];
  return;
}



