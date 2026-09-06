
void FUN_8014bb94(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_800f8188(0xf133);
  FUN_800f6564(0x34c5);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f654c(4);
    FUN_800f8188(0xf2d0);
    FUN_800f71dc(0x8060);
    FUN_800f8d00(0xf289);
    FUN_8014b98c();
    FUN_800f654c(0x8d);
    FUN_8014d780();
    FUN_8014096c();
    FUN_800f654c(2);
    FUN_800f8188(0xef87);
    FUN_800f8f74(0xf2d0);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f90ec(0xebe6);
      FUN_800f8768(0xebe7);
      FUN_800f9200();
      FUN_800f654c(0x80);
      FUN_800f8768(0xec06);
      FUN_800f93dc();
      FUN_800f5410();
      FUN_800f4008(0x10);
      *DAT_8019ed54 = *DAT_8019ed54 + 2;
      FUN_800f5958(0x20);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f654c(0xa0);
    FUN_800f8188(0xf29f);
    do {
      FUN_8007259c();
      FUN_8014d98c();
      FUN_800f71dc(0);
      do {
        FUN_800f6b68(0xebe7);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_800f6564(0x34c4);
          iVar1 = FUN_800f6434(0x80);
          if (iVar1 == 0) {
            FUN_8014e9c4();
            FUN_800f4248(0x7f);
            FUN_800f5410();
            FUN_800f4008(0x60);
          }
          else {
            FUN_8014e9c4();
          }
          FUN_800f8768(0xebe6);
          FUN_800f654c(0xf);
          FUN_800f8768(0xec06);
        }
        *DAT_8019ed40 = *DAT_8019ed5c;
        FUN_800f4248(7);
        FUN_800f5410();
        FUN_800f4008(3);
        FUN_800f824c(2);
        FUN_800f6564(0x34c4);
        iVar1 = FUN_800f6434(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(0x3f);
          FUN_800f824c(0);
          FUN_800f6b68(0xebe6);
          FUN_800f5480();
          uVar2 = FUN_800f3c3c(2);
          FUN_800f7f48(uVar2);
          FUN_800f8768(0xebe6);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f6b68(0xec06);
            *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
            FUN_800f8768(0xec06);
          }
        }
        else {
          FUN_800f654c(0x7f);
          FUN_800f824c(0);
          FUN_800f6b68(0xebe6);
          FUN_800f5410();
          uVar2 = FUN_800f3c3c(2);
          FUN_800f3f38(uVar2);
          FUN_800f8768(0xebe6);
          *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
          bVar3 = *DAT_8019ed68;
          if (*DAT_8019ed50 == '\0') {
            bVar3 = bVar3 | 2;
          }
          *DAT_8019ed68 = bVar3;
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            FUN_800f6b68(0xec06);
            *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
            FUN_800f8768(0xec06);
          }
        }
        FUN_800f6b68(0xebe7);
        FUN_800f5410();
        FUN_800f4008(8);
        FUN_800f8768(0xebe7);
        *DAT_8019ed54 = *DAT_8019ed54 + 2;
        FUN_800f5958(0x20);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f71dc(0);
      FUN_800f7500(0);
      do {
        FUN_800f6b68(0xec06);
        iVar1 = FUN_800f6434(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(0xf0);
          FUN_800f8960(0x3c0);
          FUN_800f8960(0x3c1);
        }
        else {
          uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xec06);
          FUN_800f5b2c(uVar2);
          FUN_800f6b68(0xebe6);
          FUN_800f8960(0x3c0);
          FUN_800f6b68(0xebe7);
          FUN_800f5480();
          FUN_800f8058(4);
          FUN_800f8960(0x3c1);
          FUN_800f6564(0xf133);
          FUN_800f5574(0xe4);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f6564(0x1813);
            FUN_800f4248(2);
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0xf133);
            FUN_800f3f38(uVar2);
          }
          FUN_800f8960(0x3c2);
          FUN_800f6564(0x6cc0);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_800f6630(0);
            *DAT_8019ed40 = *DAT_8019ed40 ^ 0x40;
            FUN_800f8960(0x3c3);
            FUN_800f6b68(0xebe6);
            *DAT_8019ed40 = ~*DAT_8019ed40;
            FUN_800f5480();
            FUN_800f8058(0x10);
            FUN_800f8960(0x3c0);
          }
          else {
            FUN_800f6630(0);
            FUN_800f8960(0x3c3);
          }
        }
        *DAT_8019ed58 = *DAT_8019ed58 + 4;
        *DAT_8019ed54 = *DAT_8019ed54 + 2;
        FUN_800f5958(0x20);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f5d24(0xf29f);
      iVar1 = FUN_800f5b8c(2);
    } while (iVar1 == 0);
    FUN_800f8f74(0xef87);
    FUN_800f71dc(0);
    FUN_800f8d00(0xf289);
  }
  return;
}



