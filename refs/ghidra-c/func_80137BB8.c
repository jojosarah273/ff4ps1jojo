
void FUN_80137bb8(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = false;
  bVar2 = false;
  FUN_800f6564(0x1a02);
  iVar3 = FUN_800f6434(0x202);
  if (iVar3 == 0) {
    FUN_8012219c();
    return;
  }
LAB_80137c00:
  FUN_80126610();
LAB_80137c08:
  FUN_80137b18();
  FUN_80178bb4();
  DAT_8019eda6 = 0;
  FUN_801793f8(0);
LAB_80137c24:
  do {
    if (DAT_8019edc8 == 1) {
      FUN_80178bb4();
      return;
    }
    if (DAT_8019edc2 == 8) {
      FUN_80138788();
      FUN_80137b18();
    }
    if (DAT_8019edc2 == 7) {
      FUN_80187cd0(1);
      FUN_80138730();
      FUN_800f654c(1);
      FUN_800f8188(0x1b47);
      FUN_800f654c(1);
      FUN_800f8188(0x1a3c);
      FUN_80127668();
      FUN_80124298();
      FUN_801280d4();
      DAT_8019ed8c = 0;
LAB_80137d40:
      do {
        FUN_80127808();
        if (DAT_8019edc4 == 0x42) {
LAB_80137da0:
          FUN_80138788();
          goto LAB_80137c00;
        }
        iVar3 = FUN_800f53c0();
        if (iVar3 == 0) {
          FUN_800f7500(DAT_80199238);
          FUN_8011ef30();
          FUN_800f7500(0xe048);
          FUN_80126610();
          FUN_80138788();
          if (DAT_8019edc2 == 8) goto LAB_80137c24;
          goto LAB_80137c08;
        }
        if (DAT_8019eda6 == 0) break;
        DAT_8019eda6 = 2;
        DAT_8019eda8 = 1;
        FUN_801793f8(0);
        DAT_8019eda8 = 0;
        DAT_8019eda6 = 1;
        if (DAT_8019edc4 == 0x42) goto LAB_80137da0;
      } while (DAT_8019edc4 == 1);
      FUN_801382c8(0);
      FUN_800f6564(0x1a3c);
      FUN_800f5ccc();
      DAT_8019eda4 = (ushort)*DAT_8019ed40;
      iVar3 = FUN_800f5b8c(0x80);
      if (iVar3 == 0) {
        *DAT_8019ed40 = *DAT_8019ed40 << 3;
        FUN_800f824c(0x46);
        FUN_800f8fb8(0x45);
        FUN_800f7594(0x45);
        FUN_800f71dc(0xf600);
        FUN_800f926c();
        FUN_800f9644(0x20);
        FUN_800f6558(0x7ff);
        FUN_800f3d64(0x7e70);
        FUN_800f9660(0x20);
        FUN_800f9448();
        FUN_80138788();
        FUN_8013813c();
        if (DAT_8019edc2 == 7) {
          FUN_80187cd0(0);
        }
      }
      FUN_801221ec();
      FUN_801210ac();
      FUN_800f7500(DAT_80199238);
      FUN_8011ef30();
      FUN_800f7500(DAT_80199234);
    }
    else {
      DAT_800d2126 = 0;
      FUN_80128598();
      FUN_800f654c(1);
      FUN_800f8188(0x1b47);
      FUN_800f6564(0x1a3c);
      iVar3 = FUN_800f6434(0x202);
      if (iVar3 == 0) {
        FUN_800f654c(1);
        FUN_800f8188(0x1a3c);
      }
      FUN_80127668();
      FUN_80124298();
      FUN_801280d4();
      FUN_80127168();
      iVar3 = FUN_800f53c0();
      bVar1 = false;
      if (iVar3 != 0) goto LAB_80137d40;
      bVar1 = true;
      FUN_800f7500(DAT_80199232);
    }
    FUN_8011fba4();
    FUN_80138788();
    if ((DAT_8019edc2 == 8) && (!bVar1)) {
      DAT_800d0301 = 0xf0;
      FUN_80138458();
      FUN_80177dec();
      FUN_80177dec();
      FUN_80177dec();
      DAT_8019eda8 = 1;
      FUN_801793f8(0);
      if (DAT_8019eda8 == 2) {
        FUN_801382c8(1);
      }
      FUN_80127c70();
      FUN_801221ec();
      FUN_801210ac();
      FUN_800f7500(DAT_80199238);
      FUN_8011ef30();
      FUN_800f7500(DAT_80199234);
      FUN_8011fba4();
      FUN_80138788();
      DAT_8019ed98 = 0;
      DAT_8019edc8 = 0;
      DAT_8019edc4 = 0;
      if ((DAT_8019eda8 == 1) && (bVar2 = true, DAT_8019ed88 != 0)) {
        FUN_8013836c(0);
      }
    }
    FUN_801263f0();
    if (DAT_8019eda8 == 1) {
      FUN_80145aa0();
    }
    if (DAT_8019eda8 == 2) {
      FUN_80145aa0();
      FUN_80138620();
    }
    DAT_8019eda8 = 0;
    if (DAT_8019edc2 == 7) {
      FUN_801383b8();
      DAT_8019ed8c = 1;
      DAT_8019ed88 = 1;
    }
    else if ((bVar2) && (bVar1)) {
      FUN_80138408();
    }
    else {
      DAT_8019ed90 = 1;
      FUN_8011ff40();
      if (DAT_8019ed90 == 2) {
        DAT_8019ed90 = 0;
        goto LAB_80137c00;
      }
      DAT_8019ed90 = 0;
    }
    FUN_80126610();
    if (DAT_8019edc2 == 7) {
      FUN_80178bb4();
      DAT_8019eda6 = 0;
      FUN_801793f8(0);
      DAT_8019ed8c = 0;
    }
    if ((DAT_8019edc2 != 8) || (bVar1)) goto LAB_80137c08;
    FUN_80138730();
  } while( true );
}



