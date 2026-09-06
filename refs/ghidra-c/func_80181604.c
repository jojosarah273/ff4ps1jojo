
void FUN_80181604(undefined4 param_1,ushort param_2,ushort param_3,short param_4)

{
  u_short uVar1;
  uint uVar2;
  short sVar3;
  u_short *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint x;
  int iVar7;
  uint uVar8;
  
  x = (uint)param_2;
  uVar2 = (uint)param_4;
  uVar8 = uVar2 & 3;
  if (((uVar2 & 0x10) == 0) || ((int)uVar2 < 0)) {
    DAT_8019ee94 = 0x40;
    DAT_8019ee96 = 8;
    DAT_8019eea8 = &DAT_801e01c8;
    if ((int)uVar2 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 1;
      if (uVar8 != 2) {
        uVar5 = (uint)((DAT_800d2105 & 7) == 0);
      }
    }
    sVar3 = 0x18;
    if ((int)uVar2 < 0) {
      sVar3 = 0x20;
    }
    DAT_8019ee9c = 0;
    DAT_8019ee90 = param_2;
    DAT_8019ee92 = param_3;
    DAT_8019ee9e = param_2;
    DAT_8019eea0 = param_3;
    DAT_8019eea4 = param_1;
    if (sVar3 != 0) {
      do {
        FUN_801808d8(uVar5,(int)DAT_8019ee9c,0);
        if (-1 < (int)uVar2) {
          FUN_80180504();
          FUN_80180414();
          FUN_80180314();
        }
        DAT_8019ee9c = DAT_8019ee9c + 1;
      } while (DAT_8019ee9c < sVar3);
    }
    if ((~uVar2 >> 0x1f & (uint)(uVar8 != 2)) != 0) {
      DAT_8019ee98 = 0xffff;
    }
    if ((int)uVar2 < 0) {
      DAT_8019ee10 = GetTPage(0,0,x,(uint)param_3);
      goto LAB_801817b8;
    }
  }
  puVar6 = &DAT_801a0a28;
  puVar4 = &DAT_801a0a10 + uVar8 * 4;
  iVar7 = 3;
  do {
    uVar1 = GetTPage(0,0,x,(uint)param_3);
    *puVar4 = uVar1;
    if (uVar8 == 2) {
      *puVar6 = puVar6[-4];
    }
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
    x = x + 0x40;
  } while (-1 < iVar7);
LAB_801817b8:
  FUN_8017f9fc();
  return;
}



