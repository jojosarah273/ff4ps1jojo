
void FUN_8017fc50(short param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  short local_48 [16];
  
  psVar8 = local_48;
  iVar11 = (int)param_1;
  puVar10 = &DAT_801e09cc;
  iVar9 = 0x10000;
  do {
    iVar6 = 7;
    puVar4 = puVar10 + 0x1c;
    do {
      *puVar4 = 0xffff;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + -4;
    } while (-1 < iVar6);
    *psVar8 = 0;
    psVar8 = psVar8 + 1;
    iVar6 = iVar9 >> 0x10;
    puVar10 = puVar10 + 0x20;
    iVar9 = iVar9 + 0x10000;
  } while (iVar6 < 0x10);
  iVar9 = 0;
  do {
    bVar1 = (&DAT_800e6c00)[iVar9];
    iVar7 = 0;
    uVar3 = (ushort)iVar9;
    psVar8 = local_48;
    iVar6 = 0x10000;
    do {
      if ((uint)bVar1 == iVar11 + iVar7) {
        iVar5 = *psVar8 * 8 + iVar7 * 0x40;
        (&DAT_801e09cc)[iVar7 * 0x20 + *psVar8 * 4] = 4;
        *(ushort *)(&DAT_801e09c8 + iVar5) = (uVar3 & 0xf) * 8 + 0x200;
        *(ushort *)(&DAT_801e09ca + iVar5) = uVar3 & 0xf0;
        sVar2 = *psVar8;
        *(ushort *)(&DAT_801e09ce + iVar5) = uVar3;
        *psVar8 = sVar2 + 1;
        if (7 < (short)(sVar2 + 1)) {
          *psVar8 = 7;
        }
      }
      iVar7 = iVar6 >> 0x10;
      psVar8 = psVar8 + 1;
      iVar6 = iVar6 + 0x10000;
    } while (iVar7 < 4);
    bVar1 = (&DAT_800e6c80)[iVar9];
    iVar7 = 0;
    psVar8 = local_48;
    iVar6 = 0x10000;
    do {
      if ((uint)bVar1 == iVar11 + iVar7) {
        iVar5 = *psVar8 * 8 + iVar7 * 0x40;
        (&DAT_801e09cc)[iVar7 * 0x20 + *psVar8 * 4] = 4;
        *(ushort *)(&DAT_801e09c8 + iVar5) = (uVar3 & 0xf) * 8 + 0x204;
        *(ushort *)(&DAT_801e09ca + iVar5) = uVar3 & 0xf0;
        sVar2 = *psVar8;
        *(ushort *)(&DAT_801e09ce + iVar5) = uVar3;
        *psVar8 = sVar2 + 1;
        if (7 < (short)(sVar2 + 1)) {
          *psVar8 = 7;
        }
      }
      iVar7 = iVar6 >> 0x10;
      psVar8 = psVar8 + 1;
      iVar6 = iVar6 + 0x10000;
    } while (iVar7 < 4);
    bVar1 = (&DAT_800e6d00)[iVar9];
    iVar7 = 0;
    psVar8 = local_48;
    iVar6 = 0x10000;
    do {
      if ((uint)bVar1 == iVar11 + iVar7) {
        iVar5 = *psVar8 * 8 + iVar7 * 0x40;
        (&DAT_801e09cc)[iVar7 * 0x20 + *psVar8 * 4] = 4;
        *(ushort *)(&DAT_801e09c8 + iVar5) = (uVar3 & 0xf) * 8 + 0x200;
        *(ushort *)(&DAT_801e09ca + iVar5) = (uVar3 & 0xf0) + 8;
        sVar2 = *psVar8;
        *(ushort *)(&DAT_801e09ce + iVar5) = uVar3;
        *psVar8 = sVar2 + 1;
        if (7 < (short)(sVar2 + 1)) {
          *psVar8 = 7;
        }
      }
      iVar7 = iVar6 >> 0x10;
      psVar8 = psVar8 + 1;
      iVar6 = iVar6 + 0x10000;
    } while (iVar7 < 4);
    bVar1 = (&DAT_800e6d80)[iVar9];
    iVar7 = 0;
    psVar8 = local_48;
    iVar6 = 0x10000;
    do {
      if ((uint)bVar1 == iVar11 + iVar7) {
        iVar5 = *psVar8 * 8 + iVar7 * 0x40;
        (&DAT_801e09cc)[iVar7 * 0x20 + *psVar8 * 4] = 4;
        *(ushort *)(&DAT_801e09c8 + iVar5) = (uVar3 & 0xf) * 8 + 0x204;
        *(ushort *)(&DAT_801e09ca + iVar5) = (uVar3 & 0xf0) + 8;
        sVar2 = *psVar8;
        *(ushort *)(&DAT_801e09ce + iVar5) = uVar3;
        *psVar8 = sVar2 + 1;
        if (7 < (short)(sVar2 + 1)) {
          *psVar8 = 7;
        }
      }
      iVar7 = iVar6 >> 0x10;
      psVar8 = psVar8 + 1;
      iVar6 = iVar6 + 0x10000;
    } while (iVar7 < 4);
    iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
  } while (iVar9 < 0x80);
  return;
}



