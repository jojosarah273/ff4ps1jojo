
undefined4 FUN_8012b190(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_800f6564(0x1b23);
  FUN_800f5410();
  uVar2 = FUN_800f3b04(0x1b1a);
  FUN_800f3f38(uVar2);
  uVar2 = FUN_800f3b04(0x1b25);
  FUN_800f54d4(uVar2);
  iVar3 = FUN_800f53d4();
  if (iVar3 != 0) {
    FUN_800f6564(0x1b22);
    uVar2 = FUN_800f3b04(0x1b24);
    FUN_800f54d4(uVar2);
    iVar3 = FUN_800f53d4();
    if (iVar3 != 0) {
      FUN_800f6564(0x1b25);
      FUN_800f5140();
      FUN_800f4f4c();
      uVar2 = FUN_800f3b04(0x1b24);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_800f824c(0x45);
      FUN_800f8fb8(0x46);
      FUN_800f7270(0x45);
      FUN_800f6b68(0x1441);
      iVar3 = FUN_800f6434(2);
      if (iVar3 == 0) {
        FUN_800f6b68(0x1440);
        FUN_800f5574(0xfe);
        iVar3 = FUN_800f53d4();
        if (iVar3 != 0) {
          FUN_800f654c(99);
          FUN_800f824c(0xe3);
          FUN_800f71dc(0x1440);
          FUN_8012e844();
          FUN_801221ec();
          return 0;
        }
        FUN_8012ae00();
        FUN_800f6630(0x60);
        FUN_800f4248(8);
        iVar3 = FUN_800f4120(0x202);
        if (iVar3 == 0) {
          FUN_800f6b68(0x1440);
          FUN_800f8188(0x1b3b);
          FUN_800f8d00(0x1b3c);
          FUN_800f5574(0xed);
          iVar3 = FUN_800f53d4();
          if (iVar3 != 0) {
            DAT_800d1e05 = (undefined1)DAT_8019ef0c;
            uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
            FUN_800f5b2c(uVar2);
            iVar3 = FUN_800f5b8c(0x202);
            if (iVar3 == 0) {
              FUN_800f90ec(0x1440);
            }
            FUN_800f6564(0x1e05);
            FUN_800f9200();
            FUN_800f8f74(0x1b19);
            FUN_800f654c(1);
            FUN_800f8188(0x1a88);
            FUN_800f7270(0x93);
            FUN_800f8d00(0x1ba5);
            FUN_800f654c(0x85);
            FUN_800f8188(0x1e00);
            FUN_80169128();
            FUN_80126610();
            FUN_800f654c(0x4c);
            FUN_8012224c();
            FUN_800f654c(0xf0);
            do {
              FUN_8011f320();
              FUN_800f5ccc();
              iVar3 = FUN_800f5b8c(0x202);
            } while (iVar3 != 0);
            FUN_800f654c(0x30);
            FUN_80138a34();
            FUN_80138a6c();
            FUN_800f93dc();
            FUN_80138a34();
            FUN_800f654c(0);
            FUN_800f3d48();
            FUN_800f7210(0x1a65);
            *DAT_8019ed4c = *DAT_8019ed54;
            return 1;
          }
          FUN_800f5574(0xce);
          iVar3 = FUN_800f53c0();
          if (iVar3 != 0) {
            FUN_800f5574(0xeb);
            iVar3 = FUN_800f53c0();
            if (iVar3 == 0) {
              FUN_800f5574(0xde);
              iVar3 = FUN_800f53d4();
              if (iVar3 == 0) {
                FUN_800f5574(0xe2);
                iVar3 = FUN_800f53c0();
                if (iVar3 == 0) {
                  FUN_8012baf8();
                  FUN_800f6630(0xe8);
                  iVar3 = FUN_800f6434(0x80);
                  if (iVar3 != 0) goto LAB_8012b7dc;
                  FUN_80124eac();
                  FUN_800f8d6c(0x60);
                }
              }
              FUN_800f7210(0x1b3c);
              uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
              FUN_800f5b2c(uVar2);
              iVar3 = FUN_800f5b8c(0x202);
              if (iVar3 == 0) {
                FUN_800f90ec(0x1440);
              }
              FUN_800f6564(0x1b3b);
              FUN_800f5480();
              FUN_800f8058(0xce);
              FUN_800f71dc(0xa67c);
              cVar1 = FUN_80120070();
              if (cVar1 == '\x01') {
                return 1;
              }
              if (cVar1 == '\x02') {
                return 2;
              }
              FUN_800f6564(0x1b3b);
              FUN_800f5574(0xde);
              iVar3 = FUN_800f53d4();
              if (iVar3 == 0) {
                FUN_800f5574(0xe2);
                iVar3 = FUN_800f53c0();
                if (iVar3 == 0) {
                  FUN_800f6564(0x1a82);
                  iVar3 = FUN_800f6434(0x202);
                  if (iVar3 == 0) {
                    FUN_8012ba14();
                    FUN_801263f0();
                    FUN_8011ff40();
                  }
                }
              }
LAB_8012b7dc:
              FUN_800f8f74(0x1a82);
              FUN_8012102c();
              FUN_800f7500(DAT_801991b2);
              FUN_8011fb74();
              FUN_801263f0();
              return 0;
            }
          }
        }
        FUN_801210ac();
        FUN_800f7500(DAT_801991aa);
        FUN_8011ef30();
        FUN_800f7500(DAT_801991b8);
        FUN_8011fba4();
      }
      else {
        FUN_801210ac();
        FUN_800f7500(DAT_801991aa);
        FUN_8011ef30();
        FUN_800f7500(DAT_801991ba);
        FUN_8011fba4();
      }
      FUN_801263f0();
      FUN_8011ff40();
      FUN_8012b0b0();
      FUN_801210ac();
      FUN_800f7500(DAT_801991a8);
      FUN_8011ef30();
      FUN_800f7500(DAT_801991b4);
      FUN_8011fba4();
      return 0;
    }
  }
  FUN_8012b0b0();
  FUN_800f6564(0x1b23);
  FUN_800f5410();
  uVar2 = FUN_800f3b04(0x1b1a);
  FUN_800f3f38(uVar2);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar2 = FUN_800f3b04(0x1b22);
  FUN_800f3f38(uVar2);
  FUN_800f5140();
  FUN_800f824c(0x45);
  FUN_800f8fb8(0x46);
  FUN_800f7594(0x45);
  FUN_800f6564(0x1b25);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar2 = FUN_800f3b04(0x1b24);
  FUN_800f3f38(uVar2);
  FUN_800f5140();
  FUN_800f824c(0x45);
  FUN_800f7270(0x45);
  FUN_800f6d70(0x1440);
  FUN_800f5574(0xff);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
LAB_8012b560:
    FUN_800f6b68(0x1440);
    uVar2 = FUN_800f3b04(*DAT_8019ed58 + 0x1440);
    FUN_800f54d4(uVar2);
    iVar3 = FUN_800f53d4();
    if (iVar3 != 0) {
      FUN_800f6d70(0x1441);
      FUN_800f5410();
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
      FUN_800f3f38(uVar2);
      FUN_800f5574(100);
      iVar3 = FUN_800f53c0();
      if (iVar3 == 0) {
        FUN_800f8960(0x1441);
        goto LAB_8012b670;
      }
    }
    FUN_800f6b68(0x1440);
    FUN_800f9200();
    FUN_800f6b68(0x1441);
    FUN_800f9200();
    FUN_800f6d70(0x1440);
    FUN_800f8768(0x1440);
    FUN_800f6d70(0x1441);
    FUN_800f8768(0x1441);
    FUN_800f93dc();
    FUN_800f8960(0x1441);
    FUN_800f93dc();
    FUN_800f8960(0x1440);
  }
  else {
    FUN_800f6b68(0x1440);
    iVar3 = FUN_800f6434(2);
    if (iVar3 != 0) goto LAB_8012b560;
    FUN_800f5574(0xed);
    iVar3 = FUN_800f53d4();
    if (iVar3 == 0) {
      FUN_800f5574(0x19);
      iVar3 = FUN_800f53d4();
      if (iVar3 == 0) {
        FUN_800f5574(200);
        iVar3 = FUN_800f53d4();
        if (iVar3 == 0) {
          FUN_800f5574(0xec);
          iVar3 = FUN_800f53c0();
          if (iVar3 == 0) goto LAB_8012b670;
        }
      }
      FUN_8012219c();
      goto LAB_8012b5f8;
    }
LAB_8012b670:
    FUN_800f654c(0);
    FUN_800f8768(0x1440);
    FUN_800f8768(0x1441);
  }
LAB_8012b5f8:
  FUN_80120fbc();
  FUN_8012aac0();
  FUN_8012b0b0();
  FUN_801210ac();
  return 0;
}



