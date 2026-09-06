
void FUN_8017df20(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  undefined2 *puVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  
  puVar7 = *(ushort **)(param_3 + 4);
  iVar14 = (int)((uint)puVar7[3] << 0x10) >> 0x13;
  iVar15 = ((int)((uint)puVar7[3] << 0x10) >> 0x10) + (int)(short)puVar7[5] + 0x10;
  if (0xf8 < iVar15) {
    iVar15 = 0xf8;
  }
  iVar16 = ((int)((uint)*puVar7 << 0x10) >> 0x18 & 1U) +
           ((int)((uint)puVar7[1] << 0x10) >> 0x17 & 2U);
  uVar8 = ((int)((uint)puVar7[1] << 0x10) >> 0xe & 0x3e0U) + iVar14 * 0x20;
  uVar17 = (int)((uint)*puVar7 << 0x10) >> 0x13 & 0x1f;
  do {
    if (iVar15 >> 3 <= iVar14) {
      return;
    }
    uVar3 = (int)uVar8 >> 9;
    uVar13 = (uVar3 & 2) + iVar16;
    iVar12 = 0;
    uVar6 = uVar8 & 0x3e0;
    iVar18 = iVar14 + 1;
    uVar8 = uVar8 + 0x20;
    uVar10 = uVar17;
    do {
      if ((uVar13 & 1) == 0) {
        uVar2 = (int)uVar10 >> 5 & 1;
      }
      else {
        uVar2 = -((int)uVar10 >> 5 & 1U);
      }
      iVar11 = param_1 + iVar14 * 0x42 + iVar12 * 2;
      if ((undefined2 *)(param_2 + (uVar13 + uVar2 & 3) * 0x800 + (uVar10 & 0x1f | uVar6) * 2) ==
          &DAT_801defb0) {
        iVar9 = 0;
        if (DAT_801defb0 != 0) {
          psVar4 = &DAT_801defb0;
          iVar1 = 1;
          do {
            iVar9 = iVar1;
            psVar4 = psVar4 + 1;
            if (0x17 < iVar9) goto LAB_8017e0a8;
            iVar1 = iVar9 + 1;
          } while (*psVar4 != 0);
        }
        if (iVar9 < 0x18) {
          DAT_8019ee78 = 1;
        }
        else {
LAB_8017e0a8:
          puVar7 = (ushort *)(&DAT_801defb0 + iVar9);
          DAT_8019f4b0 = iVar11 + -0x42;
          DAT_8019f4a8 = &DAT_801def70;
          DAT_8019f628 = &DAT_801defb0;
          DAT_8019f630 = iVar11;
          do {
            if ((*puVar7 & 0xff) != 0xfb) {
              puVar7[-0x38] = *puVar7;
              if (iVar9 == 0x18) {
                DAT_801defe0 = 0x20fb;
                DAT_801defa0 = 0x20fb;
              }
              else {
                *puVar7 = 0;
                puVar7[-0x20] = 0;
              }
            }
            puVar7 = puVar7 + 1;
            iVar9 = iVar9 + 1;
          } while ((char)*puVar7 != '\0');
        }
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 + 1;
    } while (iVar12 < 0x21);
    uVar3 = (uVar3 & 2) + iVar16;
    iVar12 = 0;
    puVar5 = (undefined2 *)(param_1 + iVar14 * 0x42);
    uVar10 = uVar17;
    do {
      if ((uVar3 & 1) == 0) {
        uVar13 = (int)uVar10 >> 5 & 1;
      }
      else {
        uVar13 = -((int)uVar10 >> 5 & 1U);
      }
      iVar12 = iVar12 + 1;
      uVar2 = uVar10 & 0x1f;
      uVar10 = uVar10 + 1;
      *puVar5 = *(undefined2 *)(param_2 + (uVar3 + uVar13 & 3) * 0x800 + (uVar2 | uVar6) * 2);
      puVar5 = puVar5 + 1;
      iVar14 = iVar18;
    } while (iVar12 < 0x21);
  } while( true );
}



