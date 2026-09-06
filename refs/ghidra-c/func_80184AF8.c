
void FUN_80184af8(int param_1,int param_2,int param_3,void *param_4)

{
  char cVar1;
  u_short uVar2;
  u_short uVar3;
  u_short uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  DR_MODE *p;
  undefined *puVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  u_short local_60 [4];
  u_short local_58;
  u_short local_56;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar13 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  uVar11 = (uint)(DAT_800d2106 >> 4);
  if ((uVar11 != 0) || (param_1 != param_2)) {
    uVar2 = GetTPage(2,0,0,0);
    uVar3 = GetTPage(2,0,0,0x100);
    uVar4 = GetTPage(2,0,0x100,0);
    if (param_1 == 1) {
      local_50 = 0;
      local_4c = 0xf0;
      local_60[0] = uVar2;
      local_60[1] = uVar3;
    }
    else if (param_1 < 2) {
      if (param_1 == 0) {
        local_50 = 0;
        local_4c = 0;
        local_60[0] = uVar2;
        local_60[1] = uVar2;
      }
    }
    else if (param_1 == 2) {
      local_50 = 0x100;
      local_4c = 0;
      local_60[0] = uVar4;
      local_60[1] = uVar4;
    }
    if (param_2 == 1) {
      iVar13 = 0xf0;
      local_48 = 0;
      local_58 = uVar2;
      local_56 = uVar3;
    }
    else if (param_2 < 2) {
      if (param_2 == 0) {
        iVar13 = 0;
        local_48 = 0;
        local_58 = uVar2;
        local_56 = uVar2;
      }
    }
    else if (param_2 == 2) {
      iVar13 = 0;
      local_48 = 0x100;
      local_58 = uVar4;
      local_56 = uVar4;
    }
    if (DAT_800d0203 == '\x02') {
      SetDrawEnv((DR_ENV *)&DAT_801e2400,(DRAWENV *)(&DAT_801e6174 + param_2 * 0x5c));
    }
    else {
      SetDrawEnv((DR_ENV *)&DAT_801e2400,(DRAWENV *)(&DAT_801e6060 + param_2 * 0x5c));
    }
    iVar7 = 0;
    local_38 = iVar13 + 0xf;
    local_34 = iVar13 + 0x10;
    local_2c = iVar13 + -0x10;
    local_3c = iVar13 + 0xe;
    local_30 = (uint)(uVar11 == 0);
    local_44 = local_48 + -2;
    puVar10 = &UNK_801e2480;
    p = (DR_MODE *)&DAT_801e23c0;
    local_40 = param_3 << 1;
    do {
      iVar14 = iVar7 % (int)(uVar11 + 1);
      if (uVar11 + 1 == 0) {
        trap(7);
      }
      puVar10[0xcc] = (char)local_50;
      uVar8 = iVar7 - iVar14 < 0x10 ^ 1;
      puVar10[0xcd] = ((char)iVar7 + (char)local_4c) - (char)iVar14;
      if (iVar7 == 0) {
        SetDrawMode((DR_MODE *)&DAT_801e2534,1,1,(uint)local_60[uVar8],(RECT *)0x0);
      }
      if (iVar7 - 0x10U < 0xf) {
        SetDrawMode(p,1,1,(uint)local_60[uVar8],(RECT *)0x0);
      }
      p = p + 1;
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 0x14;
    } while (iVar7 < 0xf0);
    iVar14 = 0;
    puVar10 = &DAT_801e3860;
    iVar7 = 0x7f;
    do {
      if (0xff < iVar14) {
        uVar11 = 0;
      }
      iVar7 = iVar7 + -1;
      uVar12 = (undefined1)iVar13;
      puVar10[0xd] = uVar12;
      puVar10[0x15] = uVar12;
      puVar10[0x1d] = (char)local_38;
      puVar10[0x25] = (char)local_38;
      uVar6 = (undefined2)(iVar14 + 1);
      *(undefined2 *)(puVar10 + 8) = uVar6;
      *(undefined2 *)(puVar10 + 10) = 0;
      *(undefined2 *)(puVar10 + 0x12) = 0;
      *(undefined2 *)(puVar10 + 0x18) = uVar6;
      *(undefined2 *)(puVar10 + 0x1a) = 0xf;
      *(undefined2 *)(puVar10 + 0x22) = 0xf;
      puVar10[0x140d] = (char)local_34;
      puVar10[0x1415] = (char)local_34;
      puVar10[0x141d] = (char)local_2c;
      puVar10[0x1425] = (char)local_2c;
      *(undefined2 *)(puVar10 + 0x1408) = uVar6;
      *(undefined2 *)(puVar10 + 0x140a) = 0x10;
      *(undefined2 *)(puVar10 + 0x1412) = 0x10;
      *(undefined2 *)(puVar10 + 0x1418) = uVar6;
      *(undefined2 *)(puVar10 + 0x141a) = 0xf0;
      *(undefined2 *)(puVar10 + 0x1422) = 0xf0;
      cVar1 = (char)local_48 + (char)iVar14;
      sVar5 = (short)iVar14 + (short)uVar11 + 1;
      iVar14 = iVar14 + 1 + uVar11;
      puVar10[0xc] = cVar1;
      puVar10[0x14] = cVar1;
      puVar10[0x1c] = cVar1;
      puVar10[0x24] = cVar1;
      *(short *)(puVar10 + 0x10) = sVar5;
      *(short *)(puVar10 + 0x20) = sVar5;
      puVar10[0x140c] = cVar1;
      puVar10[0x1414] = cVar1;
      puVar10[0x141c] = cVar1;
      puVar10[0x1424] = cVar1;
      *(short *)(puVar10 + 0x1410) = sVar5;
      *(short *)(puVar10 + 0x1420) = sVar5;
      *(u_short *)(puVar10 + 0x16) = local_58;
      *(u_short *)(puVar10 + 0x1416) = local_56;
      puVar10 = puVar10 + 0x28;
    } while (-1 < iVar7);
    SetDrawMode((DR_MODE *)&DAT_801e3800,1,1,(uint)local_58,(RECT *)0x0);
    DAT_801e3830 = (undefined1)local_48;
    DAT_801e3831 = (undefined1)local_3c;
    uVar9 = (ushort)local_30 ^ 1;
    DAT_801e3836 = uVar9;
    SetDrawMode((DR_MODE *)&DAT_801e380c,1,1,(uint)local_58,(RECT *)0x0);
    SetDrawMode((DR_MODE *)&DAT_801e3818,1,1,(uint)local_56,(RECT *)0x0);
    DAT_801e3844 = (undefined1)local_44;
    DAT_801e3859 = (undefined1)local_34;
    DAT_801e3845 = uVar12;
    DAT_801e3848 = uVar9;
    DAT_801e3858 = DAT_801e3844;
    DAT_801e385c = uVar9;
    SetDrawEnv((DR_ENV *)&DAT_801e2440,(DRAWENV *)(&DAT_801e6060 + local_40 * 0x20 + param_3 * 0x1c)
              );
    AddPrims(param_4,&DAT_801e2440,&DAT_801e2440);
    AddPrims(param_4,&DAT_801e3800,&DAT_801e384c);
    AddPrims(param_4,&DAT_801e3860,&DAT_801e6038);
    AddPrims(param_4,&DAT_801e2534,&DAT_801e37ec);
    AddPrims(param_4,&DAT_801e2400,&DAT_801e2400);
  }
  return;
}



