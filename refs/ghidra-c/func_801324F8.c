
void FUN_801324f8(void)

{
  ushort *puVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  RECT local_20;
  
  FUN_80123d3c();
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x11);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x12);
  iVar7 = 0x10000;
  psVar6 = &DAT_8019a7fc;
  psVar5 = &DAT_8019a774;
  DAT_8019ee30 = 0;
  DAT_8019ee2e = 0;
  DAT_8019ee2c = 0;
  do {
    sVar2 = *psVar6;
    puVar1 = (ushort *)(psVar6 + 1);
    psVar6 = psVar6 + 2;
    local_20.x = *psVar5;
    local_20.y = psVar5[1];
    local_20.w = psVar5[2];
    local_20.h = psVar5[3];
    psVar5 = psVar5 + 4;
    MoveImage(&local_20,(int)sVar2,(int)((*puVar1 - 0x100) * 0x10000) >> 0x10);
    DrawSync(0);
    iVar4 = iVar7 >> 0x10;
    iVar7 = iVar7 + 0x10000;
  } while (iVar4 < 0x11);
  FUN_800f654c(0x7e);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6240(0x1b49);
  FUN_80120f1c();
  FUN_80123fb4();
  FUN_801241b8();
  FUN_800f7500(DAT_80199242);
  FUN_8011ef30();
  FUN_800f7500(DAT_8019923a);
  FUN_8011fb74();
  FUN_800f71dc(0x188);
  FUN_800f7500(DAT_8019923e);
  FUN_801223a4();
  FUN_80124298();
  FUN_801280d4();
  FUN_80132c0c();
  FUN_800f654c(0xff);
  FUN_800f8188(0x1b4a);
  FUN_801264e8();
  FUN_80132ca4();
  FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
  FUN_8011f6a4();
  FUN_8011ef0c();
  FUN_80126590();
  FUN_800f8f74(0x1b48);
  while( true ) {
    FUN_800f6564(0x1b48);
    iVar7 = FUN_800f6434(0x202);
    if (iVar7 == 0) {
      FUN_800f71dc(0x3010);
    }
    else {
      FUN_800f71dc(0x3040);
    }
    FUN_800f971c();
    FUN_800f7500(0x300);
    FUN_8011f724();
    FUN_80132c0c();
    FUN_8011f684();
    FUN_801264e8();
    FUN_8011f884();
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar7 = FUN_800f4120(2);
    if (iVar7 == 0) break;
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar7 = FUN_800f4120(0x202);
    if (iVar7 != 0) goto LAB_801327f8;
    FUN_800f6630(1);
    FUN_800f4248(3);
    iVar7 = FUN_800f4120(2);
    if (iVar7 == 0) {
      FUN_800f6240(0x1b48);
      FUN_800f6564(0x1b48);
      FUN_800f4248(1);
      FUN_800f8188(0x1b48);
    }
  }
  FUN_800f6564(0x1b48);
  iVar7 = FUN_800f6434(0x202);
  if (iVar7 == 0) {
    FUN_800f8fb8(0);
    FUN_800f8fb8(1);
    FUN_800f8fb8(0x45);
    while( true ) {
      FUN_800f6630(0x45);
      FUN_8012d204();
      iVar7 = FUN_800f53d4();
      if (iVar7 == 0) break;
      FUN_800f62bc(0x45);
      FUN_800f6630(0x45);
      FUN_800f5574(5);
      iVar7 = FUN_800f53d4();
      if (iVar7 != 0) {
        FUN_800f8fb8(0x45);
      }
    }
    FUN_800f6630(0x45);
    FUN_800f8188(0x1b4a);
    FUN_800f654c(1);
    FUN_800f8188(0x1a73);
    FUN_800f7500(DAT_80199242);
    FUN_8011ef30();
    FUN_800f7500(DAT_8019923c);
    FUN_8011fba4();
    FUN_800f7500(DAT_80199244);
    FUN_8011ef30();
    FUN_8011f320();
    FUN_801264e8();
    do {
      FUN_80132c0c();
      FUN_800f6564(0x1b4a);
      FUN_80124eac();
      FUN_800f8d6c(0x60);
      FUN_800f6e30(0x60);
      FUN_800f7500(0x152);
      FUN_80120a0c();
      FUN_801264c0();
      FUN_8011f6a4();
      FUN_8011f884();
      FUN_800f6630(1);
      FUN_800f4248(1);
      iVar7 = FUN_800f4120(2);
      if (iVar7 == 0) {
        do {
          FUN_800f654c(1);
          FUN_800f8188(0x1a73);
          FUN_800f6564(0x1b4a);
          FUN_800f61e8();
          FUN_800f5574(5);
          iVar7 = FUN_800f53d4();
          if (iVar7 != 0) {
            FUN_800f971c();
          }
          FUN_800f8188(0x1b4a);
          FUN_80124eac();
          FUN_800f8d6c(0x45);
          FUN_800f6e30(0x45);
          FUN_800f4248(0x3f);
          iVar7 = FUN_800f4120(2);
        } while (iVar7 != 0);
      }
      FUN_800f6630(1);
      FUN_800f4248(2);
      iVar7 = FUN_800f4120(2);
      if (iVar7 == 0) {
        do {
          FUN_800f654c(1);
          FUN_800f8188(0x1a73);
          FUN_800f6564(0x1b4a);
          FUN_800f5ccc();
          iVar7 = FUN_800f5b8c(0x8080);
          if (iVar7 == 0) {
            FUN_800f654c(4);
          }
          FUN_800f8188(0x1b4a);
          FUN_80124eac();
          FUN_800f8d6c(0x45);
          FUN_800f6e30(0x45);
          FUN_800f4248(0x3f);
          iVar7 = FUN_800f4120(2);
        } while (iVar7 != 0);
      }
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar7 = FUN_800f4120(2);
      if (iVar7 == 0) {
        FUN_800f6564(0x1b4a);
        FUN_8012d204();
        FUN_800f5ccc();
        FUN_801224d0();
        *DAT_8019ed40 = (&DAT_80199304)[*DAT_8019ed54];
        FUN_800f824c(0x43);
        FUN_800f9644(0x20);
        FUN_800f6658(0x43);
        FUN_800f516c();
        FUN_800f8274(0x45);
        FUN_800f516c();
        FUN_800f5050();
        uVar3 = FUN_800f3c3c(0x45);
        FUN_800f3f94(uVar3);
        FUN_800f4064(0x1500);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6558(5);
        FUN_800f7500(0x1b0a);
        FUN_800f939c();
        FUN_800f9330();
        FUN_800f3d64(0x7e7e);
        FUN_800f9660(0x20);
        FUN_80128d4c();
        FUN_800f960c();
        FUN_800f95a0();
        FUN_800f9644(0x20);
        FUN_800f6558(5);
        FUN_800f3d64(0x7e7e);
        FUN_800f9660(0x20);
        return;
      }
      FUN_800f6630(1);
      FUN_800f4248(0x80);
      iVar7 = FUN_800f4120(2);
    } while (iVar7 != 0);
  }
LAB_801327f8:
  FUN_800f7500(DAT_80199242);
  FUN_8011ef30();
  FUN_800f7500(DAT_80199240);
  FUN_8011fba4();
  FUN_8011f320();
  FUN_801264e8();
  FUN_8011ff40();
  FUN_80126610();
  return;
}



