
void FUN_80126e08(void)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  RECT local_18;
  
  if (DAT_8019edea != -1) {
    FUN_800f654c(0x15);
    FUN_800f8188(0x1e01);
    FUN_800f654c(1);
    FUN_800f8188(0x1e00);
    FUN_80169128();
    FUN_80123d3c();
    FUN_8017f8f8(&DAT_801d3d68,0x200,0,0);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x11);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x12);
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    iVar3 = 0x10000;
    psVar6 = &DAT_8019a7fc;
    psVar5 = &DAT_8019a774;
    DAT_8019ee30 = 0;
    DAT_8019ee2e = 0;
    DAT_8019ee2c = 0;
    do {
      sVar2 = *psVar6;
      puVar1 = (ushort *)(psVar6 + 1);
      psVar6 = psVar6 + 2;
      local_18.x = *psVar5;
      local_18.y = psVar5[1];
      local_18.w = psVar5[2];
      local_18.h = psVar5[3];
      psVar5 = psVar5 + 4;
      MoveImage(&local_18,(int)sVar2,(int)((*puVar1 - 0x100) * 0x10000) >> 0x10);
      DrawSync(0);
      iVar4 = iVar3 >> 0x10;
      iVar3 = iVar3 + 0x10000;
    } while (iVar4 < 0x11);
    FUN_800f654c(0x30);
    FUN_800f824c(0xc1);
    FUN_80128480();
    FUN_800f8f74(0x1b47);
    goto LAB_80126f74;
  }
  DAT_800d1a3c = 0;
  DAT_8019edc4 = 2;
  do {
    FUN_800f6564(0x1a3c);
    iVar3 = FUN_800f6434(0x202);
    if (iVar3 == 0) {
      FUN_80126610();
      FUN_80128c4c();
      FUN_8013aaa8();
      FUN_800f9644(0x20);
      FUN_800f6558(0x1be4);
      FUN_800f81b0(0x17fe);
      FUN_800f9660(0x20);
      FUN_800f8f74(0x17fb);
      FUN_80128264();
      return;
    }
    while( true ) {
      DAT_8019edc4 = 0;
      FUN_80127808();
      iVar3 = FUN_800f53c0();
      if (iVar3 != 0) {
        FUN_8013b04c();
        FUN_8013aaa8();
        FUN_80187c20();
        FUN_80126610();
        return;
      }
      FUN_80187c20();
      FUN_80126610();
      if (DAT_8019edc2 == 1) {
        DAT_8019edc4 = DAT_8019edc2;
        return;
      }
LAB_80126f74:
      FUN_80123fb4();
      FUN_801241b8();
      FUN_8011f6a4();
      FUN_800f6564(0x1a3c);
      FUN_80127668();
      if (DAT_8019edc2 == 1) {
        FUN_8013836c(1);
      }
      FUN_80124298();
      FUN_801280d4();
      DAT_800d212c = DAT_800d212c & 0xf;
      FUN_80127408();
      FUN_801210ac();
      FUN_800f7500(DAT_8019921c);
      FUN_8011fba4();
      FUN_80126330();
      if (DAT_8019edc2 != 1) break;
      FUN_80128750();
      FUN_8016ea7c();
      DAT_800d212c = DAT_800d212c | 0x10;
    }
    FUN_80128598();
    DAT_800d212c = DAT_800d212c | 0x10;
    FUN_80127168();
    if (DAT_8019edc4 == 1) {
      return;
    }
  } while( true );
}



