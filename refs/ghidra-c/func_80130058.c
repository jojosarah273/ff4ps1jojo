
undefined1 FUN_80130058(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_800f7210(0x1b83);
  uVar2 = FUN_800f3b04(0x1b85);
  FUN_800f56ac(uVar2);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
    FUN_800f8f74(0x1b88);
    FUN_8012b0d8();
    FUN_800f6564(0x1b83);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3b04(0x1b83);
    FUN_800f3f38(uVar2);
    uVar2 = FUN_800f3b04(0x1b84);
    FUN_800f3f38(uVar2);
    FUN_801308b4();
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6564(0x1b85);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3b04(0x1b85);
    FUN_800f3f38(uVar2);
    uVar2 = FUN_800f3b04(0x1b86);
    FUN_800f3f38(uVar2);
    FUN_801308b4();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6b68(0x1560);
    FUN_800f9200();
    FUN_800f6d70(0x1560);
    FUN_800f8768(0x1560);
    FUN_800f93dc();
    FUN_800f8960(0x1560);
    FUN_80130884();
    FUN_8012f9a0();
    return 0;
  }
  FUN_800f8f74(0x1b87);
  FUN_80120fbc();
  FUN_800f8f74(0x1b88);
  FUN_800f6564(0x1b83);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar2 = FUN_800f3b04(0x1b83);
  FUN_800f3f38(uVar2);
  uVar2 = FUN_800f3b04(0x1b84);
  FUN_800f3f38(uVar2);
  FUN_801308b4();
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6d70(0x1560);
  FUN_800f5574(0xe);
  iVar3 = FUN_800f53c0();
  if (iVar3 == 0) goto LAB_801301e4;
  FUN_800f5574(0x1c);
  iVar3 = FUN_800f53c0();
  if (iVar3 != 0) goto LAB_801301e4;
  FUN_800f8188(0x1b89);
  FUN_800f5574(0x12);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
    FUN_80126b88();
    FUN_800f4248(0x28);
    iVar3 = FUN_800f4120(2);
    if (iVar3 == 0) {
      FUN_800f52bc(0x20);
      iVar3 = FUN_800f53d4();
      if (iVar3 == 0) {
        FUN_800f6564(0x1b89);
        FUN_800f5574(0x19);
        iVar3 = FUN_800f53d4();
        if (iVar3 != 0) goto LAB_80130394;
      }
      FUN_80126b88();
      FUN_800f52bc(8);
      iVar3 = FUN_800f53d4();
      if (iVar3 != 0) goto LAB_801301e4;
      FUN_800f6564(0x1b89);
      FUN_800f5574(0x1a);
      iVar3 = FUN_800f53d4();
      if (iVar3 == 0) goto LAB_801301e4;
    }
  }
LAB_80130394:
  FUN_80132428();
  iVar3 = FUN_800f53fc();
  if (iVar3 != 0) {
    FUN_801320e8();
    FUN_8012219c();
LAB_801305dc:
    FUN_80120f94();
    FUN_800f7500(DAT_801991c2);
    FUN_8011ef30();
    FUN_80130884();
    FUN_8012f9a0();
    FUN_80132130();
    FUN_800f654c(0);
    FUN_800f824c(0xc1);
    FUN_8012b0d8();
    FUN_8012b168();
    FUN_80120fbc();
    FUN_8011f684();
    FUN_80126480();
    return 0;
  }
  FUN_800f6d70(0x1560);
  FUN_800f5574(0x16);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
    FUN_800f5574(0x17);
    iVar3 = FUN_800f53d4();
    if (iVar3 == 0) {
      FUN_800f5574(0x1b);
      iVar3 = FUN_800f53d4();
      if (iVar3 != 0) {
        FUN_800f8f74(0x1b87);
        FUN_800f8f74(0x1b88);
        FUN_800f6564(0x1a04);
        FUN_800f4248(0x10);
        iVar3 = FUN_800f4120(2);
        if (iVar3 == 0) {
          FUN_800f654c(3);
          FUN_80132310();
          return 1;
        }
LAB_801301e4:
        FUN_80131294();
        FUN_8012219c();
        return 0;
      }
      FUN_8012b0d8();
      FUN_8012b168();
      FUN_801320e8();
      FUN_801241b8();
      FUN_8011f684();
      FUN_80130f90();
      FUN_80120b6c();
      FUN_8011f684();
      FUN_800f8f74(0x1b8b);
      FUN_800f8f74(0x1b8c);
      FUN_800f8f74(0x1b8d);
      FUN_800f8f74(0x1b8e);
      FUN_800f8f74(0x1b8f);
      FUN_800f8f74(0x1bbb);
      while( true ) {
        FUN_800f6564(0x1b8a);
        FUN_8012d1d0();
        iVar3 = FUN_800f53d4();
        if (iVar3 == 0) break;
        FUN_800f6564(0x1b8a);
        FUN_800f61e8();
        FUN_800f5574(5);
        iVar3 = FUN_800f53d4();
        if (iVar3 != 0) {
          FUN_800f654c(0);
        }
        FUN_800f8188(0x1b8a);
      }
      while( true ) {
        FUN_800f6564(0x1bbb);
        iVar3 = FUN_800f6434(2);
        if (iVar3 == 0) {
          FUN_8012b168();
        }
        else {
          FUN_800f6564(0x1b8a);
          *DAT_8019ed40 = *DAT_8019ed40 << 1;
          FUN_800f5140();
          FUN_800f4f4c();
          uVar2 = FUN_800f3b04(0x1b8a);
          FUN_800f3f38(uVar2);
          *DAT_8019ed40 = *DAT_8019ed40 << 2;
          FUN_800f5140();
          FUN_800f4f4c();
          FUN_800f4008(0x20);
          FUN_800f824c(0x46);
          FUN_800f654c(0x40);
          FUN_800f824c(0x45);
          FUN_8011f6d4();
        }
        FUN_800f7500(0x310);
        FUN_80131358();
        FUN_8011f684();
        FUN_8011f884();
        FUN_800f6630(1);
        FUN_800f4248(0x80);
        iVar3 = FUN_800f4120(2);
        if (iVar3 == 0) goto LAB_801305dc;
        FUN_800f6630(0);
        FUN_800f4248(0x80);
        iVar3 = FUN_800f4120(2);
        if (iVar3 == 0) break;
        FUN_800f6630(1);
        FUN_800f4248(8);
        iVar3 = FUN_800f4120(2);
        if (iVar3 == 0) {
          do {
            FUN_800f6564(0x1b8a);
            FUN_800f5ccc();
            iVar3 = FUN_800f5b8c(0x8080);
            if (iVar3 == 0) {
              FUN_800f654c(4);
            }
            FUN_800f8188(0x1b8a);
            FUN_8012d1d0();
            iVar3 = FUN_800f53d4();
          } while (iVar3 != 0);
        }
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar3 = FUN_800f4120(2);
        if (iVar3 == 0) {
          do {
            FUN_800f6564(0x1b8a);
            FUN_800f61e8();
            FUN_800f5574(5);
            iVar3 = FUN_800f53d4();
            if (iVar3 != 0) {
              FUN_800f654c(0);
            }
            FUN_800f8188(0x1b8a);
            FUN_8012d1d0();
            iVar3 = FUN_800f53d4();
          } while (iVar3 != 0);
        }
        FUN_800f6630(1);
        FUN_800f4248(3);
        iVar3 = FUN_800f4120(2);
        if (iVar3 == 0) {
          FUN_800f6564(0x1b90);
          iVar3 = FUN_800f6434(2);
          if (iVar3 == 0) {
            FUN_800f7500(4);
            do {
              *DAT_8019ed40 = *DAT_8019ed60;
              FUN_80132178();
              FUN_800f6b68(0);
              FUN_800f4248(0x3f);
              iVar3 = FUN_800f4120(2);
              if (iVar3 == 0) {
                *DAT_8019ed54 = *DAT_8019ed58;
                FUN_800f6b68(0x1b8b);
                *DAT_8019ed40 = ~*DAT_8019ed40;
                FUN_800f8768(0x1b8b);
              }
              FUN_800f5ea0();
              iVar3 = FUN_800f5c64(0x8080);
            } while (iVar3 != 0);
            FUN_800f654c(0xff);
            uVar2 = FUN_800f3b04(0x1bbb);
            FUN_800f5ecc(uVar2);
            FUN_800f8188(0x1bbb);
          }
        }
      }
      FUN_800f6564(0x1b8a);
      FUN_801224d0();
      FUN_800f654c(0xff);
      FUN_800f8768(0x1b8b);
      FUN_80131534();
      goto LAB_801305dc;
    }
  }
  FUN_800f8f74(0x1b87);
  FUN_800f8f74(0x1b88);
  FUN_800f5480();
  FUN_800f8058(0x16);
  FUN_800f71dc(0xb770);
  uVar1 = FUN_80120070();
  return uVar1;
}



