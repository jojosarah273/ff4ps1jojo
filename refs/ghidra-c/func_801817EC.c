
void FUN_801817ec(void)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short local_48 [16];
  
  psVar7 = local_48;
  puVar8 = &DAT_801e09cc;
  iVar11 = 0x10000;
  do {
    iVar9 = 7;
    puVar4 = puVar8 + 0x1c;
    do {
      *puVar4 = 0xffff;
      iVar9 = iVar9 + -1;
      puVar4 = puVar4 + -4;
    } while (-1 < iVar9);
    *psVar7 = 0;
    psVar7 = psVar7 + 1;
    iVar9 = iVar11 >> 0x10;
    puVar8 = puVar8 + 0x20;
    iVar11 = iVar11 + 0x10000;
  } while (iVar9 < 0x10);
  iVar11 = 0;
  do {
    iVar10 = 0;
    iVar5 = iVar11 * 2;
    uVar2 = (ushort)iVar11;
    uVar3 = *(ushort *)(&DAT_800e6c00 + iVar5);
    psVar7 = local_48;
    iVar9 = 0x10000;
    do {
      if ((uVar3 & 0x3ff) == iVar10 + 0x120U) {
        iVar6 = *psVar7 * 8 + iVar10 * 0x40;
        (&DAT_801e09cc)[iVar10 * 0x20 + *psVar7 * 4] = (short)((uVar3 & 0x1c00) << 2);
        *(ushort *)(&DAT_801e09c8 + iVar6) = (uVar2 & 0xf) * 8 + 0x200;
        *(ushort *)(&DAT_801e09ca + iVar6) = uVar2 & 0xf0;
        sVar1 = *psVar7;
        *(ushort *)(&DAT_801e09ce + iVar6) = uVar2;
        *psVar7 = sVar1 + 1;
        if (7 < (short)(sVar1 + 1)) {
          *psVar7 = 7;
        }
      }
      iVar10 = iVar9 >> 0x10;
      psVar7 = psVar7 + 1;
      iVar9 = iVar9 + 0x10000;
    } while (iVar10 < 0x10);
    iVar10 = 0;
    uVar3 = *(ushort *)(&DAT_800e6d00 + iVar5);
    psVar7 = local_48;
    iVar9 = 0x10000;
    do {
      if ((uVar3 & 0x3ff) == iVar10 + 0x120U) {
        iVar6 = *psVar7 * 8 + iVar10 * 0x40;
        (&DAT_801e09cc)[iVar10 * 0x20 + *psVar7 * 4] = (short)((uVar3 & 0x1c00) << 2);
        *(ushort *)(&DAT_801e09c8 + iVar6) = (uVar2 & 0xf) * 8 + 0x204;
        *(ushort *)(&DAT_801e09ca + iVar6) = uVar2 & 0xf0;
        sVar1 = *psVar7;
        *(ushort *)(&DAT_801e09ce + iVar6) = uVar2;
        *psVar7 = sVar1 + 1;
        if (7 < (short)(sVar1 + 1)) {
          *psVar7 = 7;
        }
      }
      iVar10 = iVar9 >> 0x10;
      psVar7 = psVar7 + 1;
      iVar9 = iVar9 + 0x10000;
    } while (iVar10 < 0x10);
    iVar10 = 0;
    uVar3 = *(ushort *)(&DAT_800e6e00 + iVar5);
    psVar7 = local_48;
    iVar9 = 0x10000;
    do {
      if ((uVar3 & 0x3ff) == iVar10 + 0x120U) {
        iVar6 = *psVar7 * 8 + iVar10 * 0x40;
        (&DAT_801e09cc)[iVar10 * 0x20 + *psVar7 * 4] = (short)((uVar3 & 0x1c00) << 2);
        *(ushort *)(&DAT_801e09c8 + iVar6) = (uVar2 & 0xf) * 8 + 0x200;
        *(ushort *)(&DAT_801e09ca + iVar6) = (uVar2 & 0xf0) + 8;
        sVar1 = *psVar7;
        *(ushort *)(&DAT_801e09ce + iVar6) = uVar2;
        *psVar7 = sVar1 + 1;
        if (7 < (short)(sVar1 + 1)) {
          *psVar7 = 7;
        }
      }
      iVar10 = iVar9 >> 0x10;
      psVar7 = psVar7 + 1;
      iVar9 = iVar9 + 0x10000;
    } while (iVar10 < 0x10);
    iVar10 = 0;
    uVar3 = *(ushort *)(&DAT_800e6f00 + iVar5);
    psVar7 = local_48;
    iVar9 = 0x10000;
    do {
      if ((uVar3 & 0x3ff) == iVar10 + 0x120U) {
        iVar5 = *psVar7 * 8 + iVar10 * 0x40;
        (&DAT_801e09cc)[iVar10 * 0x20 + *psVar7 * 4] = (short)((uVar3 & 0x1c00) << 2);
        *(ushort *)(&DAT_801e09c8 + iVar5) = (uVar2 & 0xf) * 8 + 0x204;
        *(ushort *)(&DAT_801e09ca + iVar5) = (uVar2 & 0xf0) + 8;
        sVar1 = *psVar7;
        *(ushort *)(&DAT_801e09ce + iVar5) = uVar2;
        *psVar7 = sVar1 + 1;
        if (7 < (short)(sVar1 + 1)) {
          *psVar7 = 7;
        }
      }
      iVar10 = iVar9 >> 0x10;
      psVar7 = psVar7 + 1;
      iVar9 = iVar9 + 0x10000;
    } while (iVar10 < 0x10);
    iVar11 = (iVar11 + 1) * 0x10000 >> 0x10;
  } while (iVar11 < 0x80);
  return;
}



