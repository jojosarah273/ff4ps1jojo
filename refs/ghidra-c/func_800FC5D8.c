
void FUN_800fc5d8(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  RECT local_20;
  
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar3 = FUN_800f53d4();
  if (iVar3 == 0) {
    FUN_800f654c(7);
    FUN_800f8188(0x2105);
    FUN_800ffadc();
    FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
    DAT_8019ee2c = 0x1100;
  }
  else {
    FUN_800f654c(9);
    FUN_800f8188(0x2105);
    FUN_800ffb1c();
    FUN_8010ca74();
    FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
    FUN_8017f9a8(&DAT_801cfd68,0x200,0,0x11);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0x100,2);
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    psVar6 = &DAT_8019a7fe;
    psVar5 = &DAT_8019a774;
    DAT_8019ee2e = 0x13ff;
    DAT_8019ee2c = 0x13ff;
    DAT_8019ee30 = 0;
    iVar3 = 0x10000;
    do {
      psVar1 = psVar6 + -1;
      sVar2 = *psVar6;
      psVar6 = psVar6 + 2;
      local_20.x = *psVar5;
      local_20.y = psVar5[1];
      local_20.w = psVar5[2];
      local_20.h = psVar5[3];
      psVar5 = psVar5 + 4;
      MoveImage(&local_20,(int)*psVar1,(int)sVar2);
      DrawSync(0);
      iVar4 = iVar3 >> 0x10;
      iVar3 = iVar3 + 0x10000;
    } while (iVar4 < 0x11);
    FUN_800f6564(0xfe4);
    FUN_800f7864();
    iVar3 = FUN_800f7728(0x101);
    if (iVar3 == 0) {
      FUN_800f654c(3);
      FUN_800f8188(0x2130);
      FUN_800f654c(0x43);
      FUN_800f8188(0x2131);
      FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
      FUN_8017f9a8(&DAT_801cfd68,0x200,0,0x11);
      FUN_8017f8f8(&DAT_801d3d68,0x200,0x100,2);
      psVar6 = &DAT_8019a7fe;
      psVar5 = &DAT_8019a774;
      DAT_8019ee2e = 0x13ff;
      DAT_8019ee2c = 0x13ff;
      DAT_8019ee30 = 0;
      iVar3 = 0x10000;
      do {
        psVar1 = psVar6 + -1;
        sVar2 = *psVar6;
        psVar6 = psVar6 + 2;
        local_20.x = *psVar5;
        local_20.y = psVar5[1];
        local_20.w = psVar5[2];
        local_20.h = psVar5[3];
        psVar5 = psVar5 + 4;
        MoveImage(&local_20,(int)*psVar1,(int)sVar2);
        DrawSync(0);
        iVar4 = iVar3 >> 0x10;
        iVar3 = iVar3 + 0x10000;
      } while (iVar4 < 0x11);
    }
  }
  FUN_80176060();
  FUN_80175e88();
  FUN_800f6b68(0x1000);
  iVar3 = FUN_800f6434(0x202);
  if (iVar3 == 0) {
    FUN_80175e08();
  }
  FUN_800fe870();
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f654c(0);
  FUN_800fd85c();
  FUN_800f5448();
  return;
}



