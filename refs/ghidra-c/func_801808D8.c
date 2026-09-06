
void FUN_801808d8(short param_1,int param_2,short param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  undefined1 uVar10;
  int iVar11;
  undefined1 uVar12;
  ushort *puVar13;
  int iVar14;
  ushort local_70 [32];
  int local_30;
  
  uVar7 = (param_2 << 0x10) >> 0x10;
  if (param_3 == 0) {
    local_30 = uVar7 << 3;
    iVar11 = 0x1f;
    puVar9 = local_70 + 0x1f;
    iVar4 = uVar7 * 0x20 + 0x1f;
    do {
      *puVar9 = (ushort)iVar4;
      puVar9 = puVar9 + -1;
      iVar11 = iVar11 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar11);
  }
  else if (param_3 == 1) {
    puVar13 = local_70;
    local_30 = uVar7 << 3;
    puVar9 = (ushort *)(&DAT_800e6d00 + ((int)(uVar7 - ((param_2 << 0x10) >> 0x1f)) >> 1) * 0x20);
    iVar4 = 0x20000;
    do {
      if ((uVar7 & 1) == 0) {
        *puVar13 = puVar9[-0x80];
        puVar13[1] = *puVar9;
      }
      else {
        *puVar13 = puVar9[0x80];
        puVar13[1] = puVar9[0x100];
      }
      puVar13 = puVar13 + 2;
      iVar11 = iVar4 >> 0x10;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + 0x20000;
    } while (iVar11 < 0x20);
  }
  else {
    iVar4 = 0x5c00;
    if (param_3 == 2) {
      iVar4 = 0x5800;
    }
    iVar6 = 0;
    puVar9 = local_70;
    local_30 = uVar7 << 3;
    iVar11 = 0x10000;
    do {
      iVar14 = iVar4 + uVar7 * 0x20 + iVar6;
      iVar6 = iVar11 >> 0x10;
      *puVar9 = (&DAT_801cfd68)[iVar14];
      puVar9 = puVar9 + 1;
      iVar11 = iVar11 + 0x10000;
    } while (iVar6 < 0x20);
  }
  iVar4 = 0;
  do {
    iVar14 = 0;
    uVar8 = local_70[iVar4] & 0x1f;
    uVar7 = local_70[iVar4] >> 5 & 0x1f;
    iVar6 = uVar7 * 0x20 + uVar8;
    iVar11 = 0x10000;
    do {
      iVar3 = uVar7 * 0x10 + uVar8;
      if ((param_1 < 0) || (uVar12 = 0, iVar3 = iVar6, param_1 == 0)) {
        puVar5 = (undefined1 *)(DAT_8019eea4 + iVar3 * 0x20 + iVar14 * 2);
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        uVar10 = puVar5[0x10];
        uVar12 = puVar5[0x11];
      }
      else {
        uVar10 = 0;
        puVar5 = (undefined1 *)(DAT_8019eea4 + iVar6 * 0x10 + iVar14 * 2);
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
      }
      FUN_801824d8(uVar1,uVar2,uVar10,uVar12,DAT_8019eea8 + iVar14 * 0x20 + iVar4);
      iVar14 = iVar11 >> 0x10;
      iVar11 = iVar11 + 0x10000;
    } while (iVar14 < 8);
    iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
  } while (iVar4 < 0x20);
  if (param_3 != 0) {
    FUN_801805f8(DAT_8019eea8,local_70);
  }
  DAT_8019ee90 = DAT_8019ee9e;
  DAT_8019ee92 = DAT_8019eea0 + (short)local_30;
  LoadImage((RECT *)&DAT_8019ee90,DAT_8019eea8);
  return;
}



