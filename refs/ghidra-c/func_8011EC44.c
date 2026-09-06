
void FUN_8011ec44(void)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  RECT local_18;
  
  do {
    FUN_8016ea9c();
    FUN_80123d3c();
    FUN_8017f8f8(&DAT_801d3d68,0x200,0,0);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x11);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x12);
    iVar6 = 0x10000;
    psVar5 = &DAT_8019a7fc;
    psVar4 = &DAT_8019a774;
    DAT_8019ee30 = 0;
    DAT_8019ee2e = 0;
    DAT_8019ee2c = 0;
    do {
      sVar2 = *psVar5;
      puVar1 = (ushort *)(psVar5 + 1);
      psVar5 = psVar5 + 2;
      local_18.x = *psVar4;
      local_18.y = psVar4[1];
      local_18.w = psVar4[2];
      local_18.h = psVar4[3];
      psVar4 = psVar4 + 4;
      MoveImage(&local_18,(int)sVar2,(int)((*puVar1 - 0x100) * 0x10000) >> 0x10);
      DrawSync(0);
      iVar3 = iVar6 >> 0x10;
      iVar6 = iVar6 + 0x10000;
    } while (iVar3 < 0x11);
    *DAT_8019ed54 = *DAT_8019ed4c;
    FUN_800f5e48();
    FUN_800f5e48();
    FUN_800f8d00(0x1a65);
    DAT_8019edc8 = 0;
    FUN_801225c0();
    FUN_80126610();
    FUN_80122114();
  } while (DAT_8019edc8 == 1);
  return;
}



