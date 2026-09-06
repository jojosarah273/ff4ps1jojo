
void FUN_80139e34(void)

{
  int iVar1;
  
  FUN_80120fbc();
  FUN_800f7500(DAT_8019925a);
  FUN_8011fb74();
  FUN_800f7500(DAT_80199256);
  FUN_8011ef30();
  FUN_800f7500(DAT_80199258);
  FUN_8011fba4();
  FUN_800f654c(0x53);
  FUN_800f8188(0xbb1e);
  FUN_800f654c(0x48);
  FUN_800f8188(0xbb9e);
  FUN_800f654c(0x43);
  FUN_800f8188(0xbc1e);
  FUN_800f71dc(0x29e);
  FUN_800f7500(DAT_8019926e);
  FUN_801223a4();
  FUN_800f71dc(0x21e);
  FUN_800f7500(DAT_8019926e);
  FUN_801223a4();
  FUN_8013b88c();
  FUN_800f7500(0xbb22);
  FUN_8013a8cc();
  FUN_800f7500(0xbba2);
  FUN_8013a8cc();
  FUN_800f7500(0xbc22);
  FUN_8013a8cc();
  FUN_80126480();
  FUN_8013a8c4();
  FUN_800f7210(0x16aa);
  FUN_8013aa08();
  FUN_80126590();
  do {
    FUN_800f6564(0x16b8);
    FUN_8013b118();
    FUN_800f8188(0x304);
    FUN_800f654c(0x80);
    FUN_800f8188(0x305);
    FUN_800f6564(0x16be);
    FUN_8013b118();
    FUN_800f824c(0x45);
    FUN_800f654c(0x30);
    FUN_800f824c(0x46);
    FUN_8011f6d4();
    FUN_8013b88c();
    FUN_800f6564(0x16ac);
    *DAT_8019ed40 = *DAT_8019ed40 << 2;
    FUN_801224d0();
    FUN_800f654c(0);
    FUN_800f8768(0xb81f);
    FUN_800f6564(0x16ad);
    *DAT_8019ed40 = *DAT_8019ed40 << 2;
    FUN_801224d0();
    FUN_800f654c(0);
    FUN_800f8768(0xb89f);
    FUN_800f6564(0x1ba7);
    FUN_800f9200();
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x30);
    FUN_800f824c(0x46);
    FUN_800f93dc();
    FUN_800f5574(7);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f654c(0x18);
    }
    else {
      FUN_800f654c(0x68);
    }
    FUN_800f824c(0x45);
    FUN_8011f6ac();
    FUN_800f6564(0x1ba8);
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x86);
    FUN_800f8188(800);
    FUN_800f654c(0xa0);
    FUN_800f8188(0x321);
    FUN_800f6564(0x1ba9);
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x86);
    FUN_800f8188(0x324);
    FUN_800f654c(0xb0);
    FUN_800f8188(0x325);
    FUN_800f6564(0x1baa);
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x86);
    FUN_800f8188(0x328);
    FUN_800f654c(0xc0);
    FUN_800f8188(0x329);
    FUN_8013a950();
    FUN_800f7270(0x45);
    FUN_800f8d00(0x16aa);
    FUN_8012214c();
    FUN_800f654c(4);
    FUN_800f8188(0x322);
    FUN_800f8188(0x326);
    FUN_800f8188(0x32a);
    FUN_800f654c(0x30);
    FUN_800f8188(0x323);
    FUN_800f8188(0x327);
    FUN_800f8188(0x32b);
    FUN_800f6564(0x16b6);
    FUN_8013b118();
    FUN_800f8188(0x30c);
    FUN_800f654c(0x60);
    FUN_800f8188(0x30d);
    FUN_800f6564(0x16a9);
    FUN_8013b118();
    FUN_800f8188(0x308);
    FUN_800f654c(0x70);
    FUN_800f8188(0x309);
    FUN_800f6564(0x16b7);
    FUN_8013b118();
    FUN_800f8188(0x314);
    FUN_800f654c(0x90);
    FUN_800f8188(0x315);
    FUN_800f71dc(0x300a);
    FUN_800f8d00(0x306);
    FUN_800f8d00(0x30a);
    FUN_800f8d00(0x30e);
    FUN_800f8d00(0x316);
    FUN_800f8d00(0x31a);
    FUN_8011f684();
    FUN_80126480();
    FUN_8013a8c4();
    FUN_8013b7b8(0xff);
    FUN_8013b764();
    DAT_800d212c = DAT_800d212c & 0xfd;
    FUN_8011ef0c();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      return;
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1ba7);
      FUN_800f5574(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
LAB_8013a32c:
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f6564(0x16b8);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_8013b270();
            FUN_801241b8();
          }
        }
        goto LAB_8013a36c;
      }
      FUN_800f6564(0x16a9);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_8013aaf0();
        goto LAB_8013a32c;
      }
    }
    else {
LAB_8013a36c:
      FUN_800f6630(1);
      FUN_800f4248(8);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1ba7);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(9);
        }
        FUN_800f8188(0x1ba7);
      }
    }
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1ba7);
      FUN_800f61e8();
      FUN_800f5574(10);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f971c();
      }
      FUN_800f8188(0x1ba7);
    }
    FUN_800f6630(1);
    FUN_800f4248(2);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1ba7);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_8013b1e8();
      }
      else {
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
        if (iVar1 == 0) {
          FUN_800f6564(0x16ac);
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x80);
          if (iVar1 == 0) {
            FUN_800f8188(0x16ac);
          }
        }
        else {
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x202);
          if (iVar1 == 0) {
            FUN_800f6564(0x16ad);
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x80);
            if (iVar1 == 0) {
              FUN_800f8188(0x16ad);
            }
          }
          else {
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x202);
            if (iVar1 == 0) {
              FUN_8013b160();
            }
            else {
              FUN_800f5ccc();
              iVar1 = FUN_800f5b8c(0x202);
              if (iVar1 == 0) {
                FUN_8013b228();
              }
              else {
                FUN_800f5ccc();
                iVar1 = FUN_800f5b8c(0x202);
                if (iVar1 == 0) {
                  FUN_8013b1a8();
                }
                else {
                  FUN_800f5ccc();
                  iVar1 = FUN_800f5b8c(2);
                  if (iVar1 == 0) {
                    FUN_800f5ccc();
                    FUN_800f5140();
                    FUN_801224d0();
                    FUN_800f9644(0x20);
                    *DAT_8019ed40 = (&DAT_8019a090)[*DAT_8019ed54];
                    DAT_8019ed40[1] = (&DAT_8019a091)[*DAT_8019ed54];
                    FUN_800f8274(0x45);
                    FUN_800f9660(0x20);
                    FUN_800f6e30(0x45);
                    FUN_800f5ccc();
                    iVar1 = FUN_800f5b8c(0x80);
                    if (iVar1 == 0) {
                      FUN_800f8a18(0x45);
                    }
                  }
                  else {
                    FUN_800f6564(0x16b7);
                    *DAT_8019ed40 = *DAT_8019ed40 ^ 1;
                    FUN_800f8188(0x16b7);
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_800f6630(1);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1ba7);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_8013b1e8();
      }
      else {
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
        if (iVar1 == 0) {
          FUN_800f6564(0x16ac);
          FUN_800f61e8();
          FUN_800f5574(6);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f8188(0x16ac);
          }
        }
        else {
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x202);
          if (iVar1 == 0) {
            FUN_800f6564(0x16ad);
            FUN_800f61e8();
            FUN_800f5574(6);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f8188(0x16ad);
            }
          }
          else {
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x202);
            if (iVar1 == 0) {
              FUN_8013b160();
            }
            else {
              FUN_800f5ccc();
              iVar1 = FUN_800f5b8c(0x202);
              if (iVar1 == 0) {
                FUN_8013b228();
              }
              else {
                FUN_800f5ccc();
                iVar1 = FUN_800f5b8c(0x202);
                if (iVar1 == 0) {
                  FUN_8013b1a8();
                }
                else {
                  FUN_800f5ccc();
                  iVar1 = FUN_800f5b8c(2);
                  if (iVar1 == 0) {
                    FUN_800f5ccc();
                    FUN_800f5140();
                    FUN_801224d0();
                    FUN_800f9644(0x20);
                    *DAT_8019ed40 = (&DAT_8019a090)[*DAT_8019ed54];
                    DAT_8019ed40[1] = (&DAT_8019a091)[*DAT_8019ed54];
                    FUN_800f8274(0x45);
                    FUN_800f9660(0x20);
                    FUN_800f6e30(0x45);
                    FUN_800f61e8();
                    FUN_800f5574(0x20);
                    iVar1 = FUN_800f53d4();
                    if (iVar1 == 0) {
                      FUN_800f8a18(0x45);
                    }
                  }
                  else {
                    FUN_800f6564(0x16b7);
                    *DAT_8019ed40 = *DAT_8019ed40 ^ 1;
                    FUN_800f8188(0x16b7);
                  }
                }
              }
            }
          }
        }
      }
    }
  } while( true );
}



