
void FUN_8017835c(int param_1)

{
  u_short uVar1;
  u_short *puVar2;
  int iVar3;
  
  puVar2 = &DAT_801a0a10;
  iVar3 = 3;
  do {
    uVar1 = GetTPage(2,0,0x200,0);
    *puVar2 = uVar1;
    puVar2[0xc] = uVar1;
    puVar2[8] = uVar1;
    puVar2[4] = uVar1;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  DAT_8019ee10 = GetTPage(0,0,0x300,0);
  SetDrawMode((DR_MODE *)(param_1 + 100),0,0,(uint)DAT_801a0a10,(RECT *)0x0);
  SetDrawMode((DR_MODE *)(param_1 + 0x70),0,0,(uint)DAT_801a0a18,(RECT *)0x0);
  return;
}



