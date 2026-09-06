
void FUN_801847d8(void)

{
  undefined *p1;
  undefined *p1_00;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  SetDefDrawEnv((DRAWENV *)&DAT_801e6060,0,0,0x100,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801e60bc,0,0xf0,0x100,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801e6118,0x100,0,0x100,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801e6174,0,0,0x100,0x8f);
  SetDefDrawEnv((DRAWENV *)&DAT_801e61d0,0,0xf0,0x100,0x8f);
  p1 = &DAT_801e2540;
  CatPrim(&DAT_801e2534,&DAT_801e2540);
  iVar2 = 0;
  p1_00 = &DAT_801e23c0;
  puVar3 = &DAT_801e252c;
  puVar4 = puVar3;
  do {
    FUN_801854a0(p1,0x100,1,0,iVar2,0,iVar2);
    if (0 < iVar2) {
      if (iVar2 - 0x10U < 0xf) {
        CatPrim(puVar4,p1_00);
        CatPrim(p1_00,p1);
      }
      else {
        CatPrim(puVar3,p1);
      }
    }
    p1_00 = p1_00 + 0xc;
    puVar4 = puVar4 + 0x14;
    puVar3 = puVar3 + 0x14;
    iVar2 = iVar2 + 1;
    p1 = p1 + 0x14;
  } while (iVar2 < 0xf0);
  FUN_801972b8(&DAT_801e37ec);
  iVar2 = 0;
  puVar4 = &DAT_801e3860;
  puVar3 = &DAT_801e4c38;
  iVar1 = 0;
  do {
    FUN_80185540(puVar4,1,0xf,iVar2,0,iVar2,0);
    FUN_80185540(&DAT_801e4c60 + iVar1,1,0xe0,iVar2,0x10,iVar2,0x10);
    if (0 < iVar2) {
      CatPrim(&DAT_801e3838 + iVar1,puVar4);
      CatPrim(puVar3,&DAT_801e4c60 + iVar1);
    }
    puVar3 = puVar3 + 0x28;
    puVar4 = puVar4 + 0x28;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x28;
  } while (iVar2 < 0x80);
  CatPrim(&DAT_801e4c38,&DAT_801e4c60);
  FUN_801972b8(&DAT_801e6038);
  CatPrim(&DAT_801e3800,&DAT_801e3824);
  FUN_801854a0(&DAT_801e3824,0x100,1,0,0xf,0,0xe);
  CatPrim(&DAT_801e3824,&DAT_801e380c);
  FUN_801854a0(&DAT_801e3838,1,0x10,0xff,0,0xfe,0);
  FUN_801854a0(&DAT_801e384c,1,0xe0,0xff,0x10,0xfe,0x10);
  CatPrim(&DAT_801e380c,&DAT_801e3838);
  CatPrim(&DAT_801e3838,&DAT_801e3818);
  CatPrim(&DAT_801e3818,&DAT_801e384c);
  FUN_801972b8(&DAT_801e384c);
  FUN_801972b8(&DAT_801e2400);
  FUN_801972b8(&DAT_801e2440);
  return;
}



