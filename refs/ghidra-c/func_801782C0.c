
void FUN_801782c0(undefined4 param_1)

{
  u_short uVar1;
  u_short *puVar2;
  int iVar3;
  int x;
  
  puVar2 = &DAT_801a0a10;
  x = 0x200;
  iVar3 = 3;
  do {
    uVar1 = GetTPage(0,0,x,0);
    *puVar2 = uVar1;
    puVar2[0xc] = uVar1;
    puVar2[8] = uVar1;
    puVar2[4] = uVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
    x = x + 0x40;
  } while (-1 < iVar3);
  DAT_8019ee10 = GetTPage(0,0,0x300,0);
  FUN_8017f644(param_1);
  return;
}



