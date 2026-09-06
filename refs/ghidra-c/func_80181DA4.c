
void FUN_80181da4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  
  DAT_8019eea8 = &DAT_801e01c8;
  DAT_8019ee94 = 4;
  DAT_8019ee96 = 8;
  iVar6 = 0;
  if (-1 < DAT_801e09cc) {
    do {
      iVar10 = 0;
      iVar13 = 0x10000;
      puVar11 = &DAT_801d2168 + iVar6 * 0x20;
      do {
        uVar4 = *puVar11;
        puVar1 = puVar11 + 1;
        puVar2 = puVar11 + 0x10;
        puVar3 = puVar11 + 0x11;
        puVar11 = puVar11 + 2;
        FUN_801824d8(uVar4,*puVar1,*puVar2,*puVar3,DAT_8019eea8 + iVar6 * 0x20 + iVar10 * 4);
        iVar10 = iVar13 >> 0x10;
        iVar13 = iVar13 + 0x10000;
      } while (iVar10 < 8);
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < 0x10);
    iVar14 = 0x1ff;
    iVar6 = 0x3ff;
    iVar10 = 0x3fd0000;
    iVar13 = 0x1fe0000;
    do {
      bVar5 = (byte)((ushort)(&DAT_801e09cc)[(iVar14 >> 5) * 0x20] >> 8) & 0x70;
      bVar9 = DAT_8019eea8[iVar14];
      iVar14 = iVar13 >> 0x10;
      DAT_8019eea8[iVar6] = bVar5 | bVar9 >> 4;
      DAT_8019eea8[iVar6 + -1] = bVar5 | bVar9 & 0xf;
      iVar6 = iVar10 >> 0x10;
      iVar10 = iVar10 + -0x20000;
      iVar13 = iVar13 + -0x10000;
    } while (-1 < iVar14);
    iVar6 = 0;
    do {
      iVar10 = 0;
      psVar12 = &DAT_801e09cc + iVar6 * 0x20;
      do {
        iVar13 = iVar10 * 8 + iVar6 * 0x40;
        if (*psVar12 < 0) {
          psVar12 = &DAT_801e0a0c + iVar6 * 0x20;
          iVar10 = 8;
        }
        else {
          DAT_8019ee90 = *(undefined2 *)(&DAT_801e09c8 + iVar13);
          DAT_8019ee92 = *(undefined2 *)(&DAT_801e09ca + iVar13);
          LoadImage((RECT *)&DAT_8019ee90,(u_long *)(DAT_8019eea8 + iVar6 * 0x40));
        }
        iVar10 = (iVar10 + 1) * 0x10000 >> 0x10;
        psVar12 = psVar12 + 4;
      } while (iVar10 < 8);
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < 0x10);
  }
  if (DAT_8019ed78 != 0) {
    uVar7 = 0;
    DAT_8019eeac = (u_long *)&DAT_801e05c8;
    DAT_8019ee90 = 0x200;
    DAT_8019ee92 = 0;
    DAT_8019ee94 = 8;
    DAT_8019ee96 = 0x10;
    iVar6 = 0;
    do {
      iVar10 = (uVar7 & 1) << 2;
      puVar11 = &DAT_801d05c8 + iVar6;
      iVar6 = 0x10000;
      do {
        uVar4 = *puVar11;
        puVar1 = puVar11 + 1;
        puVar2 = puVar11 + 0x10;
        puVar3 = puVar11 + 0x11;
        puVar11 = puVar11 + 2;
        FUN_801824d8(uVar4,*puVar1,*puVar2,*puVar3,
                     (undefined1 *)((int)DAT_8019eeac + (uVar7 & 2) * 0x20 + iVar10));
        iVar13 = iVar6 >> 0x10;
        iVar10 = iVar10 + 8;
        iVar6 = iVar6 + 0x10000;
      } while (iVar13 < 8);
      uVar7 = (int)((uVar7 + 1) * 0x10000) >> 0x10;
      iVar6 = uVar7 << 5;
    } while ((int)uVar7 < 4);
    iVar14 = 0x7f;
    iVar13 = 0xfd0000;
    bVar9 = (DAT_800e6c01 & 0x1c) << 2;
    iVar6 = 0xff;
    iVar10 = 0x7e0000;
    do {
      iVar8 = iVar13 >> 0x10;
      iVar13 = iVar13 + -0x20000;
      bVar5 = *(byte *)((int)DAT_8019eeac + iVar14);
      iVar14 = iVar10 >> 0x10;
      *(byte *)((int)DAT_8019eeac + iVar6) = bVar9 | bVar5 >> 4;
      *(byte *)((int)DAT_8019eeac + iVar6 + -1) = bVar9 | bVar5 & 0xf;
      iVar6 = iVar8;
      iVar10 = iVar10 + -0x10000;
    } while (-1 < iVar14);
    LoadImage((RECT *)&DAT_8019ee90,DAT_8019eeac);
  }
  return;
}



