
void FUN_8013389c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f654c(0);
  FUN_800f3d48();
  FUN_800f6e30(0x57);
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed44 << 4;
  FUN_800f5410();
  FUN_800f4064(0xff98);
  FUN_800f8274(0x99);
  FUN_800f9660(0x20);
  FUN_80120f1c();
  FUN_800f6630(0xe8);
  FUN_80124eac();
  FUN_800f8d6c(0xe5);
  FUN_8012aac0();
  FUN_801264c0();
  FUN_8016ea7c();
  FUN_800f6630(0xe8);
  FUN_80124eac();
  FUN_800f8d6c(0x60);
  do {
    FUN_800f6e30(0x51);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x76);
    FUN_800f824c(0x46);
    FUN_800f6e30(0x54);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x68);
    }
    FUN_800f4008(8);
    FUN_800f824c(0x45);
    FUN_8011f6ac();
    FUN_8011f684();
    FUN_8011f884();
LAB_801339d8:
    do {
      FUN_800f6630(1);
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6e30(0x54);
        FUN_800f61e8();
        FUN_800f4248(1);
        FUN_800f8a18(0x54);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_80133a28;
      }
      else {
LAB_80133a28:
        FUN_800f6630(1);
        FUN_800f4248(2);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f6e30(0x54);
          FUN_800f61e8();
          FUN_800f4248(1);
          FUN_800f8a18(0x54);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) goto LAB_80133a78;
LAB_80133a98:
          FUN_800f6e30(0x51);
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x8080);
          if (iVar1 == 0) {
            FUN_800f6e30(0x57);
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x80);
            if (iVar1 == 0) {
              FUN_800f8a18(0x57);
              FUN_800f654c(8);
              do {
                FUN_800f9644(0x20);
                FUN_800f5dd4(0x99);
                FUN_800f5dd4(0x99);
                FUN_800f9660(0x20);
                FUN_801266c8();
                FUN_800f5ccc();
                iVar1 = FUN_800f5b8c(0x202);
              } while (iVar1 != 0);
              FUN_8011f7d4();
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) goto LAB_801339d8;
            }
          }
          else {
            FUN_800f8a18(0x51);
          }
        }
        else {
LAB_80133a78:
          FUN_800f6630(1);
          FUN_800f4248(8);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) goto LAB_80133a98;
        }
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) break;
      }
      FUN_800f6e30(0x51);
      FUN_800f61e8();
      FUN_800f5574(6);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f8a18(0x51);
        break;
      }
      FUN_800f6e30(0x57);
      FUN_800f61e8();
      FUN_800f5574(0x13);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      FUN_800f8a18(0x57);
      FUN_800f654c(8);
      do {
        FUN_800f9644(0x20);
        FUN_800f62f0(0x99);
        FUN_800f62f0(0x99);
        FUN_800f9660(0x20);
        FUN_801266c8();
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
      FUN_8011f7d4();
      iVar1 = FUN_800f53c0();
    } while (iVar1 == 0);
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f7270(0x60);
      FUN_800f8d6c(0x5d);
      FUN_800f6e30(0x51);
      FUN_800f5410();
      uVar2 = FUN_800f3a70(0x57);
      uVar2 = FUN_800f3b04(uVar2);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_800f4f4c();
      uVar2 = FUN_800f3a70(0x54);
      uVar2 = FUN_800f3b04(uVar2);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_801224d0();
      FUN_800f6b68(0x1440);
      FUN_800f8d6c(0x4b);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f7270(0x5d);
        FUN_800f8d6c(0xe5);
        FUN_8013441c();
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_8012219c();
          FUN_800f6630(0xeb);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_8012b0d8();
            FUN_80120fbc();
            FUN_800f7500(DAT_801991e8);
            FUN_8011fb74();
            FUN_80126458();
            FUN_8011f6a4();
            FUN_8011ff40();
            FUN_801240d0();
            FUN_800f7500(DAT_801991e6);
            FUN_8011ef30();
            FUN_80126458();
          }
          goto LAB_801343ec;
        }
      }
      FUN_800f6564(0x1b37);
      FUN_801224d0();
      *DAT_8019ed40 = "35012"[*DAT_8019ed54];
      FUN_800f7270(0x4b);
      FUN_800f824c(0x43);
      FUN_800f7594(0x43);
      FUN_800f6564(0x1b37);
      FUN_800f5574(2);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f66d8(0x60);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 != 0) {
          FUN_800f6b68(0x1440);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            FUN_800f66d8(0x60);
            FUN_800f8768(0x1440);
            FUN_800f63bc();
            FUN_800f66d8(0x60);
            FUN_800f8768(0x1441);
            FUN_800f654c(0);
            FUN_800f82ec(0x60);
            FUN_800f5ea0();
            goto LAB_80134134;
          }
          uVar2 = FUN_800f3a70(0x60);
          iVar1 = FUN_800f3b04(uVar2);
          FUN_800f54d4(iVar1 + (uint)*DAT_8019ed58);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f6b68(0x1440);
            FUN_80134a50();
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
LAB_80134184:
              FUN_80134ab0();
              FUN_800f63bc();
              FUN_800f6364();
              FUN_80134ab0();
              return;
            }
            FUN_800f6b68(0x1441);
            FUN_800f5574(1);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) goto LAB_80134184;
            FUN_800f63bc();
            FUN_800f654c(99);
            FUN_800f5480();
            uVar2 = FUN_800f3a70(0x60);
            iVar1 = FUN_800f3b04(uVar2);
            FUN_800f7f48(iVar1 + (uint)*DAT_8019ed58);
            FUN_800f824c(0xe3);
            FUN_800f5ea0();
            FUN_800f66d8(0x60);
            FUN_80134948();
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f654c(0);
              FUN_80134948();
              iVar1 = FUN_800f53d4();
              if (iVar1 == 0) goto LAB_80133f68;
            }
            FUN_800f66d8(0x60);
            FUN_800f8768(0x1440);
            FUN_800f63bc();
            FUN_800f66d8(0x60);
            FUN_800f5410();
            uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
            FUN_800f3f38(uVar2);
            FUN_800f8768(0x1441);
            FUN_800f7270(0x4b);
            FUN_800f6b68(0x1440);
            FUN_80134a50();
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
              FUN_800f654c(1);
              FUN_800f82ec(0x60);
              FUN_800f5ea0();
              FUN_800f6b68(0x1440);
              goto LAB_801342d4;
            }
            FUN_800f6b68(0x1441);
            FUN_800f82ec(0x60);
            FUN_800f5ea0();
            FUN_800f6b68(0x1440);
          }
          else {
            FUN_80134a50();
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
              return;
            }
            FUN_800f6b68(0x1441);
            FUN_800f63bc();
            FUN_800f5410();
            uVar2 = FUN_800f3a70(0x60);
            iVar1 = FUN_800f3b04(uVar2);
            FUN_800f3f38(iVar1 + (uint)*DAT_8019ed58);
            FUN_800f5574(100);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
              FUN_800f5480();
              FUN_800f8058(99);
              FUN_800f8768(0x1441);
              uVar2 = 99;
              goto LAB_8013412c;
            }
          }
          FUN_800f82ec(0x60);
LAB_8013434c:
          FUN_800f654c(0);
          FUN_800f8768(0x1440);
          FUN_800f8768(0x1441);
          return;
        }
        FUN_800f6b68(0x1440);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          return;
        }
        FUN_800f82ec(0x60);
        FUN_80134a50();
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f63bc();
          FUN_800f6b68(0x1441);
          FUN_800f82ec(0x60);
          goto LAB_8013434c;
        }
        FUN_800f63bc();
        FUN_800f66d8(0x60);
        FUN_800f61e8();
      }
      else {
        FUN_800f66d8(0x60);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 != 0) {
          FUN_800f6b68(0x1440);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 != 0) {
            uVar2 = FUN_800f3a70(0x60);
            iVar1 = FUN_800f3b04(uVar2);
            FUN_800f54d4(iVar1 + (uint)*DAT_8019ed58);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              return;
            }
            FUN_800f6b68(0x1441);
            FUN_800f5574(1);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f66d8(0x60);
              FUN_800f9330();
              FUN_80134948();
              iVar1 = FUN_800f53d4();
              if (iVar1 == 0) {
                FUN_800f971c();
                FUN_80134948();
                iVar1 = FUN_800f53d4();
                if (iVar1 == 0) {
                  FUN_800f95a0();
LAB_80133f68:
                  FUN_8012219c();
                  return;
                }
              }
              FUN_800f66d8(0x60);
              FUN_800f8768(0x1440);
              uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
              FUN_800f6048(uVar2);
              FUN_800f95a0();
              FUN_800f6b68(0x1440);
              FUN_800f82ec(0x60);
              uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
              FUN_800f5b2c(uVar2);
              iVar1 = FUN_800f5b8c(0x202);
              if (iVar1 != 0) {
                return;
              }
              FUN_800f90ec(0x1440);
              return;
            }
            FUN_800f66d8(0x60);
            FUN_800f9200();
            FUN_800f6b68(0x1440);
            FUN_800f82ec(0x60);
            FUN_800f93dc();
            goto LAB_80134314;
          }
          FUN_800f66d8(0x60);
          FUN_800f8768(0x1440);
          uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
          FUN_800f6048(uVar2);
          uVar2 = 0;
LAB_8013412c:
          FUN_800f654c(uVar2);
LAB_80134134:
          FUN_800f82ec(0x60);
          return;
        }
        FUN_800f6b68(0x1440);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          return;
        }
      }
LAB_801342d4:
      FUN_800f82ec(0x60);
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
      FUN_800f5b2c(uVar2);
      iVar1 = FUN_800f5b8c(0x202);
      if (iVar1 != 0) {
        return;
      }
      FUN_800f654c(0);
LAB_80134314:
      FUN_800f8768(0x1440);
      return;
    }
LAB_801343ec:
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}



