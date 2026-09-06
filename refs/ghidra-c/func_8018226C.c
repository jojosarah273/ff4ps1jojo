
void FUN_8018226c(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  
  if ((DAT_8019ee28 & 0x10000) == 0) {
    uVar2 = 0;
    DAT_8019ee94 = 4;
    DAT_8019ee96 = 8;
    iVar9 = DAT_8019eea8 + 0x100;
    puVar8 = &DAT_801cfd68 + (param_1 & 0xffff);
    do {
      iVar6 = 0;
      iVar5 = iVar9 + uVar2 * 0x40;
      iVar7 = 0;
      do {
        iVar10 = 0;
        puVar4 = (undefined2 *)(iVar7 + (int)puVar8);
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = (undefined1 *)(iVar5 + iVar10);
          iVar10 = iVar10 + 1;
          *puVar3 = (char)((ushort)uVar1 >> 8);
        } while (iVar10 < 8);
        iVar5 = iVar5 + 8;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar6 < 8);
      uVar2 = uVar2 + 1 & 0xffff;
      puVar8 = puVar8 + 0x40;
    } while (uVar2 < 4);
    iVar9 = 0;
    do {
      iVar5 = 0;
      iVar6 = iVar9 + 1;
      psVar11 = &DAT_801e09cc + iVar9 * 0x20;
      do {
        iVar7 = iVar5 * 8 + iVar9 * 0x40;
        if (*psVar11 < 0) {
          psVar11 = &DAT_801e0a0c + iVar9 * 0x20;
          iVar5 = 8;
        }
        else {
          DAT_8019ee92 = *(undefined2 *)(&DAT_801e09ca + iVar7);
          DAT_8019ee90 = *(undefined2 *)(&DAT_801e09c8 + iVar7);
          LoadImage((RECT *)&DAT_8019ee90,(u_long *)(DAT_8019eea8 + iVar9 * 0x40 + 0x100));
        }
        iVar5 = iVar5 + 1;
        psVar11 = psVar11 + 4;
      } while (iVar5 < 8);
      iVar9 = iVar6;
    } while (iVar6 < 4);
  }
  return;
}



