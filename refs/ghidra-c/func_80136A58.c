
void FUN_80136a58(void)

{
  int iVar1;
  
  FUN_801378b0();
  FUN_800f71dc(0xffb8);
  FUN_800f8d6c(0x9f);
  FUN_80124130();
  FUN_80134e74();
  FUN_801241b8();
  FUN_801264c0();
  FUN_8011f6a4();
  FUN_80120fbc();
  FUN_800f7500(DAT_801991f6);
  FUN_8011ef30();
  FUN_800f7500(DAT_80199214);
  FUN_8011fba4();
  FUN_800f7500(DAT_80199206);
  FUN_8011fba4();
  FUN_80120e2c();
  FUN_8016ea7c();
  FUN_8012aac0();
  FUN_80126528();
  FUN_80120fbc();
  FUN_8011f684();
  FUN_80126480();
  FUN_80120b6c();
  while( true ) {
    FUN_800f654c(0x20);
    FUN_800f824c(0x3f);
    FUN_800f6564(0x1b7a);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f71dc(0x3058);
    }
    else {
      FUN_800f71dc(0x3040);
    }
    FUN_800f7500(0x300);
    FUN_800f654c(0);
    FUN_8011f724();
    FUN_800f6564(0x1b7c);
    FUN_800f7500(0x19a);
    FUN_801206dc();
    FUN_8011f684();
    FUN_80126480();
    FUN_8011f884();
    FUN_80137938();
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) break;
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_800f7500(0x310);
  FUN_801376b0();
  do {
    FUN_800f654c(0x20);
    FUN_800f824c(0x3f);
    FUN_800f6564(0x1b94);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x58);
    FUN_800f824c(0x46);
    FUN_800f6564(0x1b95);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x78);
    }
    else {
      FUN_800f654c(8);
    }
    FUN_800f824c(0x45);
    FUN_8011f6d4();
    FUN_8011f684();
    FUN_8011f884();
LAB_80136cac:
    do {
      FUN_800f6630(1);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f5410();
        return;
      }
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_80136ffc();
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_801241b8();
          FUN_80120db4();
          FUN_8012aac0();
          FUN_80126528();
          FUN_801352f0();
          FUN_801264c0();
          FUN_801263c8();
        }
        FUN_800f654c(0x20);
        FUN_800f824c(0x3f);
        FUN_80120f1c();
        FUN_800f7500(0x31c);
        FUN_8012b100();
      }
      FUN_800f6630(1);
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1b95);
        FUN_800f61e8();
        FUN_800f4248(1);
        FUN_800f8188(0x1b95);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_80136dc4;
      }
      else {
LAB_80136dc4:
        FUN_800f6630(1);
        FUN_800f4248(2);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f6564(0x1b95);
          FUN_800f61e8();
          FUN_800f4248(1);
          FUN_800f8188(0x1b95);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) goto LAB_80136e14;
LAB_80136e34:
          FUN_800f6564(0x1b94);
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x80);
          if (iVar1 == 0) {
            FUN_800f8188(0x1b94);
          }
          else {
            FUN_800f6564(0x1b96);
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x80);
            if (iVar1 == 0) {
              FUN_800f8188(0x1b96);
              FUN_800f654c(8);
              FUN_800f824c(0x45);
              do {
                FUN_800f9644(0x20);
                FUN_800f5dd4(0x9f);
                FUN_800f5dd4(0x9f);
                FUN_800f9660(0x20);
                FUN_801266c8();
                FUN_800f5da0(0x45);
                iVar1 = FUN_800f5b8c(0x202);
              } while (iVar1 != 0);
              FUN_8011f7d4();
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) goto LAB_80136cac;
            }
          }
        }
        else {
LAB_80136e14:
          FUN_800f6630(1);
          FUN_800f4248(8);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) goto LAB_80136e34;
        }
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) break;
      }
      FUN_800f6564(0x1b94);
      FUN_800f61e8();
      FUN_800f5574(8);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f8188(0x1b94);
        break;
      }
      FUN_800f6564(0x1b96);
      FUN_800f61e8();
      FUN_800f5574(0x11);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      FUN_800f8188(0x1b96);
      FUN_800f654c(8);
      FUN_800f824c(0x45);
      do {
        FUN_800f9644(0x20);
        FUN_800f62f0(0x9f);
        FUN_800f62f0(0x9f);
        FUN_800f9660(0x20);
        FUN_801266c8();
        FUN_800f5da0(0x45);
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
      FUN_8011f7d4();
      iVar1 = FUN_800f53c0();
    } while (iVar1 == 0);
  } while( true );
}



