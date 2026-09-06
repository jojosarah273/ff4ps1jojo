
void FUN_80134c74(void)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  RECT local_18;
  
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f71dc(0x100);
  FUN_800f9330();
  iVar6 = 0x10000;
  FUN_800f94b8();
  FUN_800f654c(0x7e);
  FUN_800f9200();
  FUN_800f9448();
  FUN_8016ea9c();
  FUN_80123d3c();
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x11);
  FUN_8017f8f8(&DAT_801d3d68,0x200,0,0x12);
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
  FUN_800f71dc(0xed00);
  FUN_800f8d00(0x1b1d);
  FUN_800f654c(0x20);
  FUN_800f824c(0xc1);
  FUN_800f8f74(0x1b79);
  FUN_800f8f74(0x1b7a);
  FUN_8016ea7c();
  FUN_800f654c(0x20);
  FUN_800f824c(0x3f);
  FUN_800f8f74(0x1b94);
  FUN_80123fb4();
  FUN_801241b8();
  FUN_80126330();
  FUN_8011f6a4();
  FUN_801378b0();
  FUN_800f654c(10);
  FUN_800f8188(0x1b7c);
  FUN_80134ff4();
  FUN_80126610();
  FUN_80122114();
  FUN_800f971c();
  FUN_800f3d48();
  FUN_800f94b8();
  FUN_800f9448();
  return;
}



