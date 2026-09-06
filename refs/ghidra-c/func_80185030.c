
void FUN_80185030(void)

{
  u_short uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  uVar1 = GetTPage(1,0,0x100,0);
  SetDrawMode((DR_MODE *)&DAT_801e0dc8,0,0,CONCAT22(extraout_var,uVar1),(RECT *)0x0);
  uVar1 = GetTPage(1,0,0x100,0);
  SetDrawMode((DR_MODE *)&DAT_801e0de0,0,0,CONCAT22(extraout_var_00,uVar1),(RECT *)0x0);
  uVar1 = GetTPage(1,0,0x180,0);
  SetDrawMode((DR_MODE *)&DAT_801e0dd4,0,0,CONCAT22(extraout_var_01,uVar1),(RECT *)0x0);
  uVar1 = GetTPage(1,0,0x180,0);
  SetDrawMode((DR_MODE *)&DAT_801e0dec,0,0,CONCAT22(extraout_var_02,uVar1),(RECT *)0x0);
  puVar2 = &DAT_801e0df8;
  FUN_801854a0(&DAT_801e0df8,0x100,1,0,0,0,0);
  CatPrim(&DAT_801e0dc8,&DAT_801e0df8);
  iVar4 = 1;
  puVar3 = &DAT_801e0e0c;
  do {
    FUN_801854a0(puVar3,0x100,1,0,iVar4,0,iVar4);
    CatPrim(puVar2,puVar3);
    puVar2 = puVar2 + 0x14;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x14;
  } while (iVar4 < 0x75);
  CatPrim(&UNK_801e0de4 + iVar4 * 0x14,&DAT_801e0dd4);
  puVar3 = &DAT_801e18fc;
  FUN_801854a0(&DAT_801e18fc,0x100,1,0,0,0,0);
  CatPrim(&DAT_801e0dd4,&DAT_801e18fc);
  iVar4 = 0x8e;
  puVar2 = &DAT_801e1910;
  do {
    FUN_801854a0(puVar2,0x100,1,0,iVar4 + -0x8d,0,iVar4 + -0x8d);
    CatPrim(puVar3,puVar2);
    puVar3 = puVar3 + 0x14;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 0x14;
  } while (iVar4 < 0x102);
  FUN_801972b8(&UNK_801e0de4 + iVar4 * 0x14);
  puVar3 = &DAT_801e171c;
  FUN_801854a0(&DAT_801e171c,0x100,1,0,0x75,0,0x75);
  CatPrim(&DAT_801e0de0,&DAT_801e171c);
  iVar4 = 0x76;
  puVar2 = &DAT_801e1730;
  do {
    FUN_801854a0(puVar2,0x100,1,0,iVar4,0,iVar4);
    CatPrim(puVar3,puVar2);
    puVar3 = puVar3 + 0x14;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 0x14;
  } while (iVar4 < 0x8d);
  CatPrim(&UNK_801e0de4 + iVar4 * 0x14,&DAT_801e0dec);
  puVar3 = &DAT_801e2220;
  FUN_801854a0(&DAT_801e2220,0x100,1,0,0x75,0,0x75);
  CatPrim(&DAT_801e0dec,&DAT_801e2220);
  iVar4 = 0x103;
  puVar2 = &DAT_801e2234;
  do {
    FUN_801854a0(puVar2,0x100,1,0,iVar4 + -0x8d,0,iVar4 + -0x8d);
    CatPrim(puVar3,puVar2);
    puVar3 = puVar3 + 0x14;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 0x14;
  } while (iVar4 < 0x11a);
  FUN_801972b8(&UNK_801e0de4 + iVar4 * 0x14);
  return;
}



