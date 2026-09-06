
void FUN_801799f0(void)

{
  undefined1 *puVar1;
  uint *puVar2;
  byte bVar3;
  u_short uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  u_long *p;
  uint uVar8;
  int iVar9;
  int iVar10;
  RECT local_30;
  
  puVar1 = (undefined1 *)((int)&local_30.y + 1);
  uVar6 = (uint)puVar1 & 3;
  puVar2 = (uint *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1 << (uVar6 + 1) * 8 | DAT_8019ed14 >> (3 - uVar6) * 8;
  local_30._0_4_ = DAT_8019ed14;
  puVar1 = (undefined1 *)((int)&local_30.h + 1);
  uVar6 = (uint)puVar1 & 3;
  puVar2 = (uint *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1 << (uVar6 + 1) * 8 | DAT_8019ed18 >> (3 - uVar6) * 8;
  local_30._4_4_ = DAT_8019ed18;
  SetDispMask(1);
  ClearImage(&local_30,'\0','\0','\0');
  FUN_80178988("ENGBIN\\SQEA.TIM",&DAT_80010000);
  iVar10 = 0;
  local_30.y = DAT_8001000e;
  local_30.x = DAT_8001000c;
  local_30.h = DAT_80010012;
  local_30.w = DAT_80010010;
  LoadImage(&local_30,(u_long *)&DAT_80010014);
  DrawSync(0);
  iVar9 = 0;
  uVar6 = DAT_80010008 & 0xfffffffc;
  local_30._0_4_ = *(undefined4 *)((int)&DAT_8001000c + uVar6);
  local_30._4_4_ = *(undefined4 *)((int)&DAT_80010010 + uVar6);
  LoadImage(&local_30,(u_long *)(&DAT_80010014 + uVar6));
  DrawSync(0);
  SetDefDrawEnv((DRAWENV *)&DAT_801a0a90,0,0,0x140,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801b57a0,0,0xf0,0x140,0xf0);
  SetDefDispEnv((DISPENV *)&DAT_801a0aec,0,0xf0,0x140,0xf0);
  SetDefDispEnv((DISPENV *)&DAT_801b57fc,0,0,0x140,0xf0);
  DAT_801a0af4 = 0;
  DAT_801a0af6 = 0;
  DAT_801a0af8 = 0x140;
  DAT_801a0afa = 0xf0;
  DAT_801b5804 = 0;
  DAT_801b5806 = 0;
  DAT_801b5808 = 0x140;
  DAT_801b580a = 0xf0;
  SetDefDrawEnv((DRAWENV *)&DAT_801a08a8,0,0,0x140,0xf0);
  SetDefDrawEnv((DRAWENV *)&DAT_801a0904,0,0xf0,0x140,0xf0);
  do {
    FUN_80197378(&DAT_801dff88 + iVar9);
    *(undefined2 *)((int)&DAT_801dff90 + iVar9) = 0x20;
    *(undefined2 *)((int)&DAT_801dff92 + iVar9) = 0xfff0;
    (&DAT_801dff94)[iVar9] = 0;
    (&DAT_801dff95)[iVar9] = 0;
    *(undefined2 *)((int)&DAT_801dff98 + iVar9) = 0x100;
    *(undefined2 *)((int)&DAT_801dff9a + iVar9) = 0xf0;
    (&DAT_801dff8c)[iVar9] = 0x80;
    (&DAT_801dff8d)[iVar9] = 0x80;
    (&DAT_801dff8e)[iVar9] = 0x80;
    FUN_80197308(&DAT_801dff88 + iVar9,1);
    uVar4 = GetClut(0,0x1e0);
    *(u_short *)((int)&DAT_801dff96 + iVar9) = uVar4;
    FUN_80197378(&DAT_801dff9c + iVar9);
    *(undefined2 *)((int)&DAT_801dffa4 + iVar9) = 0x100;
    *(undefined2 *)((int)&DAT_801dffa6 + iVar9) = 0;
    (&DAT_801dffa8)[iVar9] = 0;
    (&DAT_801dffa9)[iVar9] = 0;
    *(undefined2 *)((int)&DAT_801dffac + iVar9) = 0x40;
    *(undefined2 *)((int)&DAT_801dffae + iVar9) = 0xf0;
    (&DAT_801dffa0)[iVar9] = 0x80;
    (&DAT_801dffa1)[iVar9] = 0x80;
    (&DAT_801dffa2)[iVar9] = 0x80;
    FUN_80197308(&DAT_801dff9c + iVar9,1);
    uVar4 = GetClut(0,0x1e0);
    iVar5 = iVar10 * 0x10;
    *(u_short *)((int)&DAT_801dffaa + iVar9) = uVar4;
    FUN_80197398(&DAT_801dff38 + iVar5);
    (&DAT_801dff40)[iVar10 * 8] = 0;
    (&DAT_801dff42)[iVar10 * 8] = 0;
    (&DAT_801dff3c)[iVar5] = 0;
    (&DAT_801dff3d)[iVar5] = 0;
    (&DAT_801dff3e)[iVar5] = 0;
    (&DAT_801dff44)[iVar10 * 8] = 0x140;
    (&DAT_801dff46)[iVar10 * 8] = 0xf0;
    FUN_801972d8(&DAT_801dff38 + iVar5,1);
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 0x28;
  } while (iVar10 < 2);
  iVar9 = 0;
  iVar10 = 0;
  uVar6 = 0;
  do {
    uVar8 = uVar6;
    uVar6 = uVar8 ^ 1;
    iVar7 = uVar6 * 0x14d10;
    ClearOTag((u_long *)(&DAT_801a0b00 + iVar7),0x2a);
    iVar5 = uVar6 * 0x10;
    if (iVar10 < 0x14) {
      iVar9 = iVar10;
    }
    if (0x118 < iVar10) {
      iVar9 = 300 - iVar10;
    }
    p = (u_long *)(&DAT_801a0b00 + iVar7);
    if (0x11 < iVar9) {
      iVar9 = 0x11;
    }
    bVar3 = ~((char)iVar9 * '\x0f');
    (&DAT_801dff3c)[iVar5] = bVar3;
    (&DAT_801dff3d)[iVar5] = bVar3;
    (&DAT_801dff3e)[iVar5] = bVar3;
    AddPrim(p,&DAT_801dff38 + iVar5);
    AddPrim(p,&DAT_801dff88 + uVar6 * 0x28);
    uVar4 = GetTPage(1,2,0x200,0);
    SetDrawMode((DR_MODE *)(&UNK_801dff58 + uVar6 * 0x18),0,0,CONCAT22(extraout_var,uVar4),
                (RECT *)0x0);
    AddPrim(p,(DR_MODE *)(&UNK_801dff58 + uVar6 * 0x18));
    AddPrim(p,&DAT_801dff9c + uVar6 * 0x28);
    uVar4 = GetTPage(1,2,0x280,0);
    SetDrawMode((DR_MODE *)(&UNK_801dff64 + uVar6 * 0x18),0,0,CONCAT22(extraout_var_00,uVar4),
                (RECT *)0x0);
    AddPrim(p,(DR_MODE *)(&UNK_801dff64 + uVar6 * 0x18));
    SetDrawEnv((DR_ENV *)(&UNK_801dfeb8 + uVar6 * 0x40),(DRAWENV *)(&DAT_801a08a8 + uVar6 * 0x5c));
    AddPrim(p,(DR_ENV *)(&UNK_801dfeb8 + uVar6 * 0x40));
    DrawSync(0);
    VSync(0);
    PutDispEnv((DISPENV *)(&DAT_801a0aec + iVar7));
    PutDrawEnv((DRAWENV *)(&DAT_801a0a90 + iVar7));
    DrawOTag(p);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 300);
  iVar9 = uVar8 * 0x14d10;
  ClearOTag((u_long *)(&DAT_801a0b00 + iVar9),0x2a);
  DrawSync(0);
  VSync(0);
  PutDispEnv((DISPENV *)(&DAT_801a0aec + iVar9));
  PutDrawEnv((DRAWENV *)(&DAT_801a0a90 + iVar9));
  DrawOTag((u_long *)(&DAT_801a0b00 + iVar9));
  local_30.x = 0;
  local_30.y = 0;
  local_30.w = 0x140;
  local_30.h = 0x1e0;
  ClearImage(&local_30,'\0','\0','\0');
  FUN_80178730();
  return;
}



