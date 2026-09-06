
void FUN_80178730(void)

{
  u_short uVar1;
  int iVar2;
  u_short *puVar3;
  
  SetDefDrawEnv((DRAWENV *)&DAT_801a0a90,0,0,0x100,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801b57a0,0,0xf0,0x100,0xf0);
  SetDefDispEnv((DISPENV *)&DAT_801a0aec,0,0xf0,0x100,0xf0);
  SetDefDispEnv((DISPENV *)&DAT_801b57fc,0,0,0x100,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801a0a30,0x100,0,0x100,0xf0);
  iVar2 = 0;
  puVar3 = &DAT_801dfd68;
  DAT_801a0af6 = 8;
  DAT_801a0afa = 0xe0;
  DAT_801a0af4 = 0xfffe;
  DAT_801b580a = 0xe0;
  DAT_801b5806 = 8;
  DAT_801b5804 = 0xfffe;
  DAT_801a0aa8 = 1;
  DAT_801a0aa9 = 8;
  DAT_801a0aaa = 8;
  DAT_801a0aab = 8;
  DAT_801b57b8 = 1;
  DAT_801b57b9 = 8;
  DAT_801b57ba = 8;
  DAT_801b57bb = 8;
  DAT_801a0a48 = 0;
  DAT_801a0a49 = 0;
  DAT_801a0a4a = 0;
  DAT_801a0a4b = 0;
  do {
    uVar1 = GetClut(0x200,iVar2 + 0x1c0);
    *puVar3 = uVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x40);
  return;
}



