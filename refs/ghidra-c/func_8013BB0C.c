
void FUN_8013bb0c(void)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  RECT local_18;
  
  FUN_800f71dc(0xffe0);
  FUN_800f8d6c(0x93);
  FUN_800f71dc(0xff88);
  FUN_800f8d6c(0x9f);
  iVar6 = 0x10000;
  FUN_801210ac();
  FUN_8013cb94();
  FUN_80120fbc();
  FUN_800f71dc(0xed00);
  FUN_800f8d00(0x1b1d);
  FUN_800f6240(0x1bc6);
  FUN_8012a868();
  FUN_80120f1c();
  FUN_800f7500(DAT_80199262);
  FUN_8011ef30();
  FUN_80120e2c();
  FUN_8012aac0();
  FUN_80126330();
  FUN_8016ea7c();
  FUN_800f8fb8(0x60);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x11);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x12);
  FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
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
  FUN_80126590();
  do {
    FUN_8013c2fc();
    FUN_800f6630(0x60);
    iVar6 = FUN_800f6434(2);
    if (iVar6 != 0) {
      FUN_8013bd04();
      return;
    }
    FUN_8013ca70();
    iVar6 = FUN_800f53c0();
  } while (iVar6 != 0);
  return;
}



