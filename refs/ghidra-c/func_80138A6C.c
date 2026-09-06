
void FUN_80138a6c(void)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  RECT local_18;
  
  FUN_80123d3c();
  FUN_80124298();
  FUN_800f654c(1);
  FUN_800f8188(0x1a73);
  FUN_800f9644(0x20);
  FUN_800f65f0(0x204);
  FUN_800f922c();
  FUN_800f65f0(0x206);
  iVar6 = 0x10000;
  FUN_800f922c();
  FUN_800f9660(0x20);
  FUN_800f54b8();
  FUN_800f654c(0x2c);
  FUN_800f81e8(0x205);
  FUN_800f654c(0xce);
  FUN_800f81e8(0x206);
  FUN_800f654c(1);
  FUN_800f81e8(0x207);
  FUN_800f654c(0x21);
  FUN_800f81e8(0x4200);
  FUN_800f65c8(0x4211);
  FUN_800f5448();
  FUN_800f6240(0x1b49);
  FUN_80123fb4();
  FUN_801241b8();
  FUN_80126330();
  FUN_80138cb0();
  FUN_80139aa4();
  FUN_8011f6a4();
  FUN_8011ef0c();
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
  FUN_80138d24();
  FUN_800f8f74(0x1b49);
  FUN_80126610();
  FUN_800f54b8();
  FUN_800f9644(0x20);
  FUN_800f9410();
  FUN_800f8210(0x206);
  FUN_800f9410();
  FUN_800f8210(0x204);
  FUN_800f9660(0x20);
  return;
}



