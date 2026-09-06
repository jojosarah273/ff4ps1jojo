
void FUN_80128d4c(void)

{
  int iVar1;
  
  FUN_800f65c8(0x1b49);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_80123d3c();
    FUN_80125a64();
    FUN_80120f1c();
    FUN_800f7500(DAT_80199190);
    FUN_8011ef30();
    FUN_800f7500(DAT_80199192);
    FUN_8011ef30();
    FUN_800f7500(0x1040);
    FUN_800f654c(0x30);
    FUN_800f8188(0x1c1);
    FUN_800f6564(0x1b18);
    FUN_80124704();
  }
  else {
    FUN_800f7500(DAT_80199244);
    FUN_8011ef30();
  }
  FUN_800f7500(DAT_80199196);
  FUN_8011ef30();
  FUN_80120e2c();
  FUN_800f7500(DAT_80199194);
  FUN_8011ef30();
  FUN_80129ad4();
  FUN_800f9644(0x20);
  FUN_800f6558(0x800);
  FUN_800f71dc(0xd600);
  FUN_800f7500(0xb600);
  FUN_800f3d64(0x7e7e);
  FUN_800f9660(0x20);
  FUN_80120f1c();
  FUN_800f6564(0x1b49);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f7500(DAT_80199244);
    FUN_8011ef30();
  }
  FUN_800f654c(0x7e);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f71dc(0x1b00);
  FUN_800f654c(10);
  do {
    FUN_800f90ec(0);
    FUN_800f5ccc();
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f8f74(0x1b08);
  FUN_800f71dc(0x1b0a);
  FUN_800f7500(6);
  do {
    FUN_800f6b68(0);
    FUN_800f8768(7);
    FUN_800f6364();
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6240(0x1b08);
    }
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f5d24(0x1b08);
  FUN_800f6564(0x1b08);
  FUN_800f8188(0x1b09);
  FUN_80129aac();
  FUN_80129c54();
  FUN_800f654c(2);
  FUN_800f8188(0x1b06);
  FUN_801264c0();
  FUN_80126458();
  FUN_80126528();
  FUN_800f654c(0x19);
  FUN_800f81e8(0x212c);
  FUN_800f71dc(0xfffc);
  FUN_800f8d6c(0x90);
  FUN_800f8d6c(0x9c);
  FUN_8016ea7c();
  FUN_8011f6a4();
  FUN_80126590();
  FUN_800f8f74(0x1bba);
LAB_801295c0:
  FUN_80129808();
  do {
    do {
      FUN_800f6564(0x1b06);
      FUN_801224d0();
      *DAT_8019ed40 = (&DAT_80199d4c)[*DAT_8019ed54];
      FUN_800f824c(0x46);
      FUN_800f654c(0xc);
      FUN_800f824c(0x45);
      FUN_8011f6d4();
      FUN_80129d2c();
      FUN_8011f684();
      FUN_8011f884();
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1b06);
        FUN_800f5574(2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f6564(0x1b08);
          iVar1 = FUN_800f6434(0x80);
          if (iVar1 == 0) {
            FUN_80126610();
          }
          else {
            FUN_80129838();
            FUN_80129c54();
            FUN_801264c0();
            FUN_8011ff40();
            FUN_80126610();
          }
          return;
        }
        FUN_800f6564(0x1bba);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_80129ef4();
        }
        goto LAB_80128fec;
      }
      FUN_800f6630(1);
      FUN_800f52bc(8);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x1b06);
        FUN_800f5ccc();
        FUN_800f8188(0x1b06);
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(2);
        }
        FUN_800f8188(0x1b06);
        FUN_80129808();
      }
      FUN_800f6630(1);
      FUN_800f52bc(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_80129e94();
      }
      FUN_800f6630(1);
      FUN_800f52bc(3);
      iVar1 = FUN_800f53d4();
    } while (iVar1 != 0);
    FUN_800f6564(0x1bba);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_80129ef4();
    }
    FUN_800f6564(0x1b06);
    FUN_800f5574(2);
    iVar1 = FUN_800f53c0();
  } while (iVar1 != 0);
LAB_80128fec:
  FUN_800f654c(1);
  FUN_800f8188(0x1b07);
  FUN_80129dfc();
  do {
    FUN_80129808();
    FUN_800f6564(0x1b06);
    FUN_800f5140();
    FUN_800f824c(0x45);
    FUN_800f8fb8(0x46);
    FUN_800f7270(0x45);
    FUN_800f9644(0x20);
    *DAT_8019ed40 = (&DAT_80199d6c)[*DAT_8019ed54];
    DAT_8019ed40[1] = (&DAT_80199d6d)[*DAT_8019ed54];
    FUN_800f5410();
    FUN_800f4064(0xdbba);
    FUN_800f8274(0x5a);
    FUN_800f6558(1);
    FUN_800f8274(0x5c);
    FUN_800f9660(0x20);
    FUN_800f6564(0x1b06);
    FUN_800f824c(0x45);
    FUN_800f5140();
    FUN_800f824c(0x45);
    FUN_800f8fb8(0x46);
    FUN_800f9644(0x20);
    FUN_800f6658(0x45);
    FUN_800f5410();
    FUN_800f4064(0x1b00);
    FUN_800f8274(0x5d);
    FUN_800f6214();
    FUN_800f8274(0x60);
    FUN_800f9660(0x20);
    while( true ) {
      FUN_80129c54();
      FUN_800f6e30(0x5d);
      FUN_800f824c(0x45);
      FUN_800f8fb8(0x46);
      FUN_800f7270(0x45);
      FUN_800f6c68(0x14ffcc);
      FUN_800f824c(0x48);
      FUN_800f6e30(0x60);
      *DAT_8019ed40 = *DAT_8019ed40 << 4;
      FUN_800f5410();
      FUN_800f4008(0x50);
      FUN_800f824c(0x49);
      FUN_800f7270(0x48);
      FUN_800f7500(0x300);
      FUN_8011f724();
      FUN_80129d2c();
      FUN_8011f684();
      FUN_801264e8();
      FUN_8011f884();
      FUN_800f6630(0);
      FUN_800f4248(0x40);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) break;
      FUN_800f6630(1);
      FUN_800f52bc(8);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        do {
          do {
            FUN_800f6e30(0x60);
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x8080);
            if (iVar1 == 0) {
              FUN_800f654c(7);
            }
            FUN_800f8a18(0x60);
            FUN_80129b04();
            iVar1 = FUN_800f53d4();
          } while (iVar1 != 0);
          FUN_800f5574(0xff);
          iVar1 = FUN_800f53d4();
        } while (iVar1 != 0);
      }
      FUN_800f6630(1);
      FUN_800f52bc(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        do {
          do {
            FUN_800f6e30(0x60);
            FUN_800f61e8();
            FUN_800f5574(8);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
              FUN_800f971c();
            }
            FUN_800f8a18(0x60);
            FUN_80129b04();
            iVar1 = FUN_800f53d4();
          } while (iVar1 != 0);
          FUN_800f5574(0xff);
          iVar1 = FUN_800f53d4();
        } while (iVar1 != 0);
      }
      FUN_800f6630(1);
      FUN_800f52bc(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6e30(0x5d);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 != 0) {
          FUN_800f8a18(0x5d);
          FUN_80129b04();
          while( true ) {
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) goto LAB_80129408;
            FUN_800f5574(0xff);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) break;
            FUN_800f6e30(0x5d);
            FUN_800f5ccc();
            FUN_800f8a18(0x5d);
            FUN_80129b04();
          }
          goto LAB_801293c0;
        }
LAB_80129408:
        FUN_800f8f74(0x1b07);
        FUN_80129d64();
        goto LAB_801295c0;
      }
LAB_801293c0:
      FUN_800f6630(1);
      FUN_800f52bc(1);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6e30(0x5d);
        FUN_800f61e8();
        FUN_800f5574(10);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) goto LAB_80129408;
        FUN_800f8a18(0x5d);
        FUN_80129b04();
        while( true ) {
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_800f6e30(0x5d);
            FUN_800f5ccc();
            FUN_800f8a18(0x5d);
            goto LAB_80129408;
          }
          FUN_800f5574(0xff);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) break;
          FUN_800f6e30(0x5d);
          FUN_800f61e8();
          FUN_800f8a18(0x5d);
          FUN_80129b04();
        }
      }
      FUN_800f6630(0);
      FUN_800f52bc(0x80);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x1b08);
        FUN_800f61e8();
        FUN_800f5574(6);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f8188(0x1b08);
          FUN_80129b04();
          FUN_800f9200();
          FUN_800f6564(0x1b08);
          FUN_800f824c(0x45);
          FUN_800f8fb8(0x46);
          FUN_800f7594(0x45);
          FUN_800f93dc();
          FUN_800f8960(0x1b0a);
        }
      }
      FUN_800f6630(1);
      FUN_800f52bc(0x80);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x1b08);
        iVar1 = FUN_800f6434(0x80);
        if (iVar1 == 0) {
          FUN_800f5ccc();
          FUN_800f8188(0x1b08);
          FUN_800f61e8();
          FUN_800f824c(0x45);
          FUN_800f8fb8(0x46);
          FUN_800f7594(0x45);
          FUN_800f654c(0xff);
          FUN_800f8960(0x1b0a);
        }
        else {
          FUN_80129838();
        }
      }
    }
    FUN_800f6564(0x1b06);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0xff);
      FUN_800f8188(0x1b06);
    }
    FUN_80129e94();
  } while( true );
}



