
void FUN_80106d6c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f92d8();
  FUN_800f9644(0x20);
  FUN_800f922c();
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  FUN_800f71dc(0x600);
  FUN_800f9330();
  FUN_800f94b8();
  FUN_800f654c(0);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f8fb8(0x7f);
  FUN_800f6630(0xc4);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_80119c7c();
    FUN_800f8fb8(0xc4);
  }
  else {
    FUN_8017668c();
  }
  FUN_801743e0();
  FUN_800f6630(0x7e);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f8fb8(0x7e);
  }
  else {
    FUN_800f6630(0xd9);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800feb10();
    }
    else {
      FUN_800f6564(0x1700);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800fdb5c();
        FUN_800f6630(0x7a);
        FUN_800f7864();
        iVar1 = FUN_800f7728(0x101);
        if (iVar1 == 0) {
          FUN_800f6630(0x94);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_800f8fb8(0x94);
            FUN_8011dbf0();
          }
          FUN_80175f00();
        }
        else {
          FUN_800f6630(0x94);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_800f8fb8(0x94);
            FUN_8011dbf0();
          }
          FUN_80174f64();
          FUN_80175004();
          FUN_80175494();
        }
      }
      else {
        FUN_800f6630(0x94);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f8fb8(0x94);
          FUN_8011da88();
        }
        FUN_80175b60();
        FUN_8011a334();
        FUN_8010a5a0();
        FUN_8010a204();
        FUN_80109a28();
        FUN_801098c8();
        FUN_800f6630(0xdf);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_801096f0();
        }
        FUN_800f6630(0xda);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_80106960();
        }
        FUN_800f6630(0x7a);
        FUN_800f7864();
        iVar1 = FUN_800f7728(0x101);
        if (iVar1 == 0) {
          FUN_80109b08();
          FUN_80107530();
          FUN_801750dc();
        }
        else {
          FUN_80175f00();
          FUN_800fca08();
          FUN_801769b4();
        }
      }
    }
  }
  FUN_800f6630(0xca);
  FUN_800f5574(2);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f62bc(0x80);
    FUN_800f6630(0x80);
    FUN_800f8188(0x2100);
    FUN_800f5574(0xf);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8fb8(0xca);
    }
  }
  FUN_8011bd88();
  FUN_800f6630(0xc2);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6630(0xd9);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0xb1);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6564(0x1704);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_800f6630(0x7b);
          FUN_800f4248(0xc);
          *DAT_8019ed40 = *DAT_8019ed40 << 2;
          *DAT_8019ed40 = *DAT_8019ed40 | 3;
          FUN_800f824c(0x77);
        }
      }
    }
  }
  FUN_800f6630(0x77);
  FUN_800f8188(0x2106);
  FUN_800f8fb8(0x10);
  FUN_800f6630(0xe3);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(1);
    FUN_800f824c(0x10);
    FUN_8010d9d4();
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 != 0) {
      FUN_800f6630(0x5a);
      FUN_800f5480();
      uVar2 = FUN_800f3c3c(0x10);
      FUN_800f7f48(uVar2);
      DAT_8019ee60 = (ushort)*DAT_8019ed40;
      FUN_800f6630(0x5b);
      FUN_800f8058(0);
      DAT_8019ee60 = DAT_8019ee60 | (ushort)*DAT_8019ed40 << 8;
      FUN_800f6630(0x5e);
      FUN_800f5480();
      uVar2 = FUN_800f3c3c(0x10);
      FUN_800f7f48(uVar2);
      DAT_8019ee62 = (ushort)*DAT_8019ed40;
      FUN_800f6630(0x5f);
      FUN_800f8058(0);
      goto LAB_80107300;
    }
  }
  FUN_800f6630(0x5a);
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(0x10);
  FUN_800f3f38(uVar2);
  DAT_8019ee60 = (ushort)*DAT_8019ed40;
  FUN_800f6630(0x5b);
  FUN_800f4008(0);
  DAT_8019ee60 = DAT_8019ee60 | (ushort)*DAT_8019ed40 << 8;
  FUN_800f6630(0x5e);
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(0x10);
  FUN_800f3f38(uVar2);
  DAT_8019ee62 = (ushort)*DAT_8019ed40;
  FUN_800f6630(0x5f);
  FUN_800f4008(0);
LAB_80107300:
  DAT_8019ee62 = DAT_8019ee62 | (ushort)*DAT_8019ed40 << 8;
  if ((DAT_8019ecfe & 0x10) == 0) {
    FUN_800f6630(0x60);
    DAT_8019ee6a = (ushort)*DAT_8019ed40;
    FUN_800f6630(0x61);
    DAT_8019ee6a = DAT_8019ee6a | (ushort)*DAT_8019ed40 << 8;
  }
  if (DAT_8019ecfe == 0) {
    FUN_800f6630(0x5c);
    DAT_8019ee68 = (ushort)*DAT_8019ed40;
    FUN_800f6630(0x5d);
    DAT_8019ee68 = DAT_8019ee68 | (ushort)*DAT_8019ed40 << 8;
  }
  DAT_8019ecfe = 0;
  FUN_800f6630(0x5a);
  FUN_800f5410();
  FUN_800f4008(0x78);
  FUN_800f824c(0x6a);
  FUN_800f6630(0x5b);
  FUN_800f4008(0);
  FUN_800f824c(0x6b);
  FUN_800f6630(0x5c);
  FUN_800f5410();
  FUN_800f4008(0x78);
  FUN_800f824c(0x6c);
  FUN_800f6630(0x5d);
  FUN_800f4008(0);
  FUN_800f824c(0x6d);
  FUN_800f6630(0x6a);
  FUN_800f8188(0x211f);
  FUN_800f6630(0x6b);
  FUN_800f8188(0x211f);
  FUN_800f6630(0x6c);
  FUN_800f8188(0x2120);
  FUN_800f6630(0x6d);
  FUN_800f8188(0x2120);
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f654c(0x30);
    FUN_800f8188(0x420c);
  }
  FUN_8011eadc();
  FUN_800f62bc(0x7a);
  FUN_800f6240(0xfff);
  FUN_800f8fb8(0x7d);
  FUN_800f9644(0x20);
  FUN_800f94b8();
  FUN_800f9448();
  FUN_800f960c();
  FUN_800f95a0();
  FUN_800f9410();
  FUN_800f9538();
  return;
}



