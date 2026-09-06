
void FUN_80181c20(undefined4 param_1,ushort param_2,ushort param_3,short param_4)

{
  u_short uVar1;
  int iVar2;
  int iVar3;
  u_short *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_4;
  uVar8 = uVar7 & 7;
  if ((uVar7 & 0x10) == 0) {
    DAT_8019ee94 = 0x80;
    DAT_8019ee96 = 8;
    DAT_8019eea8 = &DAT_801e01c8;
    if ((int)uVar7 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 1;
      if (uVar8 != 2) {
        uVar5 = (uint)((DAT_800d2105 & 7) == 0);
      }
    }
    iVar2 = 0;
    iVar3 = 0x10000;
    DAT_8019ee90 = param_2;
    DAT_8019ee92 = param_3;
    DAT_8019ee9e = param_2;
    DAT_8019eea0 = param_3;
    DAT_8019eea4 = param_1;
    do {
      FUN_801808d8(uVar5,iVar2,1);
      iVar2 = iVar3 >> 0x10;
      iVar3 = iVar3 + 0x10000;
    } while (iVar2 < 0x10);
    DAT_8019ee98 = 0xffff;
    FUN_801817ec();
  }
  if ((int)uVar7 < 0) {
    DAT_8019ee10 = GetTPage(1,0,(uint)param_2,(uint)param_3);
  }
  else {
    puVar6 = &DAT_801a0a28;
    puVar4 = &DAT_801a0a10 + uVar8 * 4;
    iVar2 = 3;
    do {
      uVar1 = GetTPage(1,1,(uint)param_2,(uint)param_3);
      *puVar4 = uVar1;
      if (uVar8 == 2) {
        *puVar6 = puVar6[-4];
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar2);
  }
  FUN_8017f9fc();
  return;
}



