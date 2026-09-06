
void FUN_801121c4(void)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  RECT local_20;
  
  cVar2 = *DAT_8019ed40;
  FUN_800fb3f8();
  FUN_800f654c(0x17);
  FUN_800f8188(0x212c);
  FUN_800f8f74(0x2130);
  FUN_800f8f74(0x2131);
  FUN_80170884();
  FUN_800f8f74(0x420b);
  FUN_800f71dc(0xec80);
  FUN_800f8d00(0x4302);
  FUN_800f654c(8);
  FUN_800f8188(0x4304);
  FUN_8017091c();
  FUN_800f71dc(0);
  do {
    FUN_800f6c68(0x8ff00);
    FUN_800f8768(0xcdb);
    FUN_800f6364();
    FUN_800f5958(0x100);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f654c(0);
  uVar7 = 0x2800;
  FUN_800fc07c();
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  FUN_800f7500(0x2000);
  FUN_800f71dc(0x800);
  iVar4 = 0x5000;
  do {
    uVar7 = uVar7 + 1 & 0xffff;
    *(undefined2 *)((int)&DAT_801cfd68 + iVar4) = *DAT_8019ed58;
    FUN_800f5e48();
    iVar5 = FUN_800f5c64(0x202);
    iVar4 = uVar7 << 1;
  } while (iVar5 != 0);
  FUN_800f71dc(0x1a00);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x300);
  FUN_800f8d6c(0x45);
  FUN_800f71dc(0xf880);
  FUN_800f8d6c(0x3d);
  FUN_800f654c(8);
  FUN_800f824c(0x3c);
  FUN_801766b0();
  FUN_800f71dc(0x31c0);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x380);
  FUN_800f8d6c(0x45);
  FUN_800f71dc(0xfb80);
  FUN_800f8d6c(0x3d);
  FUN_801766b0();
  FUN_800f71dc(0x4000);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x80);
  FUN_800f8d6c(0x45);
  FUN_800f71dc(0xfd00);
  FUN_800f8d6c(0x3d);
  FUN_800f654c(0x1a);
  FUN_800f824c(0x3c);
  FUN_801766b0();
  if (cVar2 == '\x12') {
    FUN_8017f8f8(&DAT_801cfd68,0x200,0,0);
    FUN_8017f8f8(&DAT_801cfd68,0x200,0,0x11);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0x100,2);
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    iVar4 = 0x1ff;
    puVar6 = &DAT_801d3166;
    do {
      *puVar6 = 0x49;
      iVar4 = iVar4 + -1;
      puVar6 = puVar6 + -1;
    } while (-1 < iVar4);
    DAT_8019ee2c = 0x49;
    DAT_8019ee2e = 1;
  }
  else {
    FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
    FUN_8017f9a8(&DAT_801cfd68,0x200,0,0x11);
    FUN_8017f8f8(&DAT_801d3d68,0x200,0x100,2);
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    DAT_8019ee2e = 0x13ff;
    DAT_8019ee2c = 0x13ff;
  }
  DAT_8019ee30 = 0;
  psVar9 = &DAT_8019a7fe;
  psVar8 = &DAT_8019a774;
  iVar4 = 0x10000;
  do {
    psVar1 = psVar9 + -1;
    sVar3 = *psVar9;
    psVar9 = psVar9 + 2;
    local_20.x = *psVar8;
    local_20.y = psVar8[1];
    local_20.w = psVar8[2];
    local_20.h = psVar8[3];
    psVar8 = psVar8 + 4;
    MoveImage(&local_20,(int)*psVar1,(int)sVar3);
    DrawSync(0);
    iVar5 = iVar4 >> 0x10;
    iVar4 = iVar4 + 0x10000;
  } while (iVar5 < 0x11);
  local_20.x = 0xc0;
  local_20.y = 0x1e0;
  local_20.w = 0x10;
  local_20.h = 0x10;
  FUN_800f71dc(0);
  do {
    FUN_800f6c68(0x1afcf0);
    FUN_800f8768(0xddb);
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800fe870();
  FUN_800f71dc(0);
  do {
    FUN_800f6c68(0x14fa56);
    FUN_800f8768(0x300);
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f71dc(0);
  FUN_800f8d6c(0x5a);
  FUN_800f8d6c(0x5c);
  FUN_800f8d6c(0x5e);
  FUN_800f8d6c(0x60);
  FUN_800f8f74(0xfe4);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f654c(7);
  FUN_800fd85c();
  FUN_800f654c(1);
  FUN_800f824c(0xcb);
  FUN_800f654c(0xd0);
  FUN_800f824c(0xb2);
  FUN_80108330();
  FUN_80107c98();
  FUN_80107f3c();
  FUN_800f8fb8(0xcb);
  FUN_800fd6e8();
  FUN_800f654c(7);
  DAT_800d212c = 0x13;
  FUN_800fd914();
  FUN_8011ea5c();
  return;
}



